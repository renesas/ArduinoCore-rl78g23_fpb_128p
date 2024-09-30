#ifndef WiringVariante_h
#define WiringVariante_h

#include <stdio.h>
#include <stdarg.h>
#include "Arduino.h"
#include "utilities.h"

#ifdef __cplusplus
extern "C"{
#endif

#define ANALOG_PIN_START_NUMBER (103)
#define MAX_CYCLIC_HANDLER      (8)
#define EXTERNAL_NUM_INTERRUPTS (9)

/* PWM defines. */
#define PWM_MIN         0
#define PWM_MAX         255

/* External interrupt define. */
#define EXTERNAL_INTERRUPT_0    7
#define EXTERNAL_INTERRUPT_1    9
#define EXTERNAL_INTERRUPT_2    61
#define EXTERNAL_INTERRUPT_3    66
#define EXTERNAL_INTERRUPT_4    67
#define EXTERNAL_INTERRUPT_5    68
#define EXTERNAL_INTERRUPT_6    69
#define EXTERNAL_INTERRUPT_7    87
#define EXTERNAL_INTERRUPT_8    89

#define PWM_CH_NUM  (11)

#define FREQUENCY_MIN_VAL   (500)
#define FREQUENCY_MAX_VAL   (8000000)

/* pulseIn define. */
#define PULSEIN_CLOCK_CYCLE 29

#ifdef __cplusplus
} // extern "C"
#endif

// extern uint32_t R_BSP_GetFclkFreqHz(void);

#endif /* WiringVariante_h */

