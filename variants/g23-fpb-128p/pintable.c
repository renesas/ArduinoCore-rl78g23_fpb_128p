#include "api/ArduinoAPI.h"
#include "pins_variant.h"
#include <pintable.h>

#define pinTable_userled1 pinTable_31
#define pinTable_userled2 pinTable_32
#define pinTable_usersw   pinTable_61

__far const PinTableType pinTable_0 =
{
        DIGITAL_PIN_MASK_0, //uint8_t mask;
        DIGITAL_PIN_BIT_0, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_0,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_0,//uint8_t pmct;
        DIGITAL_PIN_PMCE_0,//uint8_t pmce;
        DIGITAL_PIN_CCDE_0,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_0, //uint8_t pdidis;
        DIGITAL_PIN_PM_0,//uint8_t pm;
        DIGITAL_PIN_PU_0,//uint8_t pu;
        DIGITAL_PIN_PIM_0,//uint8_t pim;
        DIGITAL_PIN_POM_0,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_0),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_1 =
{
        DIGITAL_PIN_MASK_1, //uint8_t mask;
        DIGITAL_PIN_BIT_1, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_1,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_1,//uint8_t pmct;
        DIGITAL_PIN_PMCE_1,//uint8_t pmce;
        DIGITAL_PIN_CCDE_1,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_1, //uint8_t pdidis;
        DIGITAL_PIN_PM_1,//uint8_t pm;
        DIGITAL_PIN_PU_1,//uint8_t pu;
        DIGITAL_PIN_PIM_1,//uint8_t pim;
        DIGITAL_PIN_POM_1,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_1),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};
__far const PinTableType pinTable_2 =
{
        DIGITAL_PIN_MASK_2, //uint8_t mask;
        DIGITAL_PIN_BIT_2, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_2,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_2,//uint8_t pmct;
        DIGITAL_PIN_PMCE_2,//uint8_t pmce;
        DIGITAL_PIN_CCDE_2,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_2, //uint8_t pdidis;
        DIGITAL_PIN_PM_2,//uint8_t pm;
        DIGITAL_PIN_PU_2,//uint8_t pu;
        DIGITAL_PIN_PIM_2,//uint8_t pim;
        DIGITAL_PIN_POM_2,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_2),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_3 =
{
        DIGITAL_PIN_MASK_3, //uint8_t mask;
        DIGITAL_PIN_BIT_3, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_3,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_3,//uint8_t pmct;
        DIGITAL_PIN_PMCE_3,//uint8_t pmce;
        DIGITAL_PIN_CCDE_3,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_3, //uint8_t pdidis;
        DIGITAL_PIN_PM_3,//uint8_t pm;
        DIGITAL_PIN_PU_3,//uint8_t pu;
        DIGITAL_PIN_PIM_3,//uint8_t pim;
        DIGITAL_PIN_POM_3,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_3),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_4 =
{
        DIGITAL_PIN_MASK_4, //uint8_t mask;
        DIGITAL_PIN_BIT_4, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_4,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_4,//uint8_t pmct;
        DIGITAL_PIN_PMCE_4,//uint8_t pmce;
        DIGITAL_PIN_CCDE_4,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_4, //uint8_t pdidis;
        DIGITAL_PIN_PM_4,//uint8_t pm;
        DIGITAL_PIN_PU_4,//uint8_t pu;
        DIGITAL_PIN_PIM_4,//uint8_t pim;
        DIGITAL_PIN_POM_4,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_4),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_5 =
{
        DIGITAL_PIN_MASK_5, //uint8_t mask;
        DIGITAL_PIN_BIT_5, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_5,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_5,//uint8_t pmct;
        DIGITAL_PIN_PMCE_5,//uint8_t pmce;
        DIGITAL_PIN_CCDE_5,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_5, //uint8_t pdidis;
        DIGITAL_PIN_PM_5,//uint8_t pm;
        DIGITAL_PIN_PU_5,//uint8_t pu;
        DIGITAL_PIN_PIM_5,//uint8_t pim;
        DIGITAL_PIN_POM_5,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_5),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_6 =
{
        DIGITAL_PIN_MASK_6, //uint8_t mask;
        DIGITAL_PIN_BIT_6, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_6,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_6,//uint8_t pmct;
        DIGITAL_PIN_PMCE_6,//uint8_t pmce;
        DIGITAL_PIN_CCDE_6,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_6, //uint8_t pdidis;
        DIGITAL_PIN_PM_6,//uint8_t pm;
        DIGITAL_PIN_PU_6,//uint8_t pu;
        DIGITAL_PIN_PIM_6,//uint8_t pim;
        DIGITAL_PIN_POM_6,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_6),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_7 =
{
        DIGITAL_PIN_MASK_7, //uint8_t mask;
        DIGITAL_PIN_BIT_7, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_7,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_7,//uint8_t pmct;
        DIGITAL_PIN_PMCE_7,//uint8_t pmce;
        DIGITAL_PIN_CCDE_7,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_7, //uint8_t pdidis;
        DIGITAL_PIN_PM_7,//uint8_t pm;
        DIGITAL_PIN_PU_7,//uint8_t pu;
        DIGITAL_PIN_PIM_7,//uint8_t pim;
        DIGITAL_PIN_POM_7,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_7),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_8 =
{
        DIGITAL_PIN_MASK_8, //uint8_t mask;
        DIGITAL_PIN_BIT_8, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_8,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_8,//uint8_t pmct;
        DIGITAL_PIN_PMCE_8,//uint8_t pmce;
        DIGITAL_PIN_CCDE_8,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_8, //uint8_t pdidis;
        DIGITAL_PIN_PM_8,//uint8_t pm;
        DIGITAL_PIN_PU_8,//uint8_t pu;
        DIGITAL_PIN_PIM_8,//uint8_t pim;
        DIGITAL_PIN_POM_8,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_8),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_9 =
{
        DIGITAL_PIN_MASK_9, //uint8_t mask;
        DIGITAL_PIN_BIT_9, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_9,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_9,//uint8_t pmct;
        DIGITAL_PIN_PMCE_9,//uint8_t pmce;
        DIGITAL_PIN_CCDE_9,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_9, //uint8_t pdidis;
        DIGITAL_PIN_PM_9,//uint8_t pm;
        DIGITAL_PIN_PU_9,//uint8_t pu;
        DIGITAL_PIN_PIM_9,//uint8_t pim;
        DIGITAL_PIN_POM_9,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_9),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */
};

__far const PinTableType pinTable_10 =
{
        DIGITAL_PIN_MASK_10, //uint8_t mask;
        DIGITAL_PIN_BIT_10, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_10,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_10,//uint8_t pmct;
        DIGITAL_PIN_PMCE_10,//uint8_t pmce;
        DIGITAL_PIN_CCDE_10,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_10, //uint8_t pdidis;
        DIGITAL_PIN_PM_10,//uint8_t pm;
        DIGITAL_PIN_PU_10,//uint8_t pu;
        DIGITAL_PIN_PIM_10,//uint8_t pim;
        DIGITAL_PIN_POM_10,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_10),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_11 =
{
        DIGITAL_PIN_MASK_11, //uint8_t mask;
        DIGITAL_PIN_BIT_11, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_11,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_11,//uint8_t pmct;
        DIGITAL_PIN_PMCE_11,//uint8_t pmce;
        DIGITAL_PIN_CCDE_11,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_11, //uint8_t pdidis;
        DIGITAL_PIN_PM_11,//uint8_t pm;
        DIGITAL_PIN_PU_11,//uint8_t pu;
        DIGITAL_PIN_PIM_11,//uint8_t pim;
        DIGITAL_PIN_POM_11,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_11),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_12 =
{
        DIGITAL_PIN_MASK_12, //uint8_t mask;
        DIGITAL_PIN_BIT_12, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_12,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_12,//uint8_t pmct;
        DIGITAL_PIN_PMCE_12,//uint8_t pmce;
        DIGITAL_PIN_CCDE_12,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_12, //uint8_t pdidis;
        DIGITAL_PIN_PM_12,//uint8_t pm;
        DIGITAL_PIN_PU_12,//uint8_t pu;
        DIGITAL_PIN_PIM_12,//uint8_t pim;
        DIGITAL_PIN_POM_12,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_12),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_13 =
{
        DIGITAL_PIN_MASK_13, //uint8_t mask;
        DIGITAL_PIN_BIT_13, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_13,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_13,//uint8_t pmct;
        DIGITAL_PIN_PMCE_13,//uint8_t pmce;
        DIGITAL_PIN_CCDE_13,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_13, //uint8_t pdidis;
        DIGITAL_PIN_PM_13,//uint8_t pm;
        DIGITAL_PIN_PU_13,//uint8_t pu;
        DIGITAL_PIN_PIM_13,//uint8_t pim;
        DIGITAL_PIN_POM_13,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_13),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_14 =
{
        DIGITAL_PIN_MASK_14, //uint8_t mask;
        DIGITAL_PIN_BIT_14, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_14,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_14,//uint8_t pmct;
        DIGITAL_PIN_PMCE_14,//uint8_t pmce;
        DIGITAL_PIN_CCDE_14,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_14, //uint8_t pdidis;
        DIGITAL_PIN_PM_14,//uint8_t pm;
        DIGITAL_PIN_PU_14,//uint8_t pu;
        DIGITAL_PIN_PIM_14,//uint8_t pim;
        DIGITAL_PIN_POM_14,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_14),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_15 =
{
        DIGITAL_PIN_MASK_15, //uint8_t mask;
        DIGITAL_PIN_BIT_15, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_15,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_15,//uint8_t pmct;
        DIGITAL_PIN_PMCE_15,//uint8_t pmce;
        DIGITAL_PIN_CCDE_15,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_15, //uint8_t pdidis;
        DIGITAL_PIN_PM_15,//uint8_t pm;
        DIGITAL_PIN_PU_15,//uint8_t pu;
        DIGITAL_PIN_PIM_15,//uint8_t pim;
        DIGITAL_PIN_POM_15,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_15),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_16 =
{
        DIGITAL_PIN_MASK_16, //uint8_t mask;
        DIGITAL_PIN_BIT_16, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_16,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_16,//uint8_t pmct;
        DIGITAL_PIN_PMCE_16,//uint8_t pmce;
        DIGITAL_PIN_CCDE_16,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_16, //uint8_t pdidis;
        DIGITAL_PIN_PM_16,//uint8_t pm;
        DIGITAL_PIN_PU_16,//uint8_t pu;
        DIGITAL_PIN_PIM_16,//uint8_t pim;
        DIGITAL_PIN_POM_16,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_16),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_17 =
{
        DIGITAL_PIN_MASK_17, //uint8_t mask;
        DIGITAL_PIN_BIT_17, //uint8_t bit;
        17,//uint8_t timer;
        DIGITAL_PIN_PMCA_17,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_17,//uint8_t pmct;
        DIGITAL_PIN_PMCE_17,//uint8_t pmce;
        DIGITAL_PIN_CCDE_17,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_17, //uint8_t pdidis;
        DIGITAL_PIN_PM_17,//uint8_t pm;
        DIGITAL_PIN_PU_17,//uint8_t pu;
        DIGITAL_PIN_PIM_17,//uint8_t pim;
        DIGITAL_PIN_POM_17,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_18 =
{
        DIGITAL_PIN_MASK_18, //uint8_t mask;
        DIGITAL_PIN_BIT_18, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_18,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_18,//uint8_t pmct;
        DIGITAL_PIN_PMCE_18,//uint8_t pmce;
        DIGITAL_PIN_CCDE_18,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_18, //uint8_t pdidis;
        DIGITAL_PIN_PM_18,//uint8_t pm;
        DIGITAL_PIN_PU_18,//uint8_t pu;
        DIGITAL_PIN_PIM_18,//uint8_t pim;
        DIGITAL_PIN_POM_18,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_18),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_19 =
{
        DIGITAL_PIN_MASK_19, //uint8_t mask;
        DIGITAL_PIN_BIT_19, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_19,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_19,//uint8_t pmct;
        DIGITAL_PIN_PMCE_19,//uint8_t pmce;
        DIGITAL_PIN_CCDE_19,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_19, //uint8_t pdidis;
        DIGITAL_PIN_PM_19,//uint8_t pm;
        DIGITAL_PIN_PU_19,//uint8_t pu;
        DIGITAL_PIN_PIM_19,//uint8_t pim;
        DIGITAL_PIN_POM_19,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_19),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_20 =
{
        DIGITAL_PIN_MASK_20, //uint8_t mask;
        DIGITAL_PIN_BIT_20, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_20,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_20,//uint8_t pmct;
        DIGITAL_PIN_PMCE_20,//uint8_t pmce;
        DIGITAL_PIN_CCDE_20,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_20, //uint8_t pdidis;
        DIGITAL_PIN_PM_20,//uint8_t pm;
        DIGITAL_PIN_PU_20,//uint8_t pu;
        DIGITAL_PIN_PIM_20,//uint8_t pim;
        DIGITAL_PIN_POM_20,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_20),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_21 =
{
        DIGITAL_PIN_MASK_21, //uint8_t mask;
        DIGITAL_PIN_BIT_21, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_21,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_21,//uint8_t pmct;
        DIGITAL_PIN_PMCE_21,//uint8_t pmce;
        DIGITAL_PIN_CCDE_21,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_21, //uint8_t pdidis;
        DIGITAL_PIN_PM_21,//uint8_t pm;
        DIGITAL_PIN_PU_21,//uint8_t pu;
        DIGITAL_PIN_PIM_21,//uint8_t pim;
        DIGITAL_PIN_POM_21,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_21),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_22 =
{
        DIGITAL_PIN_MASK_22, //uint8_t mask;
        DIGITAL_PIN_BIT_22, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_22,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_22,//uint8_t pmct;
        DIGITAL_PIN_PMCE_22,//uint8_t pmce;
        DIGITAL_PIN_CCDE_22,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_22, //uint8_t pdidis;
        DIGITAL_PIN_PM_22,//uint8_t pm;
        DIGITAL_PIN_PU_22,//uint8_t pu;
        DIGITAL_PIN_PIM_22,//uint8_t pim;
        DIGITAL_PIN_POM_22,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_22),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_23 =
{
        DIGITAL_PIN_MASK_23, //uint8_t mask;
        DIGITAL_PIN_BIT_23, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_23,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_23,//uint8_t pmct;
        DIGITAL_PIN_PMCE_23,//uint8_t pmce;
        DIGITAL_PIN_CCDE_23,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_23, //uint8_t pdidis;
        DIGITAL_PIN_PM_23,//uint8_t pm;
        DIGITAL_PIN_PU_23,//uint8_t pu;
        DIGITAL_PIN_PIM_23,//uint8_t pim;
        DIGITAL_PIN_POM_23,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_23),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_24 =
{
        DIGITAL_PIN_MASK_24, //uint8_t mask;
        DIGITAL_PIN_BIT_24, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_24,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_24,//uint8_t pmct;
        DIGITAL_PIN_PMCE_24,//uint8_t pmce;
        DIGITAL_PIN_CCDE_24,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_24, //uint8_t pdidis;
        DIGITAL_PIN_PM_24,//uint8_t pm;
        DIGITAL_PIN_PU_24,//uint8_t pu;
        DIGITAL_PIN_PIM_24,//uint8_t pim;
        DIGITAL_PIN_POM_24,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_24),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_25 =
{
        DIGITAL_PIN_MASK_25, //uint8_t mask;
        DIGITAL_PIN_BIT_25, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_25,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_25,//uint8_t pmct;
        DIGITAL_PIN_PMCE_25,//uint8_t pmce;
        DIGITAL_PIN_CCDE_25,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_25, //uint8_t pdidis;
        DIGITAL_PIN_PM_25,//uint8_t pm;
        DIGITAL_PIN_PU_25,//uint8_t pu;
        DIGITAL_PIN_PIM_25,//uint8_t pim;
        DIGITAL_PIN_POM_25,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_25),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_26 =
{
        DIGITAL_PIN_MASK_26, //uint8_t mask;
        DIGITAL_PIN_BIT_26, //uint8_t bit;
//        17,//uint8_t timer;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_26,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_26,//uint8_t pmct;
        DIGITAL_PIN_PMCE_26,//uint8_t pmce;
        DIGITAL_PIN_CCDE_26,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_26, //uint8_t pdidis;
        DIGITAL_PIN_PM_26,//uint8_t pm;
        DIGITAL_PIN_PU_26,//uint8_t pu;
        DIGITAL_PIN_PIM_26,//uint8_t pim;
        DIGITAL_PIN_POM_26,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_26),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_26),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_26),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_17),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_26),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_26),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_26),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_26),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_26),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_27 =
{
        DIGITAL_PIN_MASK_27, //uint8_t mask;
        DIGITAL_PIN_BIT_27, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_27,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_27,//uint8_t pmct;
        DIGITAL_PIN_PMCE_27,//uint8_t pmce;
        DIGITAL_PIN_CCDE_27,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_27, //uint8_t pdidis;
        DIGITAL_PIN_PM_27,//uint8_t pm;
        DIGITAL_PIN_PU_27,//uint8_t pu;
        DIGITAL_PIN_PIM_27,//uint8_t pim;
        DIGITAL_PIN_POM_27,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_27),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_28 =
{
        DIGITAL_PIN_MASK_28, //uint8_t mask;
        DIGITAL_PIN_BIT_28, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_28,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_28,//uint8_t pmct;
        DIGITAL_PIN_PMCE_28,//uint8_t pmce;
        DIGITAL_PIN_CCDE_28,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_28, //uint8_t pdidis;
        DIGITAL_PIN_PM_28,//uint8_t pm;
        DIGITAL_PIN_PU_28,//uint8_t pu;
        DIGITAL_PIN_PIM_28,//uint8_t pim;
        DIGITAL_PIN_POM_28,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_28),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_29 =
{
        DIGITAL_PIN_MASK_29, //uint8_t mask;
        DIGITAL_PIN_BIT_29, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_29,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_29,//uint8_t pmct;
        DIGITAL_PIN_PMCE_29,//uint8_t pmce;
        DIGITAL_PIN_CCDE_29,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_29, //uint8_t pdidis;
        DIGITAL_PIN_PM_29,//uint8_t pm;
        DIGITAL_PIN_PU_29,//uint8_t pu;
        DIGITAL_PIN_PIM_29,//uint8_t pim;
        DIGITAL_PIN_POM_29,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_29),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_30 =
{
        DIGITAL_PIN_MASK_30, //uint8_t mask;
        DIGITAL_PIN_BIT_30, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_30,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_30,//uint8_t pmct;
        DIGITAL_PIN_PMCE_30,//uint8_t pmce;
        DIGITAL_PIN_CCDE_30,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_30, //uint8_t pdidis;
        DIGITAL_PIN_PM_30,//uint8_t pm;
        DIGITAL_PIN_PU_30,//uint8_t pu;
        DIGITAL_PIN_PIM_30,//uint8_t pim;
        DIGITAL_PIN_POM_30,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_30),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_31 =
{
        DIGITAL_PIN_MASK_31, //uint8_t mask;
        DIGITAL_PIN_BIT_31, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_31,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_31,//uint8_t pmct;
        DIGITAL_PIN_PMCE_31,//uint8_t pmce;
        DIGITAL_PIN_CCDE_31,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_31, //uint8_t pdidis;
        DIGITAL_PIN_PM_31,//uint8_t pm;
        DIGITAL_PIN_PU_31,//uint8_t pu;
        DIGITAL_PIN_PIM_31,//uint8_t pim;
        DIGITAL_PIN_POM_31,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_31),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_32 =
{
        DIGITAL_PIN_MASK_32, //uint8_t mask;
        DIGITAL_PIN_BIT_32, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_32,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_32,//uint8_t pmct;
        DIGITAL_PIN_PMCE_32,//uint8_t pmce;
        DIGITAL_PIN_CCDE_32,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_32, //uint8_t pdidis;
        DIGITAL_PIN_PM_32,//uint8_t pm;
        DIGITAL_PIN_PU_32,//uint8_t pu;
        DIGITAL_PIN_PIM_32,//uint8_t pim;
        DIGITAL_PIN_POM_32,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_32),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_33 =
{
        DIGITAL_PIN_MASK_33, //uint8_t mask;
        DIGITAL_PIN_BIT_33, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_33,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_33,//uint8_t pmct;
        DIGITAL_PIN_PMCE_33,//uint8_t pmce;
        DIGITAL_PIN_CCDE_33,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_33, //uint8_t pdidis;
        DIGITAL_PIN_PM_33,//uint8_t pm;
        DIGITAL_PIN_PU_33,//uint8_t pu;
        DIGITAL_PIN_PIM_33,//uint8_t pim;
        DIGITAL_PIN_POM_33,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_33),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_34 =
{
        DIGITAL_PIN_MASK_34, //uint8_t mask;
        DIGITAL_PIN_BIT_34, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_34,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_34,//uint8_t pmct;
        DIGITAL_PIN_PMCE_34,//uint8_t pmce;
        DIGITAL_PIN_CCDE_34,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_34, //uint8_t pdidis;
        DIGITAL_PIN_PM_34,//uint8_t pm;
        DIGITAL_PIN_PU_34,//uint8_t pu;
        DIGITAL_PIN_PIM_34,//uint8_t pim;
        DIGITAL_PIN_POM_34,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_34),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_35 =
{
        DIGITAL_PIN_MASK_35, //uint8_t mask;
        DIGITAL_PIN_BIT_35, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_35,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_35,//uint8_t pmct;
        DIGITAL_PIN_PMCE_35,//uint8_t pmce;
        DIGITAL_PIN_CCDE_35,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_35, //uint8_t pdidis;
        DIGITAL_PIN_PM_35,//uint8_t pm;
        DIGITAL_PIN_PU_35,//uint8_t pu;
        DIGITAL_PIN_PIM_35,//uint8_t pim;
        DIGITAL_PIN_POM_35,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_35),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_36 =
{
        DIGITAL_PIN_MASK_36, //uint8_t mask;
        DIGITAL_PIN_BIT_36, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_36,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_36,//uint8_t pmct;
        DIGITAL_PIN_PMCE_36,//uint8_t pmce;
        DIGITAL_PIN_CCDE_36,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_36, //uint8_t pdidis;
        DIGITAL_PIN_PM_36,//uint8_t pm;
        DIGITAL_PIN_PU_36,//uint8_t pu;
        DIGITAL_PIN_PIM_36,//uint8_t pim;
        DIGITAL_PIN_POM_36,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_36),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_37 =
{
        DIGITAL_PIN_MASK_37, //uint8_t mask;
        DIGITAL_PIN_BIT_37, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_37,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_37,//uint8_t pmct;
        DIGITAL_PIN_PMCE_37,//uint8_t pmce;
        DIGITAL_PIN_CCDE_37,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_37, //uint8_t pdidis;
        DIGITAL_PIN_PM_37,//uint8_t pm;
        DIGITAL_PIN_PU_37,//uint8_t pu;
        DIGITAL_PIN_PIM_37,//uint8_t pim;
        DIGITAL_PIN_POM_37,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_37),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_38 =
{
        DIGITAL_PIN_MASK_38, //uint8_t mask;
        DIGITAL_PIN_BIT_38, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_38,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_38,//uint8_t pmct;
        DIGITAL_PIN_PMCE_38,//uint8_t pmce;
        DIGITAL_PIN_CCDE_38,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_38, //uint8_t pdidis;
        DIGITAL_PIN_PM_38,//uint8_t pm;
        DIGITAL_PIN_PU_38,//uint8_t pu;
        DIGITAL_PIN_PIM_38,//uint8_t pim;
        DIGITAL_PIN_POM_38,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_38),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_39 =
{
        DIGITAL_PIN_MASK_39, //uint8_t mask;
        DIGITAL_PIN_BIT_39, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_39,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_39,//uint8_t pmct;
        DIGITAL_PIN_PMCE_39,//uint8_t pmce;
        DIGITAL_PIN_CCDE_39,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_39, //uint8_t pdidis;
        DIGITAL_PIN_PM_39,//uint8_t pm;
        DIGITAL_PIN_PU_39,//uint8_t pu;
        DIGITAL_PIN_PIM_39,//uint8_t pim;
        DIGITAL_PIN_POM_39,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_39),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_40 =
{
        DIGITAL_PIN_MASK_40, //uint8_t mask;
        DIGITAL_PIN_BIT_40, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_40,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_40,//uint8_t pmct;
        DIGITAL_PIN_PMCE_40,//uint8_t pmce;
        DIGITAL_PIN_CCDE_40,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_40, //uint8_t pdidis;
        DIGITAL_PIN_PM_40,//uint8_t pm;
        DIGITAL_PIN_PU_40,//uint8_t pu;
        DIGITAL_PIN_PIM_40,//uint8_t pim;
        DIGITAL_PIN_POM_40,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_40),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_41 =
{
        DIGITAL_PIN_MASK_41, //uint8_t mask;
        DIGITAL_PIN_BIT_41, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_41,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_41,//uint8_t pmct;
        DIGITAL_PIN_PMCE_41,//uint8_t pmce;
        DIGITAL_PIN_CCDE_41,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_41, //uint8_t pdidis;
        DIGITAL_PIN_PM_41,//uint8_t pm;
        DIGITAL_PIN_PU_41,//uint8_t pu;
        DIGITAL_PIN_PIM_41,//uint8_t pim;
        DIGITAL_PIN_POM_41,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_41),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_42 =
{
        DIGITAL_PIN_MASK_42, //uint8_t mask;
        DIGITAL_PIN_BIT_42, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_42,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_42,//uint8_t pmct;
        DIGITAL_PIN_PMCE_42,//uint8_t pmce;
        DIGITAL_PIN_CCDE_42,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_42, //uint8_t pdidis;
        DIGITAL_PIN_PM_42,//uint8_t pm;
        DIGITAL_PIN_PU_42,//uint8_t pu;
        DIGITAL_PIN_PIM_42,//uint8_t pim;
        DIGITAL_PIN_POM_42,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_42),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_43 =
{
        DIGITAL_PIN_MASK_43, //uint8_t mask;
        DIGITAL_PIN_BIT_43, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_43,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_43,//uint8_t pmct;
        DIGITAL_PIN_PMCE_43,//uint8_t pmce;
        DIGITAL_PIN_CCDE_43,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_43, //uint8_t pdidis;
        DIGITAL_PIN_PM_43,//uint8_t pm;
        DIGITAL_PIN_PU_43,//uint8_t pu;
        DIGITAL_PIN_PIM_43,//uint8_t pim;
        DIGITAL_PIN_POM_43,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_43),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_44 =
{
        DIGITAL_PIN_MASK_44, //uint8_t mask;
        DIGITAL_PIN_BIT_44, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_44,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_44,//uint8_t pmct;
        DIGITAL_PIN_PMCE_44,//uint8_t pmce;
        DIGITAL_PIN_CCDE_44,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_44, //uint8_t pdidis;
        DIGITAL_PIN_PM_44,//uint8_t pm;
        DIGITAL_PIN_PU_44,//uint8_t pu;
        DIGITAL_PIN_PIM_44,//uint8_t pim;
        DIGITAL_PIN_POM_44,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_44),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_45 =
{
        DIGITAL_PIN_MASK_45, //uint8_t mask;
        DIGITAL_PIN_BIT_45, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_45,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_45,//uint8_t pmct;
        DIGITAL_PIN_PMCE_45,//uint8_t pmce;
        DIGITAL_PIN_CCDE_45,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_45, //uint8_t pdidis;
        DIGITAL_PIN_PM_45,//uint8_t pm;
        DIGITAL_PIN_PU_45,//uint8_t pu;
        DIGITAL_PIN_PIM_45,//uint8_t pim;
        DIGITAL_PIN_POM_45,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_45),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_46 =
{
        DIGITAL_PIN_MASK_46, //uint8_t mask;
        DIGITAL_PIN_BIT_46, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_46,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_46,//uint8_t pmct;
        DIGITAL_PIN_PMCE_46,//uint8_t pmce;
        DIGITAL_PIN_CCDE_46,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_46, //uint8_t pdidis;
        DIGITAL_PIN_PM_46,//uint8_t pm;
        DIGITAL_PIN_PU_46,//uint8_t pu;
        DIGITAL_PIN_PIM_46,//uint8_t pim;
        DIGITAL_PIN_POM_46,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_46),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_47 =
{
        DIGITAL_PIN_MASK_47, //uint8_t mask;
        DIGITAL_PIN_BIT_47, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_47,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_47,//uint8_t pmct;
        DIGITAL_PIN_PMCE_47,//uint8_t pmce;
        DIGITAL_PIN_CCDE_47,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_47, //uint8_t pdidis;
        DIGITAL_PIN_PM_47,//uint8_t pm;
        DIGITAL_PIN_PU_47,//uint8_t pu;
        DIGITAL_PIN_PIM_47,//uint8_t pim;
        DIGITAL_PIN_POM_47,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_47),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_48 =
{
        DIGITAL_PIN_MASK_48, //uint8_t mask;
        DIGITAL_PIN_BIT_48, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_48,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_48,//uint8_t pmct;
        DIGITAL_PIN_PMCE_48,//uint8_t pmce;
        DIGITAL_PIN_CCDE_48,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_48, //uint8_t pdidis;
        DIGITAL_PIN_PM_48,//uint8_t pm;
        DIGITAL_PIN_PU_48,//uint8_t pu;
        DIGITAL_PIN_PIM_48,//uint8_t pim;
        DIGITAL_PIN_POM_48,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_48),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_49 =
{
        DIGITAL_PIN_MASK_49, //uint8_t mask;
        DIGITAL_PIN_BIT_49, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_49,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_49,//uint8_t pmct;
        DIGITAL_PIN_PMCE_49,//uint8_t pmce;
        DIGITAL_PIN_CCDE_49,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_49, //uint8_t pdidis;
        DIGITAL_PIN_PM_49,//uint8_t pm;
        DIGITAL_PIN_PU_49,//uint8_t pu;
        DIGITAL_PIN_PIM_49,//uint8_t pim;
        DIGITAL_PIN_POM_49,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_49),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_50 =
{
        DIGITAL_PIN_MASK_50, //uint8_t mask;
        DIGITAL_PIN_BIT_50, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_50,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_50,//uint8_t pmct;
        DIGITAL_PIN_PMCE_50,//uint8_t pmce;
        DIGITAL_PIN_CCDE_50,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_50, //uint8_t pdidis;
        DIGITAL_PIN_PM_50,//uint8_t pm;
        DIGITAL_PIN_PU_50,//uint8_t pu;
        DIGITAL_PIN_PIM_50,//uint8_t pim;
        DIGITAL_PIN_POM_50,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_50),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_51 =
{
        DIGITAL_PIN_MASK_51, //uint8_t mask;
        DIGITAL_PIN_BIT_51, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_51,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_51,//uint8_t pmct;
        DIGITAL_PIN_PMCE_51,//uint8_t pmce;
        DIGITAL_PIN_CCDE_51,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_51, //uint8_t pdidis;
        DIGITAL_PIN_PM_51,//uint8_t pm;
        DIGITAL_PIN_PU_51,//uint8_t pu;
        DIGITAL_PIN_PIM_51,//uint8_t pim;
        DIGITAL_PIN_POM_51,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_51),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_52 =
{
        DIGITAL_PIN_MASK_52, //uint8_t mask;
        DIGITAL_PIN_BIT_52, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_52,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_52,//uint8_t pmct;
        DIGITAL_PIN_PMCE_52,//uint8_t pmce;
        DIGITAL_PIN_CCDE_52,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_52, //uint8_t pdidis;
        DIGITAL_PIN_PM_52,//uint8_t pm;
        DIGITAL_PIN_PU_52,//uint8_t pu;
        DIGITAL_PIN_PIM_52,//uint8_t pim;
        DIGITAL_PIN_POM_52,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_52),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_53 =
{
        DIGITAL_PIN_MASK_53, //uint8_t mask;
        DIGITAL_PIN_BIT_53, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_53,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_53,//uint8_t pmct;
        DIGITAL_PIN_PMCE_53,//uint8_t pmce;
        DIGITAL_PIN_CCDE_53,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_53, //uint8_t pdidis;
        DIGITAL_PIN_PM_53,//uint8_t pm;
        DIGITAL_PIN_PU_53,//uint8_t pu;
        DIGITAL_PIN_PIM_53,//uint8_t pim;
        DIGITAL_PIN_POM_53,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_53),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_54 =
{
        DIGITAL_PIN_MASK_54, //uint8_t mask;
        DIGITAL_PIN_BIT_54, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_54,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_54,//uint8_t pmct;
        DIGITAL_PIN_PMCE_54,//uint8_t pmce;
        DIGITAL_PIN_CCDE_54,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_54, //uint8_t pdidis;
        DIGITAL_PIN_PM_54,//uint8_t pm;
        DIGITAL_PIN_PU_54,//uint8_t pu;
        DIGITAL_PIN_PIM_54,//uint8_t pim;
        DIGITAL_PIN_POM_54,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_54),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_55 =
{
        DIGITAL_PIN_MASK_55, //uint8_t mask;
        DIGITAL_PIN_BIT_55, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_55,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_55,//uint8_t pmct;
        DIGITAL_PIN_PMCE_55,//uint8_t pmce;
        DIGITAL_PIN_CCDE_55,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_55, //uint8_t pdidis;
        DIGITAL_PIN_PM_55,//uint8_t pm;
        DIGITAL_PIN_PU_55,//uint8_t pu;
        DIGITAL_PIN_PIM_55,//uint8_t pim;
        DIGITAL_PIN_POM_55,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_55),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_56 =
{
        DIGITAL_PIN_MASK_56, //uint8_t mask;
        DIGITAL_PIN_BIT_56, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_56,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_56,//uint8_t pmct;
        DIGITAL_PIN_PMCE_56,//uint8_t pmce;
        DIGITAL_PIN_CCDE_56,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_56, //uint8_t pdidis;
        DIGITAL_PIN_PM_56,//uint8_t pm;
        DIGITAL_PIN_PU_56,//uint8_t pu;
        DIGITAL_PIN_PIM_56,//uint8_t pim;
        DIGITAL_PIN_POM_56,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_56),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_57 =
{
        DIGITAL_PIN_MASK_57, //uint8_t mask;
        DIGITAL_PIN_BIT_57, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_57,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_57,//uint8_t pmct;
        DIGITAL_PIN_PMCE_57,//uint8_t pmce;
        DIGITAL_PIN_CCDE_57,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_57, //uint8_t pdidis;
        DIGITAL_PIN_PM_57,//uint8_t pm;
        DIGITAL_PIN_PU_57,//uint8_t pu;
        DIGITAL_PIN_PIM_57,//uint8_t pim;
        DIGITAL_PIN_POM_57,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_57),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_58 =
{
        DIGITAL_PIN_MASK_58, //uint8_t mask;
        DIGITAL_PIN_BIT_58, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_58,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_58,//uint8_t pmct;
        DIGITAL_PIN_PMCE_58,//uint8_t pmce;
        DIGITAL_PIN_CCDE_58,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_58, //uint8_t pdidis;
        DIGITAL_PIN_PM_58,//uint8_t pm;
        DIGITAL_PIN_PU_58,//uint8_t pu;
        DIGITAL_PIN_PIM_58,//uint8_t pim;
        DIGITAL_PIN_POM_58,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_58),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_59 =
{
        DIGITAL_PIN_MASK_59, //uint8_t mask;
        DIGITAL_PIN_BIT_59, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_59,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_59,//uint8_t pmct;
        DIGITAL_PIN_PMCE_59,//uint8_t pmce;
        DIGITAL_PIN_CCDE_59,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_59, //uint8_t pdidis;
        DIGITAL_PIN_PM_59,//uint8_t pm;
        DIGITAL_PIN_PU_59,//uint8_t pu;
        DIGITAL_PIN_PIM_59,//uint8_t pim;
        DIGITAL_PIN_POM_59,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_59),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_60 =
{
        DIGITAL_PIN_MASK_60, //uint8_t mask;
        DIGITAL_PIN_BIT_60, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_60,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_60,//uint8_t pmct;
        DIGITAL_PIN_PMCE_60,//uint8_t pmce;
        DIGITAL_PIN_CCDE_60,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_60, //uint8_t pdidis;
        DIGITAL_PIN_PM_60,//uint8_t pm;
        DIGITAL_PIN_PU_60,//uint8_t pu;
        DIGITAL_PIN_PIM_60,//uint8_t pim;
        DIGITAL_PIN_POM_60,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_60),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_61 =
{
        DIGITAL_PIN_MASK_61, //uint8_t mask;
        DIGITAL_PIN_BIT_61, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_61,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_61,//uint8_t pmct;
        DIGITAL_PIN_PMCE_61,//uint8_t pmce;
        DIGITAL_PIN_CCDE_61,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_61, //uint8_t pdidis;
        DIGITAL_PIN_PM_61,//uint8_t pm;
        DIGITAL_PIN_PU_61,//uint8_t pu;
        DIGITAL_PIN_PIM_61,//uint8_t pim;
        DIGITAL_PIN_POM_61,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_61),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_62 =
{
        DIGITAL_PIN_MASK_62, //uint8_t mask;
        DIGITAL_PIN_BIT_62, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_62,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_62,//uint8_t pmct;
        DIGITAL_PIN_PMCE_62,//uint8_t pmce;
        DIGITAL_PIN_CCDE_62,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_62, //uint8_t pdidis;
        DIGITAL_PIN_PM_62,//uint8_t pm;
        DIGITAL_PIN_PU_62,//uint8_t pu;
        DIGITAL_PIN_PIM_62,//uint8_t pim;
        DIGITAL_PIN_POM_62,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_62),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_63 =
{
        DIGITAL_PIN_MASK_63, //uint8_t mask;
        DIGITAL_PIN_BIT_63, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_63,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_63,//uint8_t pmct;
        DIGITAL_PIN_PMCE_63,//uint8_t pmce;
        DIGITAL_PIN_CCDE_63,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_63, //uint8_t pdidis;
        DIGITAL_PIN_PM_63,//uint8_t pm;
        DIGITAL_PIN_PU_63,//uint8_t pu;
        DIGITAL_PIN_PIM_63,//uint8_t pim;
        DIGITAL_PIN_POM_63,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_63),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_64 =
{
        DIGITAL_PIN_MASK_64, //uint8_t mask;
        DIGITAL_PIN_BIT_64, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_64,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_64,//uint8_t pmct;
        DIGITAL_PIN_PMCE_64,//uint8_t pmce;
        DIGITAL_PIN_CCDE_64,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_64, //uint8_t pdidis;
        DIGITAL_PIN_PM_64,//uint8_t pm;
        DIGITAL_PIN_PU_64,//uint8_t pu;
        DIGITAL_PIN_PIM_64,//uint8_t pim;
        DIGITAL_PIN_POM_64,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_64),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_65 =
{
        DIGITAL_PIN_MASK_65, //uint8_t mask;
        DIGITAL_PIN_BIT_65, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_65,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_65,//uint8_t pmct;
        DIGITAL_PIN_PMCE_65,//uint8_t pmce;
        DIGITAL_PIN_CCDE_65,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_65, //uint8_t pdidis;
        DIGITAL_PIN_PM_65,//uint8_t pm;
        DIGITAL_PIN_PU_65,//uint8_t pu;
        DIGITAL_PIN_PIM_65,//uint8_t pim;
        DIGITAL_PIN_POM_65,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_65),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_66 =
{
        DIGITAL_PIN_MASK_66, //uint8_t mask;
        DIGITAL_PIN_BIT_66, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_66,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_66,//uint8_t pmct;
        DIGITAL_PIN_PMCE_66,//uint8_t pmce;
        DIGITAL_PIN_CCDE_66,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_66, //uint8_t pdidis;
        DIGITAL_PIN_PM_66,//uint8_t pm;
        DIGITAL_PIN_PU_66,//uint8_t pu;
        DIGITAL_PIN_PIM_66,//uint8_t pim;
        DIGITAL_PIN_POM_66,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_66),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_67 =
{
        DIGITAL_PIN_MASK_67, //uint8_t mask;
        DIGITAL_PIN_BIT_67, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_67,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_67,//uint8_t pmct;
        DIGITAL_PIN_PMCE_67,//uint8_t pmce;
        DIGITAL_PIN_CCDE_67,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_67, //uint8_t pdidis;
        DIGITAL_PIN_PM_67,//uint8_t pm;
        DIGITAL_PIN_PU_67,//uint8_t pu;
        DIGITAL_PIN_PIM_67,//uint8_t pim;
        DIGITAL_PIN_POM_67,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_67),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_68 =
{
        DIGITAL_PIN_MASK_68, //uint8_t mask;
        DIGITAL_PIN_BIT_68, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_68,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_68,//uint8_t pmct;
        DIGITAL_PIN_PMCE_68,//uint8_t pmce;
        DIGITAL_PIN_CCDE_68,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_68, //uint8_t pdidis;
        DIGITAL_PIN_PM_68,//uint8_t pm;
        DIGITAL_PIN_PU_68,//uint8_t pu;
        DIGITAL_PIN_PIM_68,//uint8_t pim;
        DIGITAL_PIN_POM_68,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_68),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_69 =
{
        DIGITAL_PIN_MASK_69, //uint8_t mask;
        DIGITAL_PIN_BIT_69, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_69,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_69,//uint8_t pmct;
        DIGITAL_PIN_PMCE_69,//uint8_t pmce;
        DIGITAL_PIN_CCDE_69,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_69, //uint8_t pdidis;
        DIGITAL_PIN_PM_69,//uint8_t pm;
        DIGITAL_PIN_PU_69,//uint8_t pu;
        DIGITAL_PIN_PIM_69,//uint8_t pim;
        DIGITAL_PIN_POM_69,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_69),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_70 =
{
        DIGITAL_PIN_MASK_70, //uint8_t mask;
        DIGITAL_PIN_BIT_70, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_70,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_70,//uint8_t pmct;
        DIGITAL_PIN_PMCE_70,//uint8_t pmce;
        DIGITAL_PIN_CCDE_70,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_70, //uint8_t pdidis;
        DIGITAL_PIN_PM_70,//uint8_t pm;
        DIGITAL_PIN_PU_70,//uint8_t pu;
        DIGITAL_PIN_PIM_70,//uint8_t pim;
        DIGITAL_PIN_POM_70,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_70),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};


__far const PinTableType pinTable_71 =
{
        DIGITAL_PIN_MASK_71, //uint8_t mask;
        DIGITAL_PIN_BIT_71, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_71,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_71,//uint8_t pmct;
        DIGITAL_PIN_PMCE_71,//uint8_t pmce;
        DIGITAL_PIN_CCDE_71,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_71, //uint8_t pdidis;
        DIGITAL_PIN_PM_71,//uint8_t pm;
        DIGITAL_PIN_PU_71,//uint8_t pu;
        DIGITAL_PIN_PIM_71,//uint8_t pim;
        DIGITAL_PIN_POM_71,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_71),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_72 =
{
        DIGITAL_PIN_MASK_72, //uint8_t mask;
        DIGITAL_PIN_BIT_72, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_72,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_72,//uint8_t pmct;
        DIGITAL_PIN_PMCE_72,//uint8_t pmce;
        DIGITAL_PIN_CCDE_72,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_72, //uint8_t pdidis;
        DIGITAL_PIN_PM_72,//uint8_t pm;
        DIGITAL_PIN_PU_72,//uint8_t pu;
        DIGITAL_PIN_PIM_72,//uint8_t pim;
        DIGITAL_PIN_POM_72,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_72),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_73 =
{
        DIGITAL_PIN_MASK_73, //uint8_t mask;
        DIGITAL_PIN_BIT_73, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_73,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_73,//uint8_t pmct;
        DIGITAL_PIN_PMCE_73,//uint8_t pmce;
        DIGITAL_PIN_CCDE_73,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_73, //uint8_t pdidis;
        DIGITAL_PIN_PM_73,//uint8_t pm;
        DIGITAL_PIN_PU_73,//uint8_t pu;
        DIGITAL_PIN_PIM_73,//uint8_t pim;
        DIGITAL_PIN_POM_73,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_73),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_74 =
{
        DIGITAL_PIN_MASK_74, //uint8_t mask;
        DIGITAL_PIN_BIT_74, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_74,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_74,//uint8_t pmct;
        DIGITAL_PIN_PMCE_74,//uint8_t pmce;
        DIGITAL_PIN_CCDE_74,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_74, //uint8_t pdidis;
        DIGITAL_PIN_PM_74,//uint8_t pm;
        DIGITAL_PIN_PU_74,//uint8_t pu;
        DIGITAL_PIN_PIM_74,//uint8_t pim;
        DIGITAL_PIN_POM_74,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_74),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_75 =
{
        DIGITAL_PIN_MASK_75, //uint8_t mask;
        DIGITAL_PIN_BIT_75, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_75,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_75,//uint8_t pmct;
        DIGITAL_PIN_PMCE_75,//uint8_t pmce;
        DIGITAL_PIN_CCDE_75,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_75, //uint8_t pdidis;
        DIGITAL_PIN_PM_75,//uint8_t pm;
        DIGITAL_PIN_PU_75,//uint8_t pu;
        DIGITAL_PIN_PIM_75,//uint8_t pim;
        DIGITAL_PIN_POM_75,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_75),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_76 =
{
        DIGITAL_PIN_MASK_76, //uint8_t mask;
        DIGITAL_PIN_BIT_76, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_76,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_76,//uint8_t pmct;
        DIGITAL_PIN_PMCE_76,//uint8_t pmce;
        DIGITAL_PIN_CCDE_76,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_76, //uint8_t pdidis;
        DIGITAL_PIN_PM_76,//uint8_t pm;
        DIGITAL_PIN_PU_76,//uint8_t pu;
        DIGITAL_PIN_PIM_76,//uint8_t pim;
        DIGITAL_PIN_POM_76,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_76),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_77 =
{
        DIGITAL_PIN_MASK_77, //uint8_t mask;
        DIGITAL_PIN_BIT_77, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_77,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_77,//uint8_t pmct;
        DIGITAL_PIN_PMCE_77,//uint8_t pmce;
        DIGITAL_PIN_CCDE_77,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_77, //uint8_t pdidis;
        DIGITAL_PIN_PM_77,//uint8_t pm;
        DIGITAL_PIN_PU_77,//uint8_t pu;
        DIGITAL_PIN_PIM_77,//uint8_t pim;
        DIGITAL_PIN_POM_77,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_77),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_78 =
{
        DIGITAL_PIN_MASK_78, //uint8_t mask;
        DIGITAL_PIN_BIT_78, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_78,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_78,//uint8_t pmct;
        DIGITAL_PIN_PMCE_78,//uint8_t pmce;
        DIGITAL_PIN_CCDE_78,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_78, //uint8_t pdidis;
        DIGITAL_PIN_PM_78,//uint8_t pm;
        DIGITAL_PIN_PU_78,//uint8_t pu;
        DIGITAL_PIN_PIM_78,//uint8_t pim;
        DIGITAL_PIN_POM_78,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_78),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_79 =
{
        DIGITAL_PIN_MASK_79, //uint8_t mask;
        DIGITAL_PIN_BIT_79, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_79,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_79,//uint8_t pmct;
        DIGITAL_PIN_PMCE_79,//uint8_t pmce;
        DIGITAL_PIN_CCDE_79,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_79, //uint8_t pdidis;
        DIGITAL_PIN_PM_79,//uint8_t pm;
        DIGITAL_PIN_PU_79,//uint8_t pu;
        DIGITAL_PIN_PIM_79,//uint8_t pim;
        DIGITAL_PIN_POM_79,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_79),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};


__far const PinTableType pinTable_80 =
{
        DIGITAL_PIN_MASK_80, //uint8_t mask;
        DIGITAL_PIN_BIT_80, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_80,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_80,//uint8_t pmct;
        DIGITAL_PIN_PMCE_80,//uint8_t pmce;
        DIGITAL_PIN_CCDE_80,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_80, //uint8_t pdidis;
        DIGITAL_PIN_PM_80,//uint8_t pm;
        DIGITAL_PIN_PU_80,//uint8_t pu;
        DIGITAL_PIN_PIM_80,//uint8_t pim;
        DIGITAL_PIN_POM_80,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_80),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_81 =
{
        DIGITAL_PIN_MASK_81, //uint8_t mask;
        DIGITAL_PIN_BIT_81, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_81,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_81,//uint8_t pmct;
        DIGITAL_PIN_PMCE_81,//uint8_t pmce;
        DIGITAL_PIN_CCDE_81,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_81, //uint8_t pdidis;
        DIGITAL_PIN_PM_81,//uint8_t pm;
        DIGITAL_PIN_PU_81,//uint8_t pu;
        DIGITAL_PIN_PIM_81,//uint8_t pim;
        DIGITAL_PIN_POM_81,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_81),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_82 =
{
        DIGITAL_PIN_MASK_82, //uint8_t mask;
        DIGITAL_PIN_BIT_82, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_82,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_82,//uint8_t pmct;
        DIGITAL_PIN_PMCE_82,//uint8_t pmce;
        DIGITAL_PIN_CCDE_82,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_82, //uint8_t pdidis;
        DIGITAL_PIN_PM_82,//uint8_t pm;
        DIGITAL_PIN_PU_82,//uint8_t pu;
        DIGITAL_PIN_PIM_82,//uint8_t pim;
        DIGITAL_PIN_POM_82,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_82),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_83 =
{
        DIGITAL_PIN_MASK_83, //uint8_t mask;
        DIGITAL_PIN_BIT_83, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_83,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_83,//uint8_t pmct;
        DIGITAL_PIN_PMCE_83,//uint8_t pmce;
        DIGITAL_PIN_CCDE_83,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_83, //uint8_t pdidis;
        DIGITAL_PIN_PM_83,//uint8_t pm;
        DIGITAL_PIN_PU_83,//uint8_t pu;
        DIGITAL_PIN_PIM_83,//uint8_t pim;
        DIGITAL_PIN_POM_83,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_83),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_84 =
{
        DIGITAL_PIN_MASK_84, //uint8_t mask;
        DIGITAL_PIN_BIT_84, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_84,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_84,//uint8_t pmct;
        DIGITAL_PIN_PMCE_84,//uint8_t pmce;
        DIGITAL_PIN_CCDE_84,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_84, //uint8_t pdidis;
        DIGITAL_PIN_PM_84,//uint8_t pm;
        DIGITAL_PIN_PU_84,//uint8_t pu;
        DIGITAL_PIN_PIM_84,//uint8_t pim;
        DIGITAL_PIN_POM_84,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_84),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_85 =
{
        DIGITAL_PIN_MASK_85, //uint8_t mask;
        DIGITAL_PIN_BIT_85, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_85,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_85,//uint8_t pmct;
        DIGITAL_PIN_PMCE_85,//uint8_t pmce;
        DIGITAL_PIN_CCDE_85,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_85, //uint8_t pdidis;
        DIGITAL_PIN_PM_85,//uint8_t pm;
        DIGITAL_PIN_PU_85,//uint8_t pu;
        DIGITAL_PIN_PIM_85,//uint8_t pim;
        DIGITAL_PIN_POM_85,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_85),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_86 =
{
        DIGITAL_PIN_MASK_86, //uint8_t mask;
        DIGITAL_PIN_BIT_86, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_86,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_86,//uint8_t pmct;
        DIGITAL_PIN_PMCE_86,//uint8_t pmce;
        DIGITAL_PIN_CCDE_86,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_86, //uint8_t pdidis;
        DIGITAL_PIN_PM_86,//uint8_t pm;
        DIGITAL_PIN_PU_86,//uint8_t pu;
        DIGITAL_PIN_PIM_86,//uint8_t pim;
        DIGITAL_PIN_POM_86,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_86),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_87 =
{
        DIGITAL_PIN_MASK_87, //uint8_t mask;
        DIGITAL_PIN_BIT_87, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_87,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_87,//uint8_t pmct;
        DIGITAL_PIN_PMCE_87,//uint8_t pmce;
        DIGITAL_PIN_CCDE_87,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_87, //uint8_t pdidis;
        DIGITAL_PIN_PM_87,//uint8_t pm;
        DIGITAL_PIN_PU_87,//uint8_t pu;
        DIGITAL_PIN_PIM_87,//uint8_t pim;
        DIGITAL_PIN_POM_87,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_87),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_88 =
{
        DIGITAL_PIN_MASK_88, //uint8_t mask;
        DIGITAL_PIN_BIT_88, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_88,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_88,//uint8_t pmct;
        DIGITAL_PIN_PMCE_88,//uint8_t pmce;
        DIGITAL_PIN_CCDE_88,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_88, //uint8_t pdidis;
        DIGITAL_PIN_PM_88,//uint8_t pm;
        DIGITAL_PIN_PU_88,//uint8_t pu;
        DIGITAL_PIN_PIM_88,//uint8_t pim;
        DIGITAL_PIN_POM_88,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_88),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_89 =
{
        DIGITAL_PIN_MASK_89, //uint8_t mask;
        DIGITAL_PIN_BIT_89, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_89,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_89,//uint8_t pmct;
        DIGITAL_PIN_PMCE_89,//uint8_t pmce;
        DIGITAL_PIN_CCDE_89,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_89, //uint8_t pdidis;
        DIGITAL_PIN_PM_89,//uint8_t pm;
        DIGITAL_PIN_PU_89,//uint8_t pu;
        DIGITAL_PIN_PIM_89,//uint8_t pim;
        DIGITAL_PIN_POM_89,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_89),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};


__far const PinTableType pinTable_90 =
{
        DIGITAL_PIN_MASK_90, //uint8_t mask;
        DIGITAL_PIN_BIT_90, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_90,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_90,//uint8_t pmct;
        DIGITAL_PIN_PMCE_90,//uint8_t pmce;
        DIGITAL_PIN_CCDE_90,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_90, //uint8_t pdidis;
        DIGITAL_PIN_PM_90,//uint8_t pm;
        DIGITAL_PIN_PU_90,//uint8_t pu;
        DIGITAL_PIN_PIM_90,//uint8_t pim;
        DIGITAL_PIN_POM_90,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_90),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_91 =
{
        DIGITAL_PIN_MASK_91, //uint8_t mask;
        DIGITAL_PIN_BIT_91, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_91,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_91,//uint8_t pmct;
        DIGITAL_PIN_PMCE_91,//uint8_t pmce;
        DIGITAL_PIN_CCDE_91,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_91, //uint8_t pdidis;
        DIGITAL_PIN_PM_91,//uint8_t pm;
        DIGITAL_PIN_PU_91,//uint8_t pu;
        DIGITAL_PIN_PIM_91,//uint8_t pim;
        DIGITAL_PIN_POM_91,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_91),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_92 =
{
        DIGITAL_PIN_MASK_92, //uint8_t mask;
        DIGITAL_PIN_BIT_92, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_92,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_92,//uint8_t pmct;
        DIGITAL_PIN_PMCE_92,//uint8_t pmce;
        DIGITAL_PIN_CCDE_92,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_92, //uint8_t pdidis;
        DIGITAL_PIN_PM_92,//uint8_t pm;
        DIGITAL_PIN_PU_92,//uint8_t pu;
        DIGITAL_PIN_PIM_92,//uint8_t pim;
        DIGITAL_PIN_POM_92,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_92),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_93 =
{
        DIGITAL_PIN_MASK_93, //uint8_t mask;
        DIGITAL_PIN_BIT_93, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_93,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_93,//uint8_t pmct;
        DIGITAL_PIN_PMCE_93,//uint8_t pmce;
        DIGITAL_PIN_CCDE_93,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_93, //uint8_t pdidis;
        DIGITAL_PIN_PM_93,//uint8_t pm;
        DIGITAL_PIN_PU_93,//uint8_t pu;
        DIGITAL_PIN_PIM_93,//uint8_t pim;
        DIGITAL_PIN_POM_93,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_93),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_94 =
{
        DIGITAL_PIN_MASK_94, //uint8_t mask;
        DIGITAL_PIN_BIT_94, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_94,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_94,//uint8_t pmct;
        DIGITAL_PIN_PMCE_94,//uint8_t pmce;
        DIGITAL_PIN_CCDE_94,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_94, //uint8_t pdidis;
        DIGITAL_PIN_PM_94,//uint8_t pm;
        DIGITAL_PIN_PU_94,//uint8_t pu;
        DIGITAL_PIN_PIM_94,//uint8_t pim;
        DIGITAL_PIN_POM_94,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_94),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_95 =
{
        DIGITAL_PIN_MASK_95, //uint8_t mask;
        DIGITAL_PIN_BIT_95, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_95,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_95,//uint8_t pmct;
        DIGITAL_PIN_PMCE_95,//uint8_t pmce;
        DIGITAL_PIN_CCDE_95,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_95, //uint8_t pdidis;
        DIGITAL_PIN_PM_95,//uint8_t pm;
        DIGITAL_PIN_PU_95,//uint8_t pu;
        DIGITAL_PIN_PIM_95,//uint8_t pim;
        DIGITAL_PIN_POM_95,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_95),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_96 =
{
        DIGITAL_PIN_MASK_96, //uint8_t mask;
        DIGITAL_PIN_BIT_96, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_96,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_96,//uint8_t pmct;
        DIGITAL_PIN_PMCE_96,//uint8_t pmce;
        DIGITAL_PIN_CCDE_96,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_96, //uint8_t pdidis;
        DIGITAL_PIN_PM_96,//uint8_t pm;
        DIGITAL_PIN_PU_96,//uint8_t pu;
        DIGITAL_PIN_PIM_96,//uint8_t pim;
        DIGITAL_PIN_POM_96,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_96),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_97 =
{
        DIGITAL_PIN_MASK_97, //uint8_t mask;
        DIGITAL_PIN_BIT_97, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_97,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_97,//uint8_t pmct;
        DIGITAL_PIN_PMCE_97,//uint8_t pmce;
        DIGITAL_PIN_CCDE_97,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_97, //uint8_t pdidis;
        DIGITAL_PIN_PM_97,//uint8_t pm;
        DIGITAL_PIN_PU_97,//uint8_t pu;
        DIGITAL_PIN_PIM_97,//uint8_t pim;
        DIGITAL_PIN_POM_97,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_97),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_98 =
{
        DIGITAL_PIN_MASK_98, //uint8_t mask;
        DIGITAL_PIN_BIT_98, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_98,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_98,//uint8_t pmct;
        DIGITAL_PIN_PMCE_98,//uint8_t pmce;
        DIGITAL_PIN_CCDE_98,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_98, //uint8_t pdidis;
        DIGITAL_PIN_PM_98,//uint8_t pm;
        DIGITAL_PIN_PU_98,//uint8_t pu;
        DIGITAL_PIN_PIM_98,//uint8_t pim;
        DIGITAL_PIN_POM_98,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_98),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_99 =
{
        DIGITAL_PIN_MASK_99, //uint8_t mask;
        DIGITAL_PIN_BIT_99, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_99,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_99,//uint8_t pmct;
        DIGITAL_PIN_PMCE_99,//uint8_t pmce;
        DIGITAL_PIN_CCDE_99,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_99, //uint8_t pdidis;
        DIGITAL_PIN_PM_99,//uint8_t pm;
        DIGITAL_PIN_PU_99,//uint8_t pu;
        DIGITAL_PIN_PIM_99,//uint8_t pim;
        DIGITAL_PIN_POM_99,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_99),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_100 =
{
        DIGITAL_PIN_MASK_100, //uint8_t mask;
        DIGITAL_PIN_BIT_100, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_100,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_100,//uint8_t pmct;
        DIGITAL_PIN_PMCE_100,//uint8_t pmce;
        DIGITAL_PIN_CCDE_100,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_100, //uint8_t pdidis;
        DIGITAL_PIN_PM_100,//uint8_t pm;
        DIGITAL_PIN_PU_100,//uint8_t pu;
        DIGITAL_PIN_PIM_100,//uint8_t pim;
        DIGITAL_PIN_POM_100,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_100),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_101 =
{
        DIGITAL_PIN_MASK_101, //uint8_t mask;
        DIGITAL_PIN_BIT_101, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_101,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_101,//uint8_t pmct;
        DIGITAL_PIN_PMCE_101,//uint8_t pmce;
        DIGITAL_PIN_CCDE_101,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_101, //uint8_t pdidis;
        DIGITAL_PIN_PM_101,//uint8_t pm;
        DIGITAL_PIN_PU_101,//uint8_t pu;
        DIGITAL_PIN_PIM_101,//uint8_t pim;
        DIGITAL_PIN_POM_101,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_101),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_102 =
{
        DIGITAL_PIN_MASK_102, //uint8_t mask;
        DIGITAL_PIN_BIT_102, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_102,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_102,//uint8_t pmct;
        DIGITAL_PIN_PMCE_102,//uint8_t pmce;
        DIGITAL_PIN_CCDE_102,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_102, //uint8_t pdidis;
        DIGITAL_PIN_PM_102,//uint8_t pm;
        DIGITAL_PIN_PU_102,//uint8_t pu;
        DIGITAL_PIN_PIM_102,//uint8_t pim;
        DIGITAL_PIN_POM_102,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_102),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_103 =
{
        DIGITAL_PIN_MASK_103, //uint8_t mask;
        DIGITAL_PIN_BIT_103, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_103,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_103,//uint8_t pmct;
        DIGITAL_PIN_PMCE_103,//uint8_t pmce;
        DIGITAL_PIN_CCDE_103,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_103, //uint8_t pdidis;
        DIGITAL_PIN_PM_103,//uint8_t pm;
        DIGITAL_PIN_PU_103,//uint8_t pu;
        DIGITAL_PIN_PIM_103,//uint8_t pim;
        DIGITAL_PIN_POM_103,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_103),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_104 =
{
        DIGITAL_PIN_MASK_104, //uint8_t mask;
        DIGITAL_PIN_BIT_104, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_104,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_104,//uint8_t pmct;
        DIGITAL_PIN_PMCE_104,//uint8_t pmce;
        DIGITAL_PIN_CCDE_104,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_104, //uint8_t pdidis;
        DIGITAL_PIN_PM_104,//uint8_t pm;
        DIGITAL_PIN_PU_104,//uint8_t pu;
        DIGITAL_PIN_PIM_104,//uint8_t pim;
        DIGITAL_PIN_POM_104,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_104),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_105 =
{
        DIGITAL_PIN_MASK_105, //uint8_t mask;
        DIGITAL_PIN_BIT_105, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_105,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_105,//uint8_t pmct;
        DIGITAL_PIN_PMCE_105,//uint8_t pmce;
        DIGITAL_PIN_CCDE_105,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_105, //uint8_t pdidis;
        DIGITAL_PIN_PM_105,//uint8_t pm;
        DIGITAL_PIN_PU_105,//uint8_t pu;
        DIGITAL_PIN_PIM_105,//uint8_t pim;
        DIGITAL_PIN_POM_105,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_105),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_106 =
{
        DIGITAL_PIN_MASK_106, //uint8_t mask;
        DIGITAL_PIN_BIT_106, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_106,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_106,//uint8_t pmct;
        DIGITAL_PIN_PMCE_106,//uint8_t pmce;
        DIGITAL_PIN_CCDE_106,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_106, //uint8_t pdidis;
        DIGITAL_PIN_PM_106,//uint8_t pm;
        DIGITAL_PIN_PU_106,//uint8_t pu;
        DIGITAL_PIN_PIM_106,//uint8_t pim;
        DIGITAL_PIN_POM_106,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_106),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_107 =
{
        DIGITAL_PIN_MASK_107, //uint8_t mask;
        DIGITAL_PIN_BIT_107, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_107,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_107,//uint8_t pmct;
        DIGITAL_PIN_PMCE_107,//uint8_t pmce;
        DIGITAL_PIN_CCDE_107,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_107, //uint8_t pdidis;
        DIGITAL_PIN_PM_107,//uint8_t pm;
        DIGITAL_PIN_PU_107,//uint8_t pu;
        DIGITAL_PIN_PIM_107,//uint8_t pim;
        DIGITAL_PIN_POM_107,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_107),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_108 =
{
        DIGITAL_PIN_MASK_108, //uint8_t mask;
        DIGITAL_PIN_BIT_108, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_108,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_108,//uint8_t pmct;
        DIGITAL_PIN_PMCE_108,//uint8_t pmce;
        DIGITAL_PIN_CCDE_108,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_108, //uint8_t pdidis;
        DIGITAL_PIN_PM_108,//uint8_t pm;
        DIGITAL_PIN_PU_108,//uint8_t pu;
        DIGITAL_PIN_PIM_108,//uint8_t pim;
        DIGITAL_PIN_POM_108,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_108),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_109 =
{
        DIGITAL_PIN_MASK_109, //uint8_t mask;
        DIGITAL_PIN_BIT_109, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_109,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_109,//uint8_t pmct;
        DIGITAL_PIN_PMCE_109,//uint8_t pmce;
        DIGITAL_PIN_CCDE_109,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_109, //uint8_t pdidis;
        DIGITAL_PIN_PM_109,//uint8_t pm;
        DIGITAL_PIN_PU_109,//uint8_t pu;
        DIGITAL_PIN_PIM_109,//uint8_t pim;
        DIGITAL_PIN_POM_109,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_109),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_110 =
{
        DIGITAL_PIN_MASK_110, //uint8_t mask;
        DIGITAL_PIN_BIT_110, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_110,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_110,//uint8_t pmct;
        DIGITAL_PIN_PMCE_110,//uint8_t pmce;
        DIGITAL_PIN_CCDE_110,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_110, //uint8_t pdidis;
        DIGITAL_PIN_PM_110,//uint8_t pm;
        DIGITAL_PIN_PU_110,//uint8_t pu;
        DIGITAL_PIN_PIM_110,//uint8_t pim;
        DIGITAL_PIN_POM_110,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_110),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_111 =
{
        DIGITAL_PIN_MASK_111, //uint8_t mask;
        DIGITAL_PIN_BIT_111, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_111,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_111,//uint8_t pmct;
        DIGITAL_PIN_PMCE_111,//uint8_t pmce;
        DIGITAL_PIN_CCDE_111,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_111, //uint8_t pdidis;
        DIGITAL_PIN_PM_111,//uint8_t pm;
        DIGITAL_PIN_PU_111,//uint8_t pu;
        DIGITAL_PIN_PIM_111,//uint8_t pim;
        DIGITAL_PIN_POM_111,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_111),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};


__far const PinTableType pinTable_112 =
{
        DIGITAL_PIN_MASK_112, //uint8_t mask;
        DIGITAL_PIN_BIT_112, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_112,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_112,//uint8_t pmct;
        DIGITAL_PIN_PMCE_112,//uint8_t pmce;
        DIGITAL_PIN_CCDE_112,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_112, //uint8_t pdidis;
        DIGITAL_PIN_PM_112,//uint8_t pm;
        DIGITAL_PIN_PU_112,//uint8_t pu;
        DIGITAL_PIN_PIM_112,//uint8_t pim;
        DIGITAL_PIN_POM_112,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_112),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_113 =
{
        DIGITAL_PIN_MASK_113, //uint8_t mask;
        DIGITAL_PIN_BIT_113, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_113,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_113,//uint8_t pmct;
        DIGITAL_PIN_PMCE_113,//uint8_t pmce;
        DIGITAL_PIN_CCDE_113,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_113, //uint8_t pdidis;
        DIGITAL_PIN_PM_113,//uint8_t pm;
        DIGITAL_PIN_PU_113,//uint8_t pu;
        DIGITAL_PIN_PIM_113,//uint8_t pim;
        DIGITAL_PIN_POM_113,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_113),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_114 =
{
        DIGITAL_PIN_MASK_114, //uint8_t mask;
        DIGITAL_PIN_BIT_114, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_114,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_114,//uint8_t pmct;
        DIGITAL_PIN_PMCE_114,//uint8_t pmce;
        DIGITAL_PIN_CCDE_114,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_114, //uint8_t pdidis;
        DIGITAL_PIN_PM_114,//uint8_t pm;
        DIGITAL_PIN_PU_114,//uint8_t pu;
        DIGITAL_PIN_PIM_114,//uint8_t pim;
        DIGITAL_PIN_POM_114,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_114),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_115 =
{
        DIGITAL_PIN_MASK_115, //uint8_t mask;
        DIGITAL_PIN_BIT_115, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_115,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_115,//uint8_t pmct;
        DIGITAL_PIN_PMCE_115,//uint8_t pmce;
        DIGITAL_PIN_CCDE_115,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_115, //uint8_t pdidis;
        DIGITAL_PIN_PM_115,//uint8_t pm;
        DIGITAL_PIN_PU_115,//uint8_t pu;
        DIGITAL_PIN_PIM_115,//uint8_t pim;
        DIGITAL_PIN_POM_115,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_115),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_116 =
{
        DIGITAL_PIN_MASK_116, //uint8_t mask;
        DIGITAL_PIN_BIT_116, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_116,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_116,//uint8_t pmct;
        DIGITAL_PIN_PMCE_116,//uint8_t pmce;
        DIGITAL_PIN_CCDE_116,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_116, //uint8_t pdidis;
        DIGITAL_PIN_PM_116,//uint8_t pm;
        DIGITAL_PIN_PU_116,//uint8_t pu;
        DIGITAL_PIN_PIM_116,//uint8_t pim;
        DIGITAL_PIN_POM_116,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_116),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_117 =
{
        DIGITAL_PIN_MASK_117, //uint8_t mask;
        DIGITAL_PIN_BIT_117, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_117,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_117,//uint8_t pmct;
        DIGITAL_PIN_PMCE_117,//uint8_t pmce;
        DIGITAL_PIN_CCDE_117,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_117, //uint8_t pdidis;
        DIGITAL_PIN_PM_117,//uint8_t pm;
        DIGITAL_PIN_PU_117,//uint8_t pu;
        DIGITAL_PIN_PIM_117,//uint8_t pim;
        DIGITAL_PIN_POM_117,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_117),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};

__far const PinTableType pinTable_118 =
{
        DIGITAL_PIN_MASK_118, //uint8_t mask;
        DIGITAL_PIN_BIT_118, //uint8_t bit;
        0,//uint8_t timer;
        DIGITAL_PIN_PMCA_118,//uint8_t pmca;
        /* Add for G23 */
        DIGITAL_PIN_PMCT_118,//uint8_t pmct;
        DIGITAL_PIN_PMCE_118,//uint8_t pmce;
        DIGITAL_PIN_CCDE_118,//uint8_t ccde;
        DIGITAL_PIN_PDIDIS_118, //uint8_t pdidis;
        DIGITAL_PIN_PM_118,//uint8_t pm;
        DIGITAL_PIN_PU_118,//uint8_t pu;
        DIGITAL_PIN_PIM_118,//uint8_t pim;
        DIGITAL_PIN_POM_118,//uint8_t pom;
        /* Add for G23 */
        getPortModeRegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portModeRegisterAddr;
        getPortPullUpRegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portPullUpRegisterAddr;
        getPortInputModeRegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portInputModeRegisterAddr;
        getPortOutputModeRegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portOutputModeRegisterAddr;
        getPortRegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portRegisterAddr;
        /* Add for G23 */
        getPortModeControlARegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portModeControlARegisterAddr;
        getPortModeControlTRegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portModeControlTRegisterAddr;
        getPortModeControlERegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portModeControlERegisterAddr;
        getPortOutCurControlRegisterAddr(),//volatile uint8_t* portOutCurControlRegisterAddr;
        getPortDigInputDisRegisterAddr(DIGITAL_PIN_118),//volatile uint8_t* portDigInputDisRegisterAddr;
        /* Add for G23 */

};




__far const PinTableType * __far const pinTablelist[NUM_DIGITAL_PINS] =
{
    /* 0 ~ 9 */
    &pinTable_0,
    &pinTable_1,
    &pinTable_2,
    &pinTable_3,
    &pinTable_4,
    &pinTable_5,
    &pinTable_6,
    &pinTable_7,
    &pinTable_8,
    &pinTable_9,
    /* 10 ~ 19 */
    &pinTable_10,
    &pinTable_11,
    &pinTable_12,
    &pinTable_13,
    &pinTable_14,
    &pinTable_15,
    &pinTable_16,
    &pinTable_17,
    &pinTable_18,
    &pinTable_19,
    /* 20 ~ 29 */
    &pinTable_20,
    &pinTable_21,
    &pinTable_22,
    &pinTable_23,
    &pinTable_24,
    &pinTable_25,
    &pinTable_26,
    &pinTable_27,
    &pinTable_28,
    &pinTable_29,
    /* 30 ~ 39 */
    &pinTable_30,
    &pinTable_userled1,
    &pinTable_userled2,
    &pinTable_33,
    &pinTable_34,
    &pinTable_35,
    &pinTable_36,
    &pinTable_37,
    &pinTable_38,
    &pinTable_39,
    /* 40 ~ 49 */
    &pinTable_40,
    &pinTable_41,
    &pinTable_42,
    &pinTable_43,
    &pinTable_44,
    &pinTable_45,
    &pinTable_46,
    &pinTable_47,
    &pinTable_48,
    &pinTable_49,
    /* 50 ~ 59 */
    &pinTable_50,
    &pinTable_51,
    &pinTable_52,
    &pinTable_53,
    &pinTable_54,
    &pinTable_55,
    &pinTable_56,
    &pinTable_57,
    &pinTable_58,
    &pinTable_59,

    /* 60 ~ 69 */
    &pinTable_60,
    &pinTable_61,
    &pinTable_62,
    &pinTable_63,
    &pinTable_64,
    &pinTable_65,
    &pinTable_66,
    &pinTable_67,
    &pinTable_68,
    &pinTable_69,

    /* 70 ~ 79 */
    &pinTable_70,
    &pinTable_71,
    &pinTable_72,
    &pinTable_73,
    &pinTable_74,
    &pinTable_75,
    &pinTable_76,
    &pinTable_77,
    &pinTable_78,
    &pinTable_79,

    /* 80 ~ 89 */
    &pinTable_80,
    &pinTable_81,
    &pinTable_82,
    &pinTable_83,
    &pinTable_84,
    &pinTable_85,
    &pinTable_86,
    &pinTable_87,
    &pinTable_88,
    &pinTable_89,

    /* 90 ~ 99 */
    &pinTable_90,
    &pinTable_91,
    &pinTable_92,
    &pinTable_93,
    &pinTable_94,
    &pinTable_95,
    &pinTable_96,
    &pinTable_97,
    &pinTable_98,
    &pinTable_99,

    /* 100 ~ 109 */
    &pinTable_100,
    &pinTable_101,
    &pinTable_102,
    &pinTable_103,
    &pinTable_104,
    &pinTable_105,
    &pinTable_106,
    &pinTable_107,
    &pinTable_108,
    &pinTable_109,

    /* 110 ~ 118 */
    &pinTable_110,
    &pinTable_111,
    &pinTable_112,
    &pinTable_113,
    &pinTable_114,
    &pinTable_115,
    &pinTable_116,
    &pinTable_117,
    &pinTable_118

};

