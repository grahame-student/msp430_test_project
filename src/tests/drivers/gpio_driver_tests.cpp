#include "gtest/gtest.h"

#include "dummy_msp430.h"
#include "gpio_driver_wrapper.h"

TEST(GpioDriver, PinDirection_SetsOutputBit_To1)
{
    P1DIR = 0;

    gpio_set_pin_direction(port1, pin_0, output);

    EXPECT_EQ(P1DIR, 0x01);
}
