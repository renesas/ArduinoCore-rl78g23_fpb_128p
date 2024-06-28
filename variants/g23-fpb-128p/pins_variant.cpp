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
#include "wiring_private_tone.h"
#include "r_smc_entry.h"

/*
 * Pins descriptions
 */

const uint8_t SS   = PIN_SPI_SS;
const uint8_t MOSI = PIN_SPI_MOSI;
const uint8_t MISO = PIN_SPI_MISO;
const uint8_t SCK  = PIN_SPI_SCK;

const uint8_t A0 = PIN_A0;
const uint8_t A1 = PIN_A1;
const uint8_t A2 = PIN_A2;
const uint8_t A3 = PIN_A3;
const uint8_t A4 = PIN_A4;
const uint8_t A5 = PIN_A5;
const uint8_t A6 = PIN_A6;
const uint8_t A7 = PIN_A7;
const uint8_t A8 = PIN_A8;
const uint8_t A9 = PIN_A9;
const uint8_t A10 = PIN_A10;
const uint8_t A11 = PIN_A11;
const uint8_t A12 = PIN_A12;
const uint8_t A13 = PIN_A13;
const uint8_t A14 = PIN_A14;
const uint8_t A15 = PIN_A15;

/* tone pin set */
volatile unsigned short *g_tone_period_reg[TONE_CH_NUM] =             {&TDR03,&TDR04,&TDR05,&TDR07,&TDR10,&TDR11,
                                                                       &TDR12,&TDR13,&TDR14,&TDR15,&TDR16,&TDR17};
volatile unsigned short *g_timer_tone_mode_reg[TONE_CH_NUM] =         {&TMR03,&TMR04,&TMR05,&TMR07,&TMR10,&TMR11,
                                                                       &TMR12,&TMR13,&TMR14,&TMR15,&TMR16,&TMR17};
volatile unsigned short *g_timer_tone_clock_select_reg[TONE_CH_NUM] = { &TPS0, &TPS0, &TPS0, &TPS0, &TPS0, &TPS1,
                                                                       &TPS1,&TPS1,&TPS1,&TPS1,&TPS1,&TPS1};
const uint8_t  tone_channel_table[TONE_CH_NUM]  =                     {TONE_PIN_9,TONE_PIN_8,TONE_PIN_7,TONE_PIN_2,
                 TONE_PIN_10,TONE_PIN_11,TONE_PIN_12,TONE_PIN_13,TONE_PIN_6,TONE_PIN_5,TONE_PIN_4,TONE_PIN_3};

tone_func tone_ch[TONE_CH_NUM] =
{

    {
        .open  = R_Config_TAU0_3_Square_Wave_Create,
        .start = R_Config_TAU0_3_Square_Wave_Start,
        .stop = R_Config_TAU0_3_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU0_4_Square_Wave_Create,
        .start = R_Config_TAU0_4_Square_Wave_Start,
        .stop = R_Config_TAU0_4_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU0_5_Square_Wave_Create,
        .start = R_Config_TAU0_5_Square_Wave_Start,
        .stop = R_Config_TAU0_5_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU0_7_Square_Wave_Create,
        .start = R_Config_TAU0_7_Square_Wave_Start,
        .stop = R_Config_TAU0_7_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU1_0_Square_Wave_Create,
        .start = R_Config_TAU1_0_Square_Wave_Start,
        .stop = R_Config_TAU1_0_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU1_1_Square_Wave_Create,
        .start = R_Config_TAU1_1_Square_Wave_Start,
        .stop = R_Config_TAU1_1_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU1_2_Square_Wave_Create,
        .start = R_Config_TAU1_2_Square_Wave_Start,
        .stop = R_Config_TAU1_2_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU1_3_Square_Wave_Create,
        .start = R_Config_TAU1_3_Square_Wave_Start,
        .stop = R_Config_TAU1_3_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU1_4_Square_Wave_Create,
        .start = R_Config_TAU1_4_Square_Wave_Start,
        .stop = R_Config_TAU1_4_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU1_5_Square_Wave_Create,
        .start = R_Config_TAU1_5_Square_Wave_Start,
        .stop = R_Config_TAU1_5_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU1_6_Square_Wave_Create,
        .start = R_Config_TAU1_6_Square_Wave_Start,
        .stop = R_Config_TAU1_6_Square_Wave_Stop
    },
    {
        .open  = R_Config_TAU1_7_Square_Wave_Create,
        .start = R_Config_TAU1_7_Square_Wave_Start,
        .stop = R_Config_TAU1_7_Square_Wave_Stop
    }
};
