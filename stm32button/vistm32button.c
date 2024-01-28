#include "vistm32button.h"

uint8_t VIBTCTR_GetPortState(void* gpio, uint16_t port) {
    if(NULL == gpio)
        return 0;
    GPIO_TypeDef* gpioTemp = (GPIO_TypeDef*)gpio;
    if(GPIOA != gpioTemp && GPIOB != gpioTemp && GPIOC != gpioTemp &&
       GPIOD != gpioTemp && GPIOE != gpioTemp && GPIOF != gpioTemp)
       return 0;
    return (uint8_t)HAL_GPIO_ReadPin(gpioTemp, port);
}

//uint32_t VIBTCTR_getTick() {
//    return HAL_GetTick();
//}