#ifndef UNIT_TESTING
#include <msp430.h>
#endif

#include "gpio_driver.h"

void gpio_init(void)
{
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
}

void gpio_set_pin_direction(port_num port, pin_num pin, pin_direction direction)
{
    // TODO: do something with direction
    //       for now, just set pin to output
    switch (port)
    {
        case port1:
            P1DIR |= (1 << pin);
            break;
        default:
            break;
    }
}

void gpio_set_pin(port_num port, pin_num pin)
{
    switch (port)
    {
        case port1:
            P1OUT |= (1 << pin);
            break;
        default:
            break;
    }
}

void gpio_clear_pin(port_num port, pin_num pin)
{
    switch (port)
    {
        case port1:
            P1OUT &= ~(1 << pin);
            break;
        default:
            break;
    }
}

void gpio_toggle_pin(port_num port, pin_num pin)
{
    switch (port)
    {
        case port1:
            P1OUT ^= (1 << pin);
            break;
        default:
            break;
    }
}
