#ifndef DRIVERS_DUMMY_MSP430_H_
#define DRIVERS_DUMMY_MSP430_H_

#include <stdint.h>

// NOTE: If this define is used during a test case
//       then we're testing the dummy code, not the
//       real code
#define LOCKLPM5 (0x0001U)

// Mock out the registers so that we can manipulate / inspect
// them for test cases
extern uint16_t PM5CTL0;

extern uint8_t P1DIR;
extern uint8_t P1OUT;

#endif /* DRIVERS_DUMMY_MSP430_H_ */
