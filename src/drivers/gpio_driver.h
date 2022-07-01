#ifndef SRC_DRIVERS_GPIO_DRIVER_H_
#define SRC_DRIVERS_GPIO_DRIVER_H_

#include <stdint.h>
#include <stdbool.h>

typedef enum
{
    input,
    output
} pin_direction;

typedef enum
{
    port1,
    max_ports
} port_num;

typedef enum
{
    pin_0,
    pin_1,
    pin_2,
    pin_3,
    pin_4,
    pin_5,
    pin_6,
    pin_7,
} pin_num;

void gpio_init(void);
void gpio_set_pin_direction(port_num port, pin_num pin, pin_direction direction);
void gpio_set_pin(port_num port, pin_num pin);
void gpio_clear_pin(port_num port, pin_num pin);
void gpio_toggle_pin(port_num port, pin_num pin);

#endif /* SRC_DRIVERS_GPIO_DRIVER_H_ */
