#ifndef VISTM32BUTTON_H
#define VISTM32BUTTON_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"

uint8_t VIBTCTR_GetPortState(void* gpio, uint16_t port);

//uint32_t VIBTCTR_getTick();

#ifdef __cplusplusq
}
#endif

#endif // VISTM32BUTTON_H