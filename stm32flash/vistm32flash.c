#include "vistm32flash.h"

int32_t VIFLASH_SectorToAddress(uint8_t Sector) {
  switch (Sector) {
    case FLASH_SECTOR_0: 
      return 0x08000000; 
    case FLASH_SECTOR_1: 
      return 0x08004000; 
    case FLASH_SECTOR_2: 
      return 0x08008000; 
    case FLASH_SECTOR_3: 
      return 0x0800C000;
    case FLASH_SECTOR_4: 
      return 0x08010000;
    case FLASH_SECTOR_5: 
      return 0x08020000;
    case FLASH_SECTOR_6: 
      return 0x08040000;
    case FLASH_SECTOR_7: 
      return 0x08060000;
    case FLASH_SECTOR_8: 
      return 0x08080000;
    case FLASH_SECTOR_9: 
      return 0x080A0000;
    case FLASH_SECTOR_10: 
      return 0x080C0000;
    case FLASH_SECTOR_11: 
      return 0x080E0000;
    case FLASH_SECTOR_12: 
      return 0x08100000;
    case FLASH_SECTOR_13: 
      return 0x08104000;
    case FLASH_SECTOR_14: 
      return 0x08108000;
    case FLASH_SECTOR_15: 
      return 0x0810C000;
    case FLASH_SECTOR_16: 
      return 0x08110000;
    case FLASH_SECTOR_17: 
      return 0x08120000;
    case FLASH_SECTOR_18: 
      return 0x08140000;
    case FLASH_SECTOR_19: 
      return 0x08160000;
    case FLASH_SECTOR_20: 
      return 0x08180000;
    case FLASH_SECTOR_21: 
      return 0x081A0000;
    case FLASH_SECTOR_22: 
      return 0x081C0000;
    case FLASH_SECTOR_23: 
      return 0x081E0000;
  }
  return -1;
}

int8_t VIFLASH_AddressToSector(uint32_t Address) {
  if(0x08000000 <= Address && 0x08004000 > Address)
    return FLASH_SECTOR_0;
  else if(0x08004000 <= Address && 0x08008000 > Address)
    return FLASH_SECTOR_1;
  else if(0x08008000 <= Address && 0x0800C000 > Address)
    return FLASH_SECTOR_2;
  else if(0x0800C000 <= Address && 0x08010000 > Address)
    return FLASH_SECTOR_3;
  else if(0x08010000 <= Address && 0x08020000 > Address)
    return FLASH_SECTOR_4;
  else if(0x08020000 <= Address && 0x08040000 > Address)
    return FLASH_SECTOR_5;
  else if(0x08040000 <= Address && 0x08060000 > Address)
    return FLASH_SECTOR_6;
  else if(0x08060000 <= Address && 0x08080000 > Address)
    return FLASH_SECTOR_7;
  else if(0x08080000 <= Address && 0x080A0000 > Address)
    return FLASH_SECTOR_8;
  else if(0x080A0000 <= Address && 0x080C0000 > Address)
    return FLASH_SECTOR_9;
  else if(0x080C0000 <= Address && 0x080E0000 > Address)
    return FLASH_SECTOR_10;
  else if(0x080E0000 <= Address && 0x08100000 > Address)
    return FLASH_SECTOR_11;
  else if(0x08100000 <= Address && 0x08104000 > Address)
    return FLASH_SECTOR_12;
  else if(0x08104000 <= Address && 0x08108000 > Address)
    return FLASH_SECTOR_13;
  else if(0x08108000 <= Address && 0x0810C000 > Address)
    return FLASH_SECTOR_14;
  else if(0x0810C000 <= Address && 0x08110000 > Address)
    return FLASH_SECTOR_15;
  else if(0x08110000 <= Address && 0x08120000 > Address)
    return FLASH_SECTOR_16;
  else if(0x08120000 <= Address && 0x08140000 > Address)
    return FLASH_SECTOR_17;
  else if(0x08140000 <= Address && 0x08160000 > Address)
    return FLASH_SECTOR_18;
  else if(0x08160000 <= Address && 0x08180000 > Address)
    return FLASH_SECTOR_19;
  else if(0x08180000 <= Address && 0x081A0000 > Address)
    return FLASH_SECTOR_20;
  else if(0x081A0000 <= Address && 0x081C0000 > Address)
    return FLASH_SECTOR_21;
  else if(0x081C0000 <= Address && 0x081E0000 > Address)
    return FLASH_SECTOR_22;
  else if(0x081E0000 <= Address && VIFLASH_STOP_ADDRESS > Address)
    return FLASH_SECTOR_23;
  return -1;
}

int32_t VIFLASH_SectorSize(uint8_t Sector) {
  switch (Sector) {
    case FLASH_SECTOR_0: 
      return 0x08004000 - 0x08000000; 
    case FLASH_SECTOR_1: 
      return 0x08008000 - 0x08004000; 
    case FLASH_SECTOR_2: 
      return 0x0800C000 - 0x08008000; 
    case FLASH_SECTOR_3: 
      return 0x08010000 - 0x0800C000;
    case FLASH_SECTOR_4: 
      return 0x08020000 - 0x08010000;
    case FLASH_SECTOR_5: 
      return 0x08040000 - 0x08020000;
    case FLASH_SECTOR_6: 
      return 0x08060000 - 0x08040000;
    case FLASH_SECTOR_7: 
      return 0x08080000 - 0x08060000;
    case FLASH_SECTOR_8: 
      return 0x080A0000 - 0x08080000;
    case FLASH_SECTOR_9: 
      return 0x080C0000 - 0x080A0000;
    case FLASH_SECTOR_10: 
      return 0x080E0000 - 0x080C0000;
    case FLASH_SECTOR_11: 
      return 0x08100000 - 0x080E0000;
    case FLASH_SECTOR_12: 
      return 0x08104000 - 0x08100000;
    case FLASH_SECTOR_13: 
      return 0x08108000 - 0x08104000;
    case FLASH_SECTOR_14: 
      return 0x0810C000 - 0x08108000;
    case FLASH_SECTOR_15: 
      return 0x08110000 - 0x0810C000;
    case FLASH_SECTOR_16: 
      return 0x08120000 - 0x08110000;
    case FLASH_SECTOR_17: 
      return 0x08140000 - 0x08120000;
    case FLASH_SECTOR_18: 
      return 0x08160000 - 0x08140000;
    case FLASH_SECTOR_19: 
      return 0x08180000 - 0x08160000;
    case FLASH_SECTOR_20: 
      return 0x081A0000 - 0x08180000;
    case FLASH_SECTOR_21: 
      return 0x081C0000 - 0x081A0000;
    case FLASH_SECTOR_22: 
      return 0x081E0000 - 0x081C0000;
    case FLASH_SECTOR_23: 
      return VIFLASH_STOP_ADDRESS - 0x081E0000;
  }
  return -1;
}