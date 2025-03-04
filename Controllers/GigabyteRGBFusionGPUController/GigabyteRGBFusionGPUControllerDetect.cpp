#include "Detector.h"
#include "GigabyteRGBFusionGPUController.h"
#include "LogManager.h"
#include "RGBController.h"
#include "RGBController_GigabyteRGBFusionGPU.h"
#include "i2c_smbus.h"
#include "pci_ids.h"
#include <vector>
#include <stdio.h>
#include <stdlib.h>

#define GIGABYTEGPU_CONTROLLER_NAME "Gigabyte RGB Fusion GPU"

/******************************************************************************************\
*                                                                                          *
*   TestForGigabyteRGBFusionGPUController                                                  *
*                                                                                          *
*       Tests the given address to see if an RGB Fusion controller exists there.  First    *
*       does a quick write to test for a response                                          *
*                                                                                          *
\******************************************************************************************/

bool TestForGigabyteRGBFusionGPUController(i2c_smbus_interface* bus, unsigned char address)
{
    bool pass = false;
    int res;

    //Write out 0xAB 0x00 0x00 0x00 sequence
    res = bus->i2c_smbus_write_byte(address, 0xAB);

    if (res >= 0)
    {
        bus->i2c_smbus_write_byte(address, 0x00);
        bus->i2c_smbus_write_byte(address, 0x00);
        bus->i2c_smbus_write_byte(address, 0x00);

        // NVIDIA_RTX3060_DEV requires additional bytes to initialise
        if (address == 0x62)
        {
            bus->i2c_smbus_write_byte(address, 0x00);
            bus->i2c_smbus_write_byte(address, 0x00);
            bus->i2c_smbus_write_byte(address, 0x00);
            bus->i2c_smbus_write_byte(address, 0x00);
        }

        pass = true;

        res = bus->i2c_smbus_read_byte(address);

        if (res != 0xAB)
        {
            LOG_DEBUG("[%s] at 0x%02X address expected 0xAB but recieved: 0x%02X", GIGABYTEGPU_CONTROLLER_NAME, address, res);
            pass = false;
        }

        res = bus->i2c_smbus_read_byte(address);

        if ((res != 0x14)&& (res != 0x12) && (res != 0x10) && (res != 0x11))
        {
            LOG_DEBUG("[%s] at 0x%02X address expected 0x10|0x11|0x12|0x14 but recieved: 0x%02X", GIGABYTEGPU_CONTROLLER_NAME, address, res);
            pass = false;
        }

        bus->i2c_smbus_read_byte(address);
        bus->i2c_smbus_read_byte(address);

        //We don't know what the 0x48 controller returns, so for now just assume it exists
        if(address == 0x48)
        {
            pass = true;
        }
    }

    return(pass);

}   /* TestForRGBFusionGPUController() */

/******************************************************************************************\
*                                                                                          *
*   DetectRGBFusionGPUControllers                                                          *
*                                                                                          *
*       Detect GigabyteRGB Fusion controllers on the enumerated I2C busses at address 0x47.*
*                                                                                          *
*           bus - pointer to i2c_smbus_interface where RGB Fusion device is connected      *
*           dev - I2C address of RGB Fusion device                                         *
*                                                                                          *
\******************************************************************************************/

void DetectGigabyteRGBFusionGPUControllers(i2c_smbus_interface* bus, uint8_t i2c_addr, const std::string& name)
{
    // Check for RGB Fusion controller
    if(TestForGigabyteRGBFusionGPUController(bus, i2c_addr))
    {
        RGBFusionGPUController*     controller     = new RGBFusionGPUController(bus, i2c_addr);
        RGBController_RGBFusionGPU* rgb_controller = new RGBController_RGBFusionGPU(controller);
        rgb_controller->name                       = name;

        ResourceManager::get()->RegisterRGBController(rgb_controller);
    }
}   /* DetectGigabyteRGBFusionGPUControllers() */

REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1050 Ti G1 Gaming (rev A1)",         DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1050TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_GTX1050TI_G1_GAMING_SUB_DEV,           0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1050 Ti G1 Gaming",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1050TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_GTX1050TI_G1_GAMING_SUB_DEV,           0x48);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1060 G1 Gaming 6G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1060_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1060_G1_GAMING_SUB_DEV,             0x48);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1060 G1 Gaming 6G OC",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1060_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1060_G1_GAMING_OC_SUB_DEV,          0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1060 Xtreme Gaming V1",              DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1060_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1060_XTREME_V1_SUB_DEV,             0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1060 Xtreme Gaming v2",              DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1060_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1060_XTREME_V2_SUB_DEV,             0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1070 Xtreme Gaming",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1070_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1070_XTREME_SUB_DEV,                0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1070 G1 Gaming 8G V1",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1070_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1070_G1_GAMING_8G_SUB_DEV,          0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1070 Ti 8G Gaming",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1070TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_GTX1070TI_GAMING_SUB_DEV,              0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1080 G1 Gaming",                     DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1080_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1080_G1_GAMING_SUB_DEV,             0x48);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1080 Ti 11G",                        DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1080TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_GTX1080TI_SUB_DEV,                     0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1080 Ti Gaming OC 11G",              DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1080TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_GTX1080TI_GAMING_OC_SUB_DEV,           0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1080 Ti Gaming OC BLACK 11G",        DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1080TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_GTX1080TI_GAMING_OC_BLACK_SUB_DEV,     0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1080 Ti Xtreme Edition",             DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1080TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_GTX1080TI_XTREME_SUB_DEV,              0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1080 Ti Xtreme Waterforce Edition",  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1080TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_GTX1080TI_XTREME_WATERFORCE_SUB_DEV,   0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1650 Gaming OC",                     DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1650_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1650_GAMING_OC_SUB_DEV,             0x55);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1660 Gaming OC 6G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1660_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_GTX1660_GAMING_OC_6G_SUB_DEV,          0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte GTX1660 SUPER Gaming OC",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_GTX1660S_DEV,        GIGABYTE_SUB_VEN,   GIGABYTE_GTX1660S_GAMING_OC_SUB_DEV,            0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2060 Gaming OC",                     DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2060_TU106_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX2060_GAMING_OC_SUB_DEV,             0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2060 Gaming OC PRO",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2060_TU106_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX2060_GAMING_OC_PRO_SUB_DEV,         0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2060 Gaming OC PRO V2",              DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2060_TU106_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX2060_GAMING_OC_PRO_SUB_DEV2,        0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2060 Gaming OC PRO White",           DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2060_TU106_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX2060_GAMING_OC_PRO_WHITE_SUB_DEV,   0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2060 SUPER Gaming",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2060S_OC_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2060S_GAMING_SUB_DEV,               0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2060 SUPER Gaming OC",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2060S_OC_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2060S_GAMING_OC_SUB_DEV,            0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2060 SUPER Gaming OC 3X White 8G",   DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2060S_OC_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2060S_GAMING_OC_WHITE_SUB_DEV,      0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2060 SUPER Gaming OC 3X 8G V2",      DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2060S_OC_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2060S_GAMING_OC_3X_V2_SUB_DEV,      0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2070 Gaming OC 8G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2070_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX2070_GAMING_OC_SUB_DEV,             0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2070 Windforce 8G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2070_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX2070_WINDFORCE_SUB_DEV,             0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2070S Gaming OC",                    DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2070S_OC_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2070S_GAMING_OC_SUB_DEV,            0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2070S Gaming OC 3X",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2070S_OC_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2070S_GAMING_OC_3X_SUB_DEV,         0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2070S Gaming OC 3X",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2070S_OC_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2070S_GAMING_OC_3X_SUB_DEV,         0x55);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2070S Gaming OC 3X White",           DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2070S_OC_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2070S_GAMING_OC_3X_WHITE_SUB_DEV,   0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2080 Gaming OC 8G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2080_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX2080_GAMING_OC_SUB_DEV,             0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2080 Gaming OC 8G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2080_A_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_RTX2080_A_GAMING_OC_SUB_DEV,           0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2080 Ti GAMING OC 11G",              DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2080TI_A_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX2080_TI_GAMING_OC_SUB_DEV,          0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX2080S Gaming OC 8G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX2080S_DEV,        GIGABYTE_SUB_VEN,   GIGABYTE_RTX2080S_GAMING_OC_SUB_DEV,            0x47);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3050 Gaming OC 8G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3050_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3050_GAMING_OC_8GB_SUB_DEV,         0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 EAGLE OC 12G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_EAGLE_OC_12GB_SUB_DEV,         0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 EAGLE OC 12G V2",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_LHR_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_EAGLE_OC_12GB_SUB_DEV,         0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 EAGLE 12G LHR V2",              DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_LHR_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_EAGLE_12GB_V2_SUB_DEV,         0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Vision OC 12G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_VISION_OC_12GB_SUB_DEV,        0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Vision OC 12G LHR",             DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_LHR_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_VISION_OC_12GB_SUB_DEV,        0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Vision OC 12G v3.0",            DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_GA104_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_VISION_OC_12GB_SUB_DEV,        0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Gaming OC 12G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_GAMING_OC_12GB_SUB_DEV,        0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Gaming OC 12G (rev. 2.0)",      DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_GA104_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_GAMING_OC_12GB_SUB_DEV,        0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Gaming OC 12G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060_LHR_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060_GAMING_OC_12GB_SUB_DEV,        0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Ti EAGLE OC 8G",                DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060TI_EAGLE_OC_SUB_DEV,            0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Ti EAGLE OC 8G V2.0 LHR",       DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060TI_LHR_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060TI_EAGLE_OC_SUB_DEV,            0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Ti EAGLE OC 8G V2.0 LHR",       DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060TI_LHR_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060TI_EAGLE_OC_LHR_SUB_DEV,        0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Ti Gaming OC 8G",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060TI_GAMING_OC_SUB_DEV,           0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3060 Ti Vision OC 8G",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3060TI_LHR_DEV,   GIGABYTE_SUB_VEN,   GIGABYTE_RTX3060TI_VISION_OC_8G_SUB_DEV,        0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3070 Gaming OC 8G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3070_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3070_GAMING_OC_SUB_DEV,             0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3070 Gaming OC 8G v3.0 LHR",         DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3070_LHR_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX3070_GAMING_OC_SUB_DEV,             0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3070 Vision 8G",                     DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3070_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3070_VISION_OC_SUB_DEV,             0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3070 Vision 8G V2.0 LHR",            DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3070_LHR_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX3070_VISION_OC_SUB_DEV,             0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3070 Eagle OC 8G",                   DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3070_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3070_EAGLE_OC_SUB_DEV,              0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3070 Ti Gaming OC 8G",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3070TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_RTX3070TI_GAMING_OC_SUB_DEV,           0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3070 Ti EAGLE 8G",                   DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3070TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_RTX3070TI_EAGLE_SUB_DEV,               0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3070 Ti Vision OC 8G",               DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3070TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_RTX3070TI_VISION_OC_SUB_DEV,           0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3080 Gaming OC 10G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3080_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3080_GAMING_OC_SUB_DEV,             0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3080 Gaming OC 12G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3080_12G_LHR_DEV, GIGABYTE_SUB_VEN,   GIGABYTE_RTX3080_GAMING_OC_12G_SUB_DEV,         0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3080 Gaming OC 10G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3080_LHR_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX3080_GAMING_OC_SUB_DEV,             0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3080 Vision OC 10G (REV 2.0)",       DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3080_LHR_DEV,     GIGABYTE_SUB_VEN,   GIGABYTE_RTX3080_VISION_OC_SUB_DEV,             0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3080 Vision OC 10G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3080_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3080_VISION_OC_SUB_DEV,             0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3080 Ti Gaming OC 12G",              DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3080TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_RTX3080TI_GAMING_OC_SUB_DEV,           0x62);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3080 Ti EAGLE 12G",                  DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3080TI_DEV,       GIGABYTE_SUB_VEN,   GIGABYTE_RTX3080TI_EAGLE_SUB_DEV,               0x63);
REGISTER_I2C_PCI_DETECTOR("Gigabyte RTX3090 Gaming OC 24G",                 DetectGigabyteRGBFusionGPUControllers,  NVIDIA_VEN, NVIDIA_RTX3090_DEV,         GIGABYTE_SUB_VEN,   GIGABYTE_RTX3090_GAMING_OC_24GB_SUB_DEV,        0x62);
