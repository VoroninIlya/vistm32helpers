#ifndef VISTM32FLASH_H
#define VISTM32FLASH_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"

#define VIFLASH_STOP_ADDRESS 0x08200000

int32_t VIFLASH_SectorToAddress(uint8_t Sector);
int8_t VIFLASH_AddressToSector(uint32_t Address);
int32_t VIFLASH_SectorSize(uint8_t Sector);

#ifdef __cplusplusq
}
#endif

#endif // VISTM32FLASH_H