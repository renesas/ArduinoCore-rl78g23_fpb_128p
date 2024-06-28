/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "pins_variant.h"
#include "wiring_private.h"
#include "wiring_variant.h"
#include "r_smc_entry.h"

volatile unsigned short *g_timer_period_reg[PWM_CH_NUM] =      {&TDR00,&TDR00,&TDR00,&TDR00,&TDR10,&TDR10,&TDR10,&TDR10,&TDR10,&TDR10,&TDR10};
volatile unsigned short *g_timer_duty_reg[PWM_CH_NUM]   =      {&TDR03,&TDR04,&TDR05,&TDR07,&TDR11,&TDR12,&TDR13,&TDR14,&TDR15,&TDR16,&TDR17};
volatile unsigned short *g_timer_analog_mode_reg[PWM_CH_NUM] = {&TMR03,&TMR04,&TMR05,&TMR07,&TMR11,&TMR12,&TMR13,&TMR14,&TMR15,&TMR16,&TMR17};
volatile unsigned short *g_timer_analog_clock_select_reg[PWM_CH_NUM] = {&TPS0,&TPS0,&TPS0,&TPS0,&TPS1,&TPS1,&TPS1,&TPS1,&TPS1,&TPS1,&TPS1};
const uint8_t  pwm_channel_table[PWM_CH_NUM]  = {PWM_PIN_9,PWM_PIN_8,PWM_PIN_7,PWM_PIN_2,PWM_PIN_11,PWM_PIN_12,PWM_PIN_13 ,
                                                 PWM_PIN_6,PWM_PIN_5,PWM_PIN_4,PWM_PIN_3};
const uint8_t  pwm_master_channel_table[PWM_CH_NUM]  = {0,0,0,0,1,1,1,1,1,1,1};
const uint8_t g_au8AnalogPinTable[NUM_ANALOG_INPUTS] = {
    ANALOG_PIN_0, ANALOG_PIN_1, ANALOG_PIN_2, ANALOG_PIN_3,ANALOG_PIN_4, ANALOG_PIN_5,
    ANALOG_PIN_6, ANALOG_PIN_7, ANALOG_PIN_8, ANALOG_PIN_9,ANALOG_PIN_10,
	ANALOG_PIN_11, ANALOG_PIN_12, ANALOG_PIN_13,ANALOG_PIN_14, ANALOG_PIN_15};

const uint8_t g_analog_pin_input[NUM_ANALOG_INPUTS] = {PIN_A0, PIN_A1, PIN_A2, PIN_A3, PIN_A4, PIN_A5, PIN_A6, PIN_A7, PIN_A8, PIN_A9,
                                                       PIN_A10, PIN_A11, PIN_A12, PIN_A13, PIN_A14, PIN_A15};

Pwm_func pwm_ch[PWM_CH_NUM] =
{
    {
        .open  = (void*)R_Config_TAU0_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU0_3_PWM_Create,
        .start  = (void*)R_Config_TAU0_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU0_03_PWM_Start,
        .stop_slave = (void*)R_Config_TAU0_03_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU0_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU0_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU0_4_PWM_Create,
        .start  = (void*)R_Config_TAU0_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU0_04_PWM_Start,
        .stop_slave = (void*)R_Config_TAU0_04_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU0_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU0_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU0_5_PWM_Create,
        .start  = (void*)R_Config_TAU0_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU0_05_PWM_Start,
        .stop_slave = (void*)R_Config_TAU0_05_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU0_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
	{
        .open  = (void*)R_Config_TAU0_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU0_7_PWM_Create,
        .start  = (void*)R_Config_TAU0_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU0_07_PWM_Start,
        .stop_slave = (void*)R_Config_TAU0_07_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU0_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU1_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU1_1_PWM_Create,
        .start  = (void*)R_Config_TAU1_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU1_01_PWM_Start,
        .stop_slave = (void*)R_Config_TAU1_01_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU1_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU1_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU1_2_PWM_Create,
        .start  = (void*)R_Config_TAU1_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU1_02_PWM_Start,
        .stop_slave = (void*)R_Config_TAU1_02_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU1_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU1_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU1_3_PWM_Create,
        .start  = (void*)R_Config_TAU1_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU1_03_PWM_Start,
        .stop_slave = (void*)R_Config_TAU1_03_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU1_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU1_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU1_4_PWM_Create,
        .start  = (void*)R_Config_TAU1_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU1_04_PWM_Start,
        .stop_slave = (void*)R_Config_TAU1_04_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU1_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU1_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU1_5_PWM_Create,
        .start  = (void*)R_Config_TAU1_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU1_05_PWM_Start,
        .stop_slave = (void*)R_Config_TAU1_05_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU1_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU1_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU1_6_PWM_Create,
        .start  = (void*)R_Config_TAU1_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU1_06_PWM_Start,
        .stop_slave = (void*)R_Config_TAU1_06_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU1_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    },
    {
        .open  = (void*)R_Config_TAU1_0_PWM_Create,
        .open_slave  = (void*)R_Config_TAU1_7_PWM_Create,
        .start  = (void*)R_Config_TAU1_0_PWM_Start,
        .start_slave = (void*)R_Config_TAU1_07_PWM_Start,
        .stop_slave = (void*)R_Config_TAU1_07_PWM_Stop,
        .enable_interrupt = (void*)R_Config_TAU1_0_PWM_Enable_IRQ,
        .cycle = CYCLE_VALUE,
    }
};
