#include <msp430.h>

#include "watchdog_driver.h"

void watchdog_stop(void)
{
    WDTCTL = WDTPW | WDTHOLD;
}
