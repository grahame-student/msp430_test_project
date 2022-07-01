//***************************************************************************************
//  MSP430 Blink the LED Demo - Software Toggle P1.0
//
//  Description; Toggle P1.0 by xor'ing P1.0 inside of a software loop.
//  ACLK = n/a, MCLK = SMCLK = default DCO
//
//                MSP430x5xx
//             -----------------
//         /|\|              XIN|-
//          | |                 |
//          --|RST          XOUT|-
//            |                 |
//            |             P1.0|-->LED
//
//  Texas Instruments, Inc
//  July 2013
//***************************************************************************************

#include "drivers/watchdog_driver.h"
#include "drivers/gpio_driver.h"
#include "delay.h"

#define DELAY_LENGTH (10000U)

void main(void)
{
    watchdog_stop();
    gpio_init();

    gpio_set_pin_direction(port1, pin_0, output);

    for(;;)
    {
        gpio_toggle_pin(port1, pin_0);
        delay_wait(DELAY_LENGTH);
    }
}
