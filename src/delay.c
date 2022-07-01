#include "delay.h"

void delay_wait(uint16_t delay_length)
{
    for (volatile uint16_t i = delay_length; i > 0U; --i)
    {
        ; // delay
    }
}
