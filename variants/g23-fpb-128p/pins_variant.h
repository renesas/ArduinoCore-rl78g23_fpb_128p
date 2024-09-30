#ifndef _PINS_VARIANT_H_
#define _PINS_VARIANT_H_

#include <stdint.h>
#include <stdlib.h>

#ifndef configCPU_CLOCK_HZ
#define configCPU_CLOCK_HZ                  (32000000)  // CPU frequency used for only I2C setting
#endif

#define F_CPU (32 * 1000 * 1000L)

// G23:2 , G22, G16:1, G24:3
#define MICROS_TIMER_DIVIDE_FACTOR ((uint32_t)2) // Reference clock frequency after dividing

#define UART_CHANNEL        0       // UART0 (Serial0)
#define UART1_CHANNEL       1       // UARTA1(Serial1)
#define UART2_CHANNEL       2       // UART2 (Serial2)
#define UART3_CHANNEL       3       // UART1 (Serial3) (Rx:P03(IO17) / Tx:P02(IO16))
#define UART4_CHANNEL       4       // UART3 (Serial4)
#define UART5_CHANNEL       5       // UARTA0(Serial5)
#define UART_TOTAL_NUM      6
/* SPI(CSI) Definition */
#define USE_CSI      (1) // Set to '1' when Use SPI Hardware.

#if defined(USE_CSI) && USE_CSI

// #define CSI_CHANNEL0 (0) // USE CSI00 for SPI
// #define CSI_CHANNEL1 (1) // USE CSI01 for SPI
// #define CSI_CHANNEL2 (2) // USE CSI10 for SPI
// #define CSI_CHANNEL3 (3) // USE CSI11 for SPI
// #define CSI_CHANNEL4 (4) // USE CSI20 for SPI
#define CSI_CHANNEL6 (6) // USE CSI30 for SPI

#endif /* defined(USE_CSI) && USE_CSI */

/* IIC Definition */
#define IIC_CHANNEL0 (0)
#define IIC_CHANNEL1 (1)
#define IIC_CHANNEL2 (2)
#define IIC_CHANNEL3 (3)
#define IIC_CHANNEL4 (4)

#define CHECK_PINMODE_INHIBIT_RL78(p) (\
    (p) == 57 || /* P21(AVREFM) */\
    (p) == 119    /* P20(AVREFP) */)

#define CHECK_OUTPUT_INHIBIT_RL78(p) ((p) == 22 || (p) == 24 || (p) == 30 || (p) == 57 || (p) == 60 || (p) == 72 || (p) == 73)

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

#define NUM_DIGITAL_PINS            119
#define NUM_ANALOG_INPUTS           16

// #endif
#define analogInputToDigitalPin(p)  ((p < 16) ? (p) + 103 : -1)
#define digitalPinHasPWM(p)         ((p) == 2 || (p) == 3 || (p) == 4 || (p) == 5 || (p) == 6 || (p) == 7 || (p) == 8 || (p) == 9 || (p) == 11 || (p) == 12 || (p) == 13  )

#define PIN_SPI_SS    (85)
#define PIN_SPI_MOSI  (14)
#define PIN_SPI_MISO  (15)
#define PIN_SPI_SCK   (86)

extern const uint8_t SS;
extern const uint8_t MOSI;
extern const uint8_t MISO;
extern const uint8_t SCK;

#define PIN_WIRE_SDA         (20) // P61
#define PIN_WIRE_SCL         (21) // P60
#define PIN_WIRE_SDA1        (91) // P63
#define PIN_WIRE_SCL1        (90) // P62
#define PIN_WIRE_SDA2        (19) // P14
#define PIN_WIRE_SCL2        (96) // P15
#define PIN_WIRE_SDA3        (98) // P44
#define PIN_WIRE_SCL3        (97) // P43
#define PIN_WIRE_SDA4       (100) // P96
#define PIN_WIRE_SCL4        (99) // P95

extern const uint8_t SDA;
extern const uint8_t SCL;

#define BUILTIN_LED1 31
#define BUILTIN_LED2 32
#define LED_BUILTIN  BUILTIN_LED1

#define LED_ON  LOW
#define LED_OFF HIGH

#define PIN_A0   (103)
#define PIN_A1   (104)
#define PIN_A2   (105)
#define PIN_A3   (106)
#define PIN_A4   (107)
#define PIN_A5   (108)
#define PIN_A6   (109)
#define PIN_A7   (110)
#define PIN_A8   (111)
#define PIN_A9   (112)
#define PIN_A10  (113)
#define PIN_A11  (114)
#define PIN_A12  (115)
#define PIN_A13  (116)
#define PIN_A14  (117)
#define PIN_A15  (118)
extern const uint8_t A0;
extern const uint8_t A1;
extern const uint8_t A2;
extern const uint8_t A3;
extern const uint8_t A4;
extern const uint8_t A5;
extern const uint8_t A6;
extern const uint8_t A7;
extern const uint8_t A8;
extern const uint8_t A9;
extern const uint8_t A10;
extern const uint8_t A11;
extern const uint8_t A12;
extern const uint8_t A13;
extern const uint8_t A14;
extern const uint8_t A15;

#define digitalPinToInterrupt(p)  (((p) == 7) ? 0 : (((p) == 9) ? 1 : (((p) == 61) ? 2 : (((p) == 66) ? 3 : (((p) == 67) ? 4 : (((p) == 68) ? 5 : \
   (((p) == 69) ? 6 : (((p) == 87) ? 7 : (((p) == 89) ? 8 :  NOT_AN_INTERRUPT)))))))))

/***************************************************************************/
/*    Macro Definitions                                                    */
/***************************************************************************/
#define ADDR_PORT_REG           0xFFFFFF00
#define ADDR_PORT_MODE_REG      0xFFFFFF20
#define ADDR_PORT_PULL_UP_REG   0xFFFF0030
#define ADDR_PORT_IN_MODE_REG   0xFFFF0040
#define ADDR_PORT_OUT_MODE_REG  0xFFFF0050

/* Add for G23 */
#define ADDR_PORT_MODE_CONTROL_A_REG    0xFFFF0060
#define ADDR_PORT_MODE_CONTROL_T_REG    0xFFFF0260
#define ADDR_PORT_MODE_CONTROL_E_REG    0xFFFF0280
#define ADDR_PORT_OUT_CUR_CONTROL_REG   0xFFFF02A8
#define ADDR_PORT_DIG_INPUT_DIS_REG     0xFFFF02B0
/* Add for G23 */

#define ANALOG_PIN_0        26      // ANI26
#define ANALOG_PIN_1        25      // ANI25
#define ANALOG_PIN_2        24      // ANI24
#define ANALOG_PIN_3        18      // ANI18
#define ANALOG_PIN_4        20      // ANI20
#define ANALOG_PIN_5        14      // ANI14
#define ANALOG_PIN_6        13      // ANI13
#define ANALOG_PIN_7        12      // ANI12
#define ANALOG_PIN_8        11      // ANI11
#define ANALOG_PIN_9        10      // ANI10
#define ANALOG_PIN_10       9       // ANI9
#define ANALOG_PIN_11       8       // ANI8
#define ANALOG_PIN_12       7       // ANI7
#define ANALOG_PIN_13       6       // ANI6
#define ANALOG_PIN_14       5       // ANI5
#define ANALOG_PIN_15       4       // ANI4

/* Port define. */
#define PORT_0              0
#define PORT_1              1
#define PORT_2              2
#define PORT_3              3
#define PORT_4              4
#define PORT_5              5
#define PORT_6              6
#define PORT_7              7
#define PORT_8              8
#define PORT_9              9
#define PORT_10             10
#define PORT_11             11
#define PORT_12             12
#define PORT_13             13
#define PORT_14             14
#define PORT_15             15

// PORT_x means register name, so decimal name
#define DIGITAL_PIN_0       PORT_3  /* P33  */
#define DIGITAL_PIN_1       PORT_3  /* P34  */
#define DIGITAL_PIN_2       PORT_14 /* P145 */
#define DIGITAL_PIN_3       PORT_10 /* P106 */
#define DIGITAL_PIN_4       PORT_10 /* P105 */
#define DIGITAL_PIN_5       PORT_10 /* P104 */
#define DIGITAL_PIN_6       PORT_10 /* P103 */
#define DIGITAL_PIN_7       PORT_4  /* P46  */
#define DIGITAL_PIN_8       PORT_4  /* P42  */
#define DIGITAL_PIN_9       PORT_3  /* P31  */
#define DIGITAL_PIN_10      PORT_6  /* P64  */
#define DIGITAL_PIN_11      PORT_6  /* P65  */
#define DIGITAL_PIN_12      PORT_6  /* P66  */
#define DIGITAL_PIN_13      PORT_6  /* P67  */
#define DIGITAL_PIN_14      PORT_14 /* P144 */
#define DIGITAL_PIN_15      PORT_14 /* P143 */
#define DIGITAL_PIN_16      PORT_0  /* P02  */
#define DIGITAL_PIN_17      PORT_0  /* P03  */
#define DIGITAL_PIN_18      PORT_1  /* P13  */
#define DIGITAL_PIN_19      PORT_1  /* P14  */
#define DIGITAL_PIN_20      PORT_6  /* P61  */
#define DIGITAL_PIN_21      PORT_6  /* P60  */
#define DIGITAL_PIN_22      PORT_4  /* P40  */
#define DIGITAL_PIN_23      PORT_8  /* P80  */
#define DIGITAL_PIN_24      PORT_0  /* P05  */
#define DIGITAL_PIN_25      PORT_8  /* P81  */
#define DIGITAL_PIN_26      PORT_8  /* P82  */
#define DIGITAL_PIN_27      PORT_8  /* P85  */
#define DIGITAL_PIN_28      PORT_8  /* P86  */
#define DIGITAL_PIN_29      PORT_8  /* P87  */
#define DIGITAL_PIN_30      PORT_3  /* P30  */
#define DIGITAL_PIN_31      PORT_5  /* P50  */
#define DIGITAL_PIN_32      PORT_5  /* P51  */
#define DIGITAL_PIN_33      PORT_5  /* P52  */
#define DIGITAL_PIN_34      PORT_5  /* P53  */
#define DIGITAL_PIN_35      PORT_5  /* P54  */
#define DIGITAL_PIN_36      PORT_5  /* P55  */
#define DIGITAL_PIN_37      PORT_5  /* P56  */
#define DIGITAL_PIN_38      PORT_5  /* P57  */
#define DIGITAL_PIN_39      PORT_1  /* P17  */
#define DIGITAL_PIN_40      PORT_1  /* P12  */
#define DIGITAL_PIN_41      PORT_1  /* P11  */
#define DIGITAL_PIN_42      PORT_1  /* P10  */
#define DIGITAL_PIN_43      PORT_9  /* P90  */
#define DIGITAL_PIN_44      PORT_9  /* P91  */
#define DIGITAL_PIN_45      PORT_9  /* P92  */
#define DIGITAL_PIN_46      PORT_9  /* P93  */
#define DIGITAL_PIN_47      PORT_9  /* P94  */
#define DIGITAL_PIN_48      PORT_9  /* P97  */
#define DIGITAL_PIN_49      PORT_11 /* P112 */
#define DIGITAL_PIN_50      PORT_11 /* P113 */
#define DIGITAL_PIN_51      PORT_11 /* P114 */
#define DIGITAL_PIN_52      PORT_10 /* P101 */
#define DIGITAL_PIN_53      PORT_11 /* P111 */
#define DIGITAL_PIN_54      PORT_14 /* P146 */
#define DIGITAL_PIN_55      PORT_2  /* P23  */
#define DIGITAL_PIN_56      PORT_2  /* P22  */
#define DIGITAL_PIN_57      PORT_2  /* P21  */
#define DIGITAL_PIN_58      PORT_13 /* P130 */
#define DIGITAL_PIN_59      PORT_10 /* P102 */
#define DIGITAL_PIN_60      PORT_0  /* P06  */
#define DIGITAL_PIN_61      PORT_13 /* P137 */
#define DIGITAL_PIN_62      PORT_7  /* P70  */
#define DIGITAL_PIN_63      PORT_7  /* P71  */
#define DIGITAL_PIN_64      PORT_7  /* P72  */
#define DIGITAL_PIN_65      PORT_7  /* P73  */
#define DIGITAL_PIN_66      PORT_7  /* P74  */
#define DIGITAL_PIN_67      PORT_7  /* P75  */
#define DIGITAL_PIN_68      PORT_7  /* P76  */
#define DIGITAL_PIN_69      PORT_7  /* P77  */
#define DIGITAL_PIN_70      PORT_12 /* P121 */
#define DIGITAL_PIN_71      PORT_12 /* P122 */
#define DIGITAL_PIN_72      PORT_12 /* P123 */
#define DIGITAL_PIN_73      PORT_12 /* P124 */
#define DIGITAL_PIN_74      PORT_12 /* P125 */
#define DIGITAL_PIN_75      PORT_12 /* P126 */
#define DIGITAL_PIN_76      PORT_12 /* P127 */
#define DIGITAL_PIN_77      PORT_4  /* P41  */
#define DIGITAL_PIN_78      PORT_4  /* P45  */
#define DIGITAL_PIN_79      PORT_3  /* P32  */
#define DIGITAL_PIN_80      PORT_3  /* P35  */
#define DIGITAL_PIN_81      PORT_3  /* P36  */
#define DIGITAL_PIN_82      PORT_3  /* P37  */
#define DIGITAL_PIN_83      PORT_12 /* P120 */
#define DIGITAL_PIN_84      PORT_0  /* P01  */

#define DIGITAL_PIN_85      PORT_14 /* P141 */
#define DIGITAL_PIN_86      PORT_14 /* P142 */
#define DIGITAL_PIN_87      PORT_14 /* P140 */
#define DIGITAL_PIN_88      PORT_0  /* P00  */
#define DIGITAL_PIN_89      PORT_1  /* P16  */
#define DIGITAL_PIN_90      PORT_6  /* P62  */
#define DIGITAL_PIN_91      PORT_6  /* P63  */
#define DIGITAL_PIN_92      PORT_4  /* P47  */
#define DIGITAL_PIN_93      PORT_11 /* P110 */
#define DIGITAL_PIN_94      PORT_0  /* P04  */
#define DIGITAL_PIN_95      PORT_0  /* P07  */
#define DIGITAL_PIN_96      PORT_1  /* P15  */
#define DIGITAL_PIN_97      PORT_4  /* P43  */
#define DIGITAL_PIN_98      PORT_4  /* P44  */
#define DIGITAL_PIN_99      PORT_9  /* P95  */
#define DIGITAL_PIN_100     PORT_9  /* P96  */
#define DIGITAL_PIN_101     PORT_8  /* P84  */
#define DIGITAL_PIN_102     PORT_8  /* P83  */
#define DIGITAL_PIN_103     PORT_11 /* P115 */
#define DIGITAL_PIN_104     PORT_11 /* P116 */
#define DIGITAL_PIN_105     PORT_11 /* P117 */
#define DIGITAL_PIN_106     PORT_14 /* P147 */
#define DIGITAL_PIN_107     PORT_10 /* P100 */
#define DIGITAL_PIN_108     PORT_15 /* P156 */
#define DIGITAL_PIN_109     PORT_15 /* P155 */
#define DIGITAL_PIN_110     PORT_15 /* P154 */
#define DIGITAL_PIN_111     PORT_15 /* P153 */
#define DIGITAL_PIN_112     PORT_15 /* P152 */
#define DIGITAL_PIN_113     PORT_15 /* P151 */
#define DIGITAL_PIN_114     PORT_15 /* P150 */
#define DIGITAL_PIN_115     PORT_2  /* P27  */
#define DIGITAL_PIN_116     PORT_2  /* P26  */
#define DIGITAL_PIN_117     PORT_2  /* P25  */
#define DIGITAL_PIN_118     PORT_2  /* P24  */


/* Bit Num of digital pin define */
#define DIGITAL_PIN_BIT_0       0x03    /* P33  */
#define DIGITAL_PIN_BIT_1       0x04    /* P34  */
#define DIGITAL_PIN_BIT_2       0x05    /* P145 */
#define DIGITAL_PIN_BIT_3       0x06    /* P106 */
#define DIGITAL_PIN_BIT_4       0x05    /* P105 */
#define DIGITAL_PIN_BIT_5       0x04    /* P104 */
#define DIGITAL_PIN_BIT_6       0x03    /* P103 */
#define DIGITAL_PIN_BIT_7       0x06    /* P46  */
#define DIGITAL_PIN_BIT_8       0x02    /* P42  */
#define DIGITAL_PIN_BIT_9       0x01    /* P31  */
#define DIGITAL_PIN_BIT_10      0x04    /* P64  */
#define DIGITAL_PIN_BIT_11      0x05    /* P65  */
#define DIGITAL_PIN_BIT_12      0x06    /* P66  */
#define DIGITAL_PIN_BIT_13      0x07    /* P67  */
#define DIGITAL_PIN_BIT_14      0x04    /* P144 */
#define DIGITAL_PIN_BIT_15      0x03    /* P143 */
#define DIGITAL_PIN_BIT_16      0x02    /* P02  */
#define DIGITAL_PIN_BIT_17      0x03    /* P03  */
#define DIGITAL_PIN_BIT_18      0x03    /* P13  */
#define DIGITAL_PIN_BIT_19      0x04    /* P14  */
#define DIGITAL_PIN_BIT_20      0x01    /* P61  */
#define DIGITAL_PIN_BIT_21      0x00    /* P60  */
#define DIGITAL_PIN_BIT_22      0x00    /* P40  */
#define DIGITAL_PIN_BIT_23      0x00    /* P80  */
#define DIGITAL_PIN_BIT_24      0x05    /* P05  */
#define DIGITAL_PIN_BIT_25      0x01    /* P81  */
#define DIGITAL_PIN_BIT_26      0x02    /* P82  */
#define DIGITAL_PIN_BIT_27      0x05    /* P85  */
#define DIGITAL_PIN_BIT_28      0x06    /* P86  */
#define DIGITAL_PIN_BIT_29      0x07    /* P87  */
#define DIGITAL_PIN_BIT_30      0x00    /* P30  */
#define DIGITAL_PIN_BIT_31      0x00    /* P50  */
#define DIGITAL_PIN_BIT_32      0x01    /* P51  */
#define DIGITAL_PIN_BIT_33      0x02    /* P52  */
#define DIGITAL_PIN_BIT_34      0x03    /* P53  */
#define DIGITAL_PIN_BIT_35      0x04    /* P54  */
#define DIGITAL_PIN_BIT_36      0x05    /* P55  */
#define DIGITAL_PIN_BIT_37      0x06    /* P56  */
#define DIGITAL_PIN_BIT_38      0x07    /* P57  */
#define DIGITAL_PIN_BIT_39      0x07    /* P17  */
#define DIGITAL_PIN_BIT_40      0x02    /* P12  */
#define DIGITAL_PIN_BIT_41      0x01    /* P11  */
#define DIGITAL_PIN_BIT_42      0x00    /* P10  */
#define DIGITAL_PIN_BIT_43      0x00    /* P90  */
#define DIGITAL_PIN_BIT_44      0x01    /* P91  */
#define DIGITAL_PIN_BIT_45      0x02    /* P92  */
#define DIGITAL_PIN_BIT_46      0x03    /* P93  */
#define DIGITAL_PIN_BIT_47      0x04    /* P94  */
#define DIGITAL_PIN_BIT_48      0x07    /* P97  */
#define DIGITAL_PIN_BIT_49      0x02    /* P112 */
#define DIGITAL_PIN_BIT_50      0x03    /* P113 */
#define DIGITAL_PIN_BIT_51      0x04    /* P114 */
#define DIGITAL_PIN_BIT_52      0x01    /* P101 */
#define DIGITAL_PIN_BIT_53      0x01    /* P111 */
#define DIGITAL_PIN_BIT_54      0x06    /* P146 */
#define DIGITAL_PIN_BIT_55      0x03    /* P23  */
#define DIGITAL_PIN_BIT_56      0x02    /* P22  */
#define DIGITAL_PIN_BIT_57      0x01    /* P21  */
#define DIGITAL_PIN_BIT_58      0x00    /* P130 */
#define DIGITAL_PIN_BIT_59      0x02    /* P102 */
#define DIGITAL_PIN_BIT_60      0x06    /* P06  */
#define DIGITAL_PIN_BIT_61      0x07    /* P137 */
#define DIGITAL_PIN_BIT_62      0x00    /* P70  */
#define DIGITAL_PIN_BIT_63      0x01    /* P71  */
#define DIGITAL_PIN_BIT_64      0x02    /* P72  */
#define DIGITAL_PIN_BIT_65      0x03    /* P73  */
#define DIGITAL_PIN_BIT_66      0x04    /* P74  */
#define DIGITAL_PIN_BIT_67      0x05    /* P75  */
#define DIGITAL_PIN_BIT_68      0x06    /* P76  */
#define DIGITAL_PIN_BIT_69      0x07    /* P77  */
#define DIGITAL_PIN_BIT_70      0x01    /* P121 */
#define DIGITAL_PIN_BIT_71      0x02    /* P122 */
#define DIGITAL_PIN_BIT_72      0x03    /* P123 */
#define DIGITAL_PIN_BIT_73      0x04    /* P124 */
#define DIGITAL_PIN_BIT_74      0x05    /* P125 */
#define DIGITAL_PIN_BIT_75      0x06    /* P126 */
#define DIGITAL_PIN_BIT_76      0x07    /* P127 */
#define DIGITAL_PIN_BIT_77      0x01    /* P41  */
#define DIGITAL_PIN_BIT_78      0x05    /* P45  */
#define DIGITAL_PIN_BIT_79      0x02    /* P32  */
#define DIGITAL_PIN_BIT_80      0x05    /* P35  */
#define DIGITAL_PIN_BIT_81      0x06    /* P36  */
#define DIGITAL_PIN_BIT_82      0x07    /* P37  */
#define DIGITAL_PIN_BIT_83      0x00    /* P120 */
#define DIGITAL_PIN_BIT_84      0x01    /* P01  */
#define DIGITAL_PIN_BIT_85      0x01    /* P141 */
#define DIGITAL_PIN_BIT_86      0x02    /* P142 */
#define DIGITAL_PIN_BIT_87      0x00    /* P140 */
#define DIGITAL_PIN_BIT_88      0x00    /* P00  */
#define DIGITAL_PIN_BIT_89      0x06    /* P16  */
#define DIGITAL_PIN_BIT_90      0x02    /* P62  */
#define DIGITAL_PIN_BIT_91      0x03    /* P63  */
#define DIGITAL_PIN_BIT_92      0x07    /* P47  */
#define DIGITAL_PIN_BIT_93      0x00    /* P110 */
#define DIGITAL_PIN_BIT_94      0x04    /* P04  */
#define DIGITAL_PIN_BIT_95      0x07    /* P07  */
#define DIGITAL_PIN_BIT_96      0x05    /* P15  */
#define DIGITAL_PIN_BIT_97      0x03    /* P43  */
#define DIGITAL_PIN_BIT_98      0x04    /* P44  */
#define DIGITAL_PIN_BIT_99      0x05    /* P95  */
#define DIGITAL_PIN_BIT_100     0x06    /* P96  */
#define DIGITAL_PIN_BIT_101     0x04    /* P84  */
#define DIGITAL_PIN_BIT_102     0x03    /* P83  */
#define DIGITAL_PIN_BIT_103     0x05    /* P115 */
#define DIGITAL_PIN_BIT_104     0x06    /* P116 */
#define DIGITAL_PIN_BIT_105     0x07    /* P117 */
#define DIGITAL_PIN_BIT_106     0x07    /* P147 */
#define DIGITAL_PIN_BIT_107     0x00    /* P100 */
#define DIGITAL_PIN_BIT_108     0x06    /* P156 */
#define DIGITAL_PIN_BIT_109     0x05    /* P155 */
#define DIGITAL_PIN_BIT_110     0x04    /* P154 */
#define DIGITAL_PIN_BIT_111     0x03    /* P153 */
#define DIGITAL_PIN_BIT_112     0x02    /* P152 */
#define DIGITAL_PIN_BIT_113     0x01    /* P151 */
#define DIGITAL_PIN_BIT_114     0x00    /* P150 */
#define DIGITAL_PIN_BIT_115     0x07    /* P27  */
#define DIGITAL_PIN_BIT_116     0x06    /* P26  */
#define DIGITAL_PIN_BIT_117     0x05    /* P25  */
#define DIGITAL_PIN_BIT_118     0x04    /* P24  */



/* Bit mask of digital pin define. */
// Px0 -> 001, Px1 -> 0x02, Px2 -> 0x04, Px3 -> 0x08, Px4 -> 0x10, Px5 -> 0x20, Px6 -> 0x40, Px7 -> 0x80
#define DIGITAL_PIN_MASK_0      0x08    /* P33  */
#define DIGITAL_PIN_MASK_1      0x10    /* P34  */
#define DIGITAL_PIN_MASK_2      0x20    /* P145 */
#define DIGITAL_PIN_MASK_3      0x40    /* P106 */
#define DIGITAL_PIN_MASK_4      0x20    /* P105 */
#define DIGITAL_PIN_MASK_5      0x10    /* P104 */
#define DIGITAL_PIN_MASK_6      0x08    /* P103 */
#define DIGITAL_PIN_MASK_7      0x40    /* P46  */
#define DIGITAL_PIN_MASK_8      0x04    /* P42  */
#define DIGITAL_PIN_MASK_9      0x02    /* P31  */
#define DIGITAL_PIN_MASK_10     0x10    /* P64  */
#define DIGITAL_PIN_MASK_11     0x20    /* P65  */
#define DIGITAL_PIN_MASK_12     0x40    /* P66  */
#define DIGITAL_PIN_MASK_13     0x80    /* P67  */
#define DIGITAL_PIN_MASK_14     0x10    /* P144 */
#define DIGITAL_PIN_MASK_15     0x08    /* P143 */
#define DIGITAL_PIN_MASK_16     0x04    /* P02  */
#define DIGITAL_PIN_MASK_17     0x08    /* P03  */
#define DIGITAL_PIN_MASK_18     0x08    /* P13  */
#define DIGITAL_PIN_MASK_19     0x10    /* P14  */
#define DIGITAL_PIN_MASK_20     0x02    /* P61  */
#define DIGITAL_PIN_MASK_21     0x01    /* P60  */
#define DIGITAL_PIN_MASK_22     0x01    /* P40  */
#define DIGITAL_PIN_MASK_23     0x01    /* P80  */
#define DIGITAL_PIN_MASK_24     0x20    /* P05  */
#define DIGITAL_PIN_MASK_25     0x02    /* P81  */
#define DIGITAL_PIN_MASK_26     0x04    /* P82  */
#define DIGITAL_PIN_MASK_27     0x20    /* P85  */
#define DIGITAL_PIN_MASK_28     0x40    /* P86  */
#define DIGITAL_PIN_MASK_29     0x80    /* P87  */
#define DIGITAL_PIN_MASK_30     0x01    /* P30  */
#define DIGITAL_PIN_MASK_31     0x01    /* P50  */
#define DIGITAL_PIN_MASK_32     0x02    /* P51  */
#define DIGITAL_PIN_MASK_33     0x04    /* P52  */
#define DIGITAL_PIN_MASK_34     0x08    /* P53  */
#define DIGITAL_PIN_MASK_35     0x10    /* P54  */
#define DIGITAL_PIN_MASK_36     0x20    /* P55  */
#define DIGITAL_PIN_MASK_37     0x40    /* P56  */
#define DIGITAL_PIN_MASK_38     0x80    /* P57  */
#define DIGITAL_PIN_MASK_39     0x80    /* P17  */
#define DIGITAL_PIN_MASK_40     0x04    /* P12  */
#define DIGITAL_PIN_MASK_41     0x02    /* P11  */
#define DIGITAL_PIN_MASK_42     0x01    /* P10  */
#define DIGITAL_PIN_MASK_43     0x01    /* P90  */
#define DIGITAL_PIN_MASK_44     0x02    /* P91  */
#define DIGITAL_PIN_MASK_45     0x04    /* P92  */
#define DIGITAL_PIN_MASK_46     0x08    /* P93  */
#define DIGITAL_PIN_MASK_47     0x10    /* P94  */
#define DIGITAL_PIN_MASK_48     0x80    /* P97  */
#define DIGITAL_PIN_MASK_49     0x04    /* P112 */
#define DIGITAL_PIN_MASK_50     0x08    /* P113 */
#define DIGITAL_PIN_MASK_51     0x10    /* P114 */
#define DIGITAL_PIN_MASK_52     0x02    /* P101 */
#define DIGITAL_PIN_MASK_53     0x02    /* P111 */
#define DIGITAL_PIN_MASK_54     0x40    /* P146 */
#define DIGITAL_PIN_MASK_55     0x08    /* P23  */
#define DIGITAL_PIN_MASK_56     0x04    /* P22  */
#define DIGITAL_PIN_MASK_57     0x02    /* P21  */
#define DIGITAL_PIN_MASK_58     0x01    /* P130 */
#define DIGITAL_PIN_MASK_59     0x04    /* P102 */
#define DIGITAL_PIN_MASK_60     0x40    /* P06  */
#define DIGITAL_PIN_MASK_61     0x80    /* P137 */
#define DIGITAL_PIN_MASK_62     0x01    /* P70  */
#define DIGITAL_PIN_MASK_63     0x02    /* P71  */
#define DIGITAL_PIN_MASK_64     0x04    /* P72  */
#define DIGITAL_PIN_MASK_65     0x08    /* P73  */
#define DIGITAL_PIN_MASK_66     0x10    /* P74  */
#define DIGITAL_PIN_MASK_67     0x20    /* P75  */
#define DIGITAL_PIN_MASK_68     0x40    /* P76  */
#define DIGITAL_PIN_MASK_69     0x80    /* P77  */
#define DIGITAL_PIN_MASK_70     0x02    /* P121 */
#define DIGITAL_PIN_MASK_71     0x04    /* P122 */
#define DIGITAL_PIN_MASK_72     0x08    /* P123 */
#define DIGITAL_PIN_MASK_73     0x10    /* P124 */
#define DIGITAL_PIN_MASK_74     0x20    /* P125 */
#define DIGITAL_PIN_MASK_75     0x40    /* P126 */
#define DIGITAL_PIN_MASK_76     0x80    /* P127 */
#define DIGITAL_PIN_MASK_77     0x02    /* P41  */
#define DIGITAL_PIN_MASK_78     0x20    /* P45  */
#define DIGITAL_PIN_MASK_79     0x04    /* P32  */
#define DIGITAL_PIN_MASK_80     0x20    /* P35  */
#define DIGITAL_PIN_MASK_81     0x40    /* P36  */
#define DIGITAL_PIN_MASK_82     0x80    /* P37  */
#define DIGITAL_PIN_MASK_83     0x01    /* P120 */
#define DIGITAL_PIN_MASK_84     0x02    /* P01  */
#define DIGITAL_PIN_MASK_85     0x02    /* P141 */
#define DIGITAL_PIN_MASK_86     0x04    /* P142 */
#define DIGITAL_PIN_MASK_87     0x01    /* P140 */
#define DIGITAL_PIN_MASK_88     0x01    /* P00  */
#define DIGITAL_PIN_MASK_89     0x40    /* P16  */
#define DIGITAL_PIN_MASK_90     0x04    /* P62  */
#define DIGITAL_PIN_MASK_91     0x08    /* P63  */
#define DIGITAL_PIN_MASK_92     0x80    /* P47  */
#define DIGITAL_PIN_MASK_93     0x01    /* P110 */
#define DIGITAL_PIN_MASK_94     0x10    /* P04  */
#define DIGITAL_PIN_MASK_95     0x80    /* P07  */
#define DIGITAL_PIN_MASK_96     0x20    /* P15  */
#define DIGITAL_PIN_MASK_97     0x08    /* P43  */
#define DIGITAL_PIN_MASK_98     0x10    /* P44  */
#define DIGITAL_PIN_MASK_99     0x20    /* P95  */
#define DIGITAL_PIN_MASK_100    0x40    /* P96  */
#define DIGITAL_PIN_MASK_101    0x10    /* P84  */
#define DIGITAL_PIN_MASK_102    0x08    /* P83  */
#define DIGITAL_PIN_MASK_103    0x20    /* P115 */
#define DIGITAL_PIN_MASK_104    0x40    /* P116 */
#define DIGITAL_PIN_MASK_105    0x80    /* P117 */
#define DIGITAL_PIN_MASK_106    0x80    /* P147 */
#define DIGITAL_PIN_MASK_107    0x01    /* P100 */
#define DIGITAL_PIN_MASK_108    0x40    /* P156 */
#define DIGITAL_PIN_MASK_109    0x20    /* P155 */
#define DIGITAL_PIN_MASK_110    0x10    /* P154 */
#define DIGITAL_PIN_MASK_111    0x08    /* P153 */
#define DIGITAL_PIN_MASK_112    0x04    /* P152 */
#define DIGITAL_PIN_MASK_113    0x02    /* P151 */
#define DIGITAL_PIN_MASK_114    0x01    /* P150 */
#define DIGITAL_PIN_MASK_115    0x80    /* P27  */
#define DIGITAL_PIN_MASK_116    0x40    /* P26  */
#define DIGITAL_PIN_MASK_117    0x20    /* P25  */
#define DIGITAL_PIN_MASK_118    0x10    /* P24  */


/* Add for G23 PMCA & PMCT & PMCE */
// PMCA : exist only PMCA 0, 1, 2, 3, 10, 11, 12, 14, 15
// Px0 -> 001, Px1 -> 0x02, Px2 -> 0x04, Px3 -> 0x08, Px4 -> 0x10, Px5 -> 0x20, Px6 -> 0x40, Px7 -> 0x80
#define DIGITAL_PIN_PMCA_0      0x00    /* P33  */
#define DIGITAL_PIN_PMCA_1      0x00    /* P34  */
#define DIGITAL_PIN_PMCA_2      0x00    /* P145 */
#define DIGITAL_PIN_PMCA_3      0x00    /* P106 */
#define DIGITAL_PIN_PMCA_4      0x00    /* P105 */
#define DIGITAL_PIN_PMCA_5      0x00    /* P104 */
#define DIGITAL_PIN_PMCA_6      0x00    /* P103 */
#define DIGITAL_PIN_PMCA_7      0x00    /* P46  */
#define DIGITAL_PIN_PMCA_8      0x00    /* P42  */
#define DIGITAL_PIN_PMCA_9      0x00    /* P31  */
#define DIGITAL_PIN_PMCA_10     0x00    /* P64  */
#define DIGITAL_PIN_PMCA_11     0x00    /* P65  */
#define DIGITAL_PIN_PMCA_12     0x00    /* P66  */
#define DIGITAL_PIN_PMCA_13     0x00    /* P67  */
#define DIGITAL_PIN_PMCA_14     0x00    /* P144 */
#define DIGITAL_PIN_PMCA_15     0x00    /* P143 */
#define DIGITAL_PIN_PMCA_16     0x04    /* P02  */
#define DIGITAL_PIN_PMCA_17     0x08    /* P03  */
#define DIGITAL_PIN_PMCA_18     0x08    /* P13  */
#define DIGITAL_PIN_PMCA_19     0x00    /* P14  */
#define DIGITAL_PIN_PMCA_20     0x00    /* P61  */
#define DIGITAL_PIN_PMCA_21     0x00    /* P60  */
#define DIGITAL_PIN_PMCA_22     0x00    /* P40  */
#define DIGITAL_PIN_PMCA_23     0x00    /* P80  */
#define DIGITAL_PIN_PMCA_24     0x00    /* P05  */
#define DIGITAL_PIN_PMCA_25     0x00    /* P81  */
#define DIGITAL_PIN_PMCA_26     0x00    /* P82  */
#define DIGITAL_PIN_PMCA_27     0x00    /* P85  */
#define DIGITAL_PIN_PMCA_28     0x00    /* P86  */
#define DIGITAL_PIN_PMCA_29     0x00    /* P87  */
#define DIGITAL_PIN_PMCA_30     0x00    /* P30  */
#define DIGITAL_PIN_PMCA_31     0x00    /* P50  */
#define DIGITAL_PIN_PMCA_32     0x00    /* P51  */
#define DIGITAL_PIN_PMCA_33     0x00    /* P52  */
#define DIGITAL_PIN_PMCA_34     0x00    /* P53  */
#define DIGITAL_PIN_PMCA_35     0x00    /* P54  */
#define DIGITAL_PIN_PMCA_36     0x00    /* P55  */
#define DIGITAL_PIN_PMCA_37     0x00    /* P56  */
#define DIGITAL_PIN_PMCA_38     0x00    /* P57  */
#define DIGITAL_PIN_PMCA_39     0x00    /* P17  */
#define DIGITAL_PIN_PMCA_40     0x00    /* P12  */
#define DIGITAL_PIN_PMCA_41     0x00    /* P11  */
#define DIGITAL_PIN_PMCA_42     0x00    /* P10  */
#define DIGITAL_PIN_PMCA_43     0x00    /* P90  */
#define DIGITAL_PIN_PMCA_44     0x00    /* P91  */
#define DIGITAL_PIN_PMCA_45     0x00    /* P92  */
#define DIGITAL_PIN_PMCA_46     0x00    /* P93  */
#define DIGITAL_PIN_PMCA_47     0x00    /* P94  */
#define DIGITAL_PIN_PMCA_48     0x00    /* P97  */
#define DIGITAL_PIN_PMCA_49     0x00    /* P112 */
#define DIGITAL_PIN_PMCA_50     0x00    /* P113 */
#define DIGITAL_PIN_PMCA_51     0x00    /* P114 */
#define DIGITAL_PIN_PMCA_52     0x00    /* P101 */
#define DIGITAL_PIN_PMCA_53     0x00    /* P111 */
#define DIGITAL_PIN_PMCA_54     0x00    /* P146 */
#define DIGITAL_PIN_PMCA_55     0x08    /* P23  */
#define DIGITAL_PIN_PMCA_56     0x04    /* P22  */
#define DIGITAL_PIN_PMCA_57     0x02    /* P21  */
#define DIGITAL_PIN_PMCA_58     0x00    /* P130 */
#define DIGITAL_PIN_PMCA_59     0x00    /* P102 */
#define DIGITAL_PIN_PMCA_60     0x00    /* P06  */
#define DIGITAL_PIN_PMCA_61     0x00    /* P137 */
#define DIGITAL_PIN_PMCA_62     0x00    /* P70  */
#define DIGITAL_PIN_PMCA_63     0x00    /* P71  */
#define DIGITAL_PIN_PMCA_64     0x00    /* P72  */
#define DIGITAL_PIN_PMCA_65     0x00    /* P73  */
#define DIGITAL_PIN_PMCA_66     0x00    /* P74  */
#define DIGITAL_PIN_PMCA_67     0x00    /* P75  */
#define DIGITAL_PIN_PMCA_68     0x00    /* P76  */
#define DIGITAL_PIN_PMCA_69     0x00    /* P77  */
#define DIGITAL_PIN_PMCA_70     0x00    /* P121 */
#define DIGITAL_PIN_PMCA_71     0x00    /* P122 */
#define DIGITAL_PIN_PMCA_72     0x00    /* P123 */
#define DIGITAL_PIN_PMCA_73     0x00    /* P124 */
#define DIGITAL_PIN_PMCA_74     0x00    /* P125 */
#define DIGITAL_PIN_PMCA_75     0x00    /* P126 */
#define DIGITAL_PIN_PMCA_76     0x00    /* P127 */
#define DIGITAL_PIN_PMCA_77     0x00    /* P41  */
#define DIGITAL_PIN_PMCA_78     0x00    /* P45  */
#define DIGITAL_PIN_PMCA_79     0x00    /* P32  */
#define DIGITAL_PIN_PMCA_80     0x20    /* P35  */
#define DIGITAL_PIN_PMCA_81     0x40    /* P36  */
#define DIGITAL_PIN_PMCA_82     0x80    /* P37  */
#define DIGITAL_PIN_PMCA_83     0x01    /* P120 */
#define DIGITAL_PIN_PMCA_84     0x02    /* P01  */

#define DIGITAL_PIN_PMCA_85     0x00    /* P141 */
#define DIGITAL_PIN_PMCA_86     0x00    /* P142 */
#define DIGITAL_PIN_PMCA_87     0x00    /* P140 */
#define DIGITAL_PIN_PMCA_88     0x01    /* P00  */
#define DIGITAL_PIN_PMCA_89     0x00    /* P16  */
#define DIGITAL_PIN_PMCA_90     0x00    /* P62  */
#define DIGITAL_PIN_PMCA_91     0x00    /* P63  */
#define DIGITAL_PIN_PMCA_92     0x00    /* P47  */
#define DIGITAL_PIN_PMCA_93     0x00    /* P110 */
#define DIGITAL_PIN_PMCA_94     0x00    /* P04  */
#define DIGITAL_PIN_PMCA_95     0x00    /* P07  */
#define DIGITAL_PIN_PMCA_96     0x00    /* P15  */
#define DIGITAL_PIN_PMCA_97     0x00    /* P43  */
#define DIGITAL_PIN_PMCA_98     0x00    /* P44  */
#define DIGITAL_PIN_PMCA_99     0x00    /* P95  */
#define DIGITAL_PIN_PMCA_100    0x00    /* P96  */
#define DIGITAL_PIN_PMCA_101    0x00    /* P84  */
#define DIGITAL_PIN_PMCA_102    0x00    /* P83  */
#define DIGITAL_PIN_PMCA_103    0x20    /* P115 */
#define DIGITAL_PIN_PMCA_104    0x40    /* P116 */
#define DIGITAL_PIN_PMCA_105    0x80    /* P117 */
#define DIGITAL_PIN_PMCA_106    0x80    /* P147 */
#define DIGITAL_PIN_PMCA_107    0x01    /* P100 */
#define DIGITAL_PIN_PMCA_108    0x40    /* P156 */
#define DIGITAL_PIN_PMCA_109    0x20    /* P155 */
#define DIGITAL_PIN_PMCA_110    0x10    /* P154 */
#define DIGITAL_PIN_PMCA_111    0x08    /* P153 */
#define DIGITAL_PIN_PMCA_112    0x04    /* P152 */
#define DIGITAL_PIN_PMCA_113    0x02    /* P151 */
#define DIGITAL_PIN_PMCA_114    0x01    /* P150 */
#define DIGITAL_PIN_PMCA_115    0x80    /* P27  */
#define DIGITAL_PIN_PMCA_116    0x40    /* P26  */
#define DIGITAL_PIN_PMCA_117    0x20    /* P25  */
#define DIGITAL_PIN_PMCA_118    0x10    /* P24  */


// PMCT
// PMCT : exist only part of PMCT0, 2, 3, 5, 6, 7, 15 (Refer manual)
// Px0 -> 001, Px1 -> 0x02, Px2 -> 0x04, Px3 -> 0x08, Px4 -> 0x10, Px5 -> 0x20, Px6 -> 0x40, Px7 -> 0x80

#define DIGITAL_PIN_PMCT_0      0x00    /* P33  */
#define DIGITAL_PIN_PMCT_1      0x00    /* P34  */
#define DIGITAL_PIN_PMCT_2      0x00    /* P145 */
#define DIGITAL_PIN_PMCT_3      0x00    /* P106 */
#define DIGITAL_PIN_PMCT_4      0x00    /* P105 */
#define DIGITAL_PIN_PMCT_5      0x00    /* P104 */
#define DIGITAL_PIN_PMCT_6      0x00    /* P103 */
#define DIGITAL_PIN_PMCT_7      0x00    /* P46  */
#define DIGITAL_PIN_PMCT_8      0x00    /* P42  */
#define DIGITAL_PIN_PMCT_9      0x02    /* P31  */
#define DIGITAL_PIN_PMCT_10     0x10    /* P64  */
#define DIGITAL_PIN_PMCT_11     0x20    /* P65  */
#define DIGITAL_PIN_PMCT_12     0x40    /* P66  */
#define DIGITAL_PIN_PMCT_13     0x80    /* P67  */
#define DIGITAL_PIN_PMCT_14     0x00    /* P144 */
#define DIGITAL_PIN_PMCT_15     0x00    /* P143 */
#define DIGITAL_PIN_PMCT_16     0x04    /* P02  */
#define DIGITAL_PIN_PMCT_17     0x08    /* P03  */
#define DIGITAL_PIN_PMCT_18     0x00    /* P13  */
#define DIGITAL_PIN_PMCT_19     0x00    /* P14  */
#define DIGITAL_PIN_PMCT_20     0x00    /* P61  */
#define DIGITAL_PIN_PMCT_21     0x00    /* P60  */
#define DIGITAL_PIN_PMCT_22     0x00    /* P40  */
#define DIGITAL_PIN_PMCT_23     0x00    /* P80  */
#define DIGITAL_PIN_PMCT_24     0x20    /* P05  */
#define DIGITAL_PIN_PMCT_25     0x00    /* P81  */
#define DIGITAL_PIN_PMCT_26     0x00    /* P82  */
#define DIGITAL_PIN_PMCT_27     0x00    /* P85  */
#define DIGITAL_PIN_PMCT_28     0x00    /* P86  */
#define DIGITAL_PIN_PMCT_29     0x00    /* P87  */
#define DIGITAL_PIN_PMCT_30     0x01    /* P30  */
#define DIGITAL_PIN_PMCT_31     0x01    /* P50  */
#define DIGITAL_PIN_PMCT_32     0x00    /* P51  */
#define DIGITAL_PIN_PMCT_33     0x00    /* P52  */
#define DIGITAL_PIN_PMCT_34     0x00    /* P53  */
#define DIGITAL_PIN_PMCT_35     0x00    /* P54  */
#define DIGITAL_PIN_PMCT_36     0x00    /* P55  */
#define DIGITAL_PIN_PMCT_37     0x00    /* P56  */
#define DIGITAL_PIN_PMCT_38     0x00    /* P57  */
#define DIGITAL_PIN_PMCT_39     0x00    /* P17  */
#define DIGITAL_PIN_PMCT_40     0x00    /* P12  */
#define DIGITAL_PIN_PMCT_41     0x00    /* P11  */
#define DIGITAL_PIN_PMCT_42     0x00    /* P10  */
#define DIGITAL_PIN_PMCT_43     0x00    /* P90  */
#define DIGITAL_PIN_PMCT_44     0x00    /* P91  */
#define DIGITAL_PIN_PMCT_45     0x00    /* P92  */
#define DIGITAL_PIN_PMCT_46     0x00    /* P93  */
#define DIGITAL_PIN_PMCT_47     0x00    /* P94  */
#define DIGITAL_PIN_PMCT_48     0x00    /* P97  */
#define DIGITAL_PIN_PMCT_49     0x00    /* P112 */
#define DIGITAL_PIN_PMCT_50     0x00    /* P113 */
#define DIGITAL_PIN_PMCT_51     0x00    /* P114 */
#define DIGITAL_PIN_PMCT_52     0x00    /* P101 */
#define DIGITAL_PIN_PMCT_53     0x00    /* P111 */
#define DIGITAL_PIN_PMCT_54     0x00    /* P146 */
#define DIGITAL_PIN_PMCT_55     0x08    /* P23  */
#define DIGITAL_PIN_PMCT_56     0x04    /* P22  */
#define DIGITAL_PIN_PMCT_57     0x00    /* P21  */
#define DIGITAL_PIN_PMCT_58     0x00    /* P130 */
#define DIGITAL_PIN_PMCT_59     0x00    /* P102 */
#define DIGITAL_PIN_PMCT_60     0x40    /* P06  */
#define DIGITAL_PIN_PMCT_61     0x00    /* P137 */
#define DIGITAL_PIN_PMCT_62     0x01    /* P70  */
#define DIGITAL_PIN_PMCT_63     0x02    /* P71  */
#define DIGITAL_PIN_PMCT_64     0x04    /* P72  */
#define DIGITAL_PIN_PMCT_65     0x08    /* P73  */
#define DIGITAL_PIN_PMCT_66     0x10    /* P74  */
#define DIGITAL_PIN_PMCT_67     0x20    /* P75  */
#define DIGITAL_PIN_PMCT_68     0x40    /* P76  */
#define DIGITAL_PIN_PMCT_69     0x80    /* P77  */
#define DIGITAL_PIN_PMCT_70     0x00    /* P121 */
#define DIGITAL_PIN_PMCT_71     0x00    /* P122 */
#define DIGITAL_PIN_PMCT_72     0x00    /* P123 */
#define DIGITAL_PIN_PMCT_73     0x00    /* P124 */
#define DIGITAL_PIN_PMCT_74     0x00    /* P125 */
#define DIGITAL_PIN_PMCT_75     0x00    /* P126 */
#define DIGITAL_PIN_PMCT_76     0x00    /* P127 */
#define DIGITAL_PIN_PMCT_77     0x00    /* P41  */
#define DIGITAL_PIN_PMCT_78     0x00    /* P45  */
#define DIGITAL_PIN_PMCT_79     0x00    /* P32  */
#define DIGITAL_PIN_PMCT_80     0x00    /* P35  */
#define DIGITAL_PIN_PMCT_81     0x00    /* P36  */
#define DIGITAL_PIN_PMCT_82     0x00    /* P37  */
#define DIGITAL_PIN_PMCT_83     0x00    /* P120 */
#define DIGITAL_PIN_PMCT_84     0x02    /* P01  */

#define DIGITAL_PIN_PMCT_85     0x00    /* P141 */
#define DIGITAL_PIN_PMCT_86     0x00    /* P142 */
#define DIGITAL_PIN_PMCT_87     0x00    /* P140 */
#define DIGITAL_PIN_PMCT_88     0x01    /* P00  */
#define DIGITAL_PIN_PMCT_89     0x00    /* P16  */
#define DIGITAL_PIN_PMCT_90     0x00    /* P62  */
#define DIGITAL_PIN_PMCT_91     0x00    /* P63  */
#define DIGITAL_PIN_PMCT_92     0x00    /* P47  */
#define DIGITAL_PIN_PMCT_93     0x00    /* P110 */
#define DIGITAL_PIN_PMCT_94     0x00    /* P04  */
#define DIGITAL_PIN_PMCT_95     0x00    /* P07  */
#define DIGITAL_PIN_PMCT_96     0x00    /* P15  */
#define DIGITAL_PIN_PMCT_97     0x00    /* P43  */
#define DIGITAL_PIN_PMCT_98     0x00    /* P44  */
#define DIGITAL_PIN_PMCT_99     0x00    /* P95  */
#define DIGITAL_PIN_PMCT_100    0x00    /* P96  */
#define DIGITAL_PIN_PMCT_101    0x00    /* P84  */
#define DIGITAL_PIN_PMCT_102    0x00    /* P83  */
#define DIGITAL_PIN_PMCT_103    0x00    /* P115 */
#define DIGITAL_PIN_PMCT_104    0x00    /* P116 */
#define DIGITAL_PIN_PMCT_105    0x00    /* P117 */
#define DIGITAL_PIN_PMCT_106    0x00    /* P147 */
#define DIGITAL_PIN_PMCT_107    0x00    /* P100 */
#define DIGITAL_PIN_PMCT_108    0x00    /* P156 */
#define DIGITAL_PIN_PMCT_109    0x20    /* P155 */
#define DIGITAL_PIN_PMCT_110    0x10    /* P154 */
#define DIGITAL_PIN_PMCT_111    0x08    /* P153 */
#define DIGITAL_PIN_PMCT_112    0x04    /* P152 */
#define DIGITAL_PIN_PMCT_113    0x02    /* P151 */
#define DIGITAL_PIN_PMCT_114    0x01    /* P150 */
#define DIGITAL_PIN_PMCT_115    0x80    /* P27  */
#define DIGITAL_PIN_PMCT_116    0x40    /* P26  */
#define DIGITAL_PIN_PMCT_117    0x20    /* P25  */
#define DIGITAL_PIN_PMCT_118    0x10    /* P24  */


// PMCE
// PMCE : exist only part of PMCE0, 1, 5, 6 (refer manual)
// Px0 -> 001, Px1 -> 0x02, Px2 -> 0x04, Px3 -> 0x08, Px4 -> 0x10, Px5 -> 0x20, Px6 -> 0x40, Px7 -> 0x80


#define DIGITAL_PIN_PMCE_0      0x00    /* P33  */
#define DIGITAL_PIN_PMCE_1      0x00    /* P34  */
#define DIGITAL_PIN_PMCE_2      0x00    /* P145 */
#define DIGITAL_PIN_PMCE_3      0x00    /* P106 */
#define DIGITAL_PIN_PMCE_4      0x00    /* P105 */
#define DIGITAL_PIN_PMCE_5      0x00    /* P104 */
#define DIGITAL_PIN_PMCE_6      0x00    /* P103 */
#define DIGITAL_PIN_PMCE_7      0x00    /* P46  */
#define DIGITAL_PIN_PMCE_8      0x00    /* P42  */
#define DIGITAL_PIN_PMCE_9      0x00    /* P31  */
#define DIGITAL_PIN_PMCE_10     0x00    /* P64  */
#define DIGITAL_PIN_PMCE_11     0x00    /* P65  */
#define DIGITAL_PIN_PMCE_12     0x00    /* P66  */
#define DIGITAL_PIN_PMCE_13     0x00    /* P67  */
#define DIGITAL_PIN_PMCE_14     0x00    /* P144 */
#define DIGITAL_PIN_PMCE_15     0x00    /* P143 */
#define DIGITAL_PIN_PMCE_16     0x00    /* P02  */
#define DIGITAL_PIN_PMCE_17     0x00    /* P03  */
#define DIGITAL_PIN_PMCE_18     0x08    /* P13  */
#define DIGITAL_PIN_PMCE_19     0x10    /* P14  */
#define DIGITAL_PIN_PMCE_20     0x02    /* P61  */
#define DIGITAL_PIN_PMCE_21     0x01    /* P60  */
#define DIGITAL_PIN_PMCE_22     0x00    /* P40  */
#define DIGITAL_PIN_PMCE_23     0x00    /* P80  */
#define DIGITAL_PIN_PMCE_24     0x00    /* P05  */
#define DIGITAL_PIN_PMCE_25     0x00    /* P81  */
#define DIGITAL_PIN_PMCE_26     0x00    /* P82  */
#define DIGITAL_PIN_PMCE_27     0x00    /* P85  */
#define DIGITAL_PIN_PMCE_28     0x00    /* P86  */
#define DIGITAL_PIN_PMCE_29     0x00    /* P87  */
#define DIGITAL_PIN_PMCE_30     0x00    /* P30  */
#define DIGITAL_PIN_PMCE_31     0x01    /* P50  */
#define DIGITAL_PIN_PMCE_32     0x02    /* P51  */
#define DIGITAL_PIN_PMCE_33     0x00    /* P52  */
#define DIGITAL_PIN_PMCE_34     0x00    /* P53  */
#define DIGITAL_PIN_PMCE_35     0x00    /* P54  */
#define DIGITAL_PIN_PMCE_36     0x00    /* P55  */
#define DIGITAL_PIN_PMCE_37     0x00    /* P56  */
#define DIGITAL_PIN_PMCE_38     0x00    /* P57  */
#define DIGITAL_PIN_PMCE_39     0x80    /* P17  */
#define DIGITAL_PIN_PMCE_40     0x04    /* P12  */
#define DIGITAL_PIN_PMCE_41     0x02    /* P11  */
#define DIGITAL_PIN_PMCE_42     0x01    /* P10  */
#define DIGITAL_PIN_PMCE_43     0x00    /* P90  */
#define DIGITAL_PIN_PMCE_44     0x00    /* P91  */
#define DIGITAL_PIN_PMCE_45     0x00    /* P92  */
#define DIGITAL_PIN_PMCE_46     0x00    /* P93  */
#define DIGITAL_PIN_PMCE_47     0x00    /* P94  */
#define DIGITAL_PIN_PMCE_48     0x00    /* P97  */
#define DIGITAL_PIN_PMCE_49     0x00    /* P112 */
#define DIGITAL_PIN_PMCE_50     0x00    /* P113 */
#define DIGITAL_PIN_PMCE_51     0x00    /* P114 */
#define DIGITAL_PIN_PMCE_52     0x00    /* P101 */
#define DIGITAL_PIN_PMCE_53     0x00    /* P111 */
#define DIGITAL_PIN_PMCE_54     0x00    /* P146 */
#define DIGITAL_PIN_PMCE_55     0x00    /* P23  */
#define DIGITAL_PIN_PMCE_56     0x00    /* P22  */
#define DIGITAL_PIN_PMCE_57     0x00    /* P21  */
#define DIGITAL_PIN_PMCE_58     0x00    /* P130 */
#define DIGITAL_PIN_PMCE_59     0x00    /* P102 */
#define DIGITAL_PIN_PMCE_60     0x00    /* P06  */
#define DIGITAL_PIN_PMCE_61     0x00    /* P137 */
#define DIGITAL_PIN_PMCE_62     0x00    /* P70  */
#define DIGITAL_PIN_PMCE_63     0x00    /* P71  */
#define DIGITAL_PIN_PMCE_64     0x00    /* P72  */
#define DIGITAL_PIN_PMCE_65     0x00    /* P73  */
#define DIGITAL_PIN_PMCE_66     0x00    /* P74  */
#define DIGITAL_PIN_PMCE_67     0x00    /* P75  */
#define DIGITAL_PIN_PMCE_68     0x00    /* P76  */
#define DIGITAL_PIN_PMCE_69     0x00    /* P77  */
#define DIGITAL_PIN_PMCE_70     0x00    /* P121 */
#define DIGITAL_PIN_PMCE_71     0x00    /* P122 */
#define DIGITAL_PIN_PMCE_72     0x00    /* P123 */
#define DIGITAL_PIN_PMCE_73     0x00    /* P124 */
#define DIGITAL_PIN_PMCE_74     0x00    /* P125 */
#define DIGITAL_PIN_PMCE_75     0x00    /* P126 */
#define DIGITAL_PIN_PMCE_76     0x00    /* P127 */
#define DIGITAL_PIN_PMCE_77     0x00    /* P41  */
#define DIGITAL_PIN_PMCE_78     0x00    /* P45  */
#define DIGITAL_PIN_PMCE_79     0x00    /* P32  */
#define DIGITAL_PIN_PMCE_80     0x00    /* P35  */
#define DIGITAL_PIN_PMCE_81     0x00    /* P36  */
#define DIGITAL_PIN_PMCE_82     0x00    /* P37  */
#define DIGITAL_PIN_PMCE_83     0x00    /* P120 */
#define DIGITAL_PIN_PMCE_84     0x02    /* P01  */

#define DIGITAL_PIN_PMCE_85     0x00    /* P141 */
#define DIGITAL_PIN_PMCE_86     0x00    /* P142 */
#define DIGITAL_PIN_PMCE_87     0x00    /* P140 */
#define DIGITAL_PIN_PMCE_88     0x00    /* P00  */
#define DIGITAL_PIN_PMCE_89     0x40    /* P16  */
#define DIGITAL_PIN_PMCE_90     0x00    /* P62  */
#define DIGITAL_PIN_PMCE_91     0x00    /* P63  */
#define DIGITAL_PIN_PMCE_92     0x00    /* P47  */
#define DIGITAL_PIN_PMCE_93     0x00    /* P110 */
#define DIGITAL_PIN_PMCE_94     0x00    /* P04  */
#define DIGITAL_PIN_PMCE_95     0x00    /* P07  */
#define DIGITAL_PIN_PMCE_96     0x20    /* P15  */
#define DIGITAL_PIN_PMCE_97     0x00    /* P43  */
#define DIGITAL_PIN_PMCE_98     0x00    /* P44  */
#define DIGITAL_PIN_PMCE_99     0x00    /* P95  */
#define DIGITAL_PIN_PMCE_100    0x00    /* P96  */
#define DIGITAL_PIN_PMCE_101    0x00    /* P84  */
#define DIGITAL_PIN_PMCE_102    0x00    /* P83  */
#define DIGITAL_PIN_PMCE_103    0x00    /* P115 */
#define DIGITAL_PIN_PMCE_104    0x00    /* P116 */
#define DIGITAL_PIN_PMCE_105    0x00    /* P117 */
#define DIGITAL_PIN_PMCE_106    0x00    /* P147 */
#define DIGITAL_PIN_PMCE_107    0x00    /* P100 */
#define DIGITAL_PIN_PMCE_108    0x00    /* P156 */
#define DIGITAL_PIN_PMCE_109    0x00    /* P155 */
#define DIGITAL_PIN_PMCE_110    0x00    /* P154 */
#define DIGITAL_PIN_PMCE_111    0x00    /* P153 */
#define DIGITAL_PIN_PMCE_112    0x00    /* P152 */
#define DIGITAL_PIN_PMCE_113    0x00    /* P151 */
#define DIGITAL_PIN_PMCE_114    0x00    /* P150 */
#define DIGITAL_PIN_PMCE_115    0x00    /* P27  */
#define DIGITAL_PIN_PMCE_116    0x00    /* P26  */
#define DIGITAL_PIN_PMCE_117    0x00    /* P25  */
#define DIGITAL_PIN_PMCE_118    0x00    /* P24  */


/* Define Digital Pin CCDE */
// only P63, 62,61,60,50,51,17,16 (Refer to manual)

#define DIGITAL_PIN_CCDE_0      0x00    /* P33  */
#define DIGITAL_PIN_CCDE_1      0x00    /* P34  */
#define DIGITAL_PIN_CCDE_2      0x00    /* P145 */
#define DIGITAL_PIN_CCDE_3      0x00    /* P106 */
#define DIGITAL_PIN_CCDE_4      0x00    /* P105 */
#define DIGITAL_PIN_CCDE_5      0x00    /* P104 */
#define DIGITAL_PIN_CCDE_6      0x00    /* P103 */
#define DIGITAL_PIN_CCDE_7      0x00    /* P46  */
#define DIGITAL_PIN_CCDE_8      0x00    /* P42  */
#define DIGITAL_PIN_CCDE_9      0x00    /* P31  */
#define DIGITAL_PIN_CCDE_10     0x00    /* P64  */
#define DIGITAL_PIN_CCDE_11     0x00    /* P65  */
#define DIGITAL_PIN_CCDE_12     0x00    /* P66  */
#define DIGITAL_PIN_CCDE_13     0x00    /* P67  */
#define DIGITAL_PIN_CCDE_14     0x00    /* P144 */
#define DIGITAL_PIN_CCDE_15     0x00    /* P143 */
#define DIGITAL_PIN_CCDE_16     0x00    /* P02  */
#define DIGITAL_PIN_CCDE_17     0x00    /* P03  */
#define DIGITAL_PIN_CCDE_18     0x00    /* P13  */
#define DIGITAL_PIN_CCDE_19     0x00    /* P14  */
#define DIGITAL_PIN_CCDE_20     0x20    /* P61  */
#define DIGITAL_PIN_CCDE_21     0x10    /* P60  */
#define DIGITAL_PIN_CCDE_22     0x00    /* P40  */
#define DIGITAL_PIN_CCDE_23     0x00    /* P80  */
#define DIGITAL_PIN_CCDE_24     0x00    /* P05  */
#define DIGITAL_PIN_CCDE_25     0x00    /* P81  */
#define DIGITAL_PIN_CCDE_26     0x00    /* P82  */
#define DIGITAL_PIN_CCDE_27     0x00    /* P85  */
#define DIGITAL_PIN_CCDE_28     0x00    /* P86  */
#define DIGITAL_PIN_CCDE_29     0x00    /* P87  */
#define DIGITAL_PIN_CCDE_30     0x00    /* P30  */
#define DIGITAL_PIN_CCDE_31     0x08    /* P50  */
#define DIGITAL_PIN_CCDE_32     0x04    /* P51  */
#define DIGITAL_PIN_CCDE_33     0x00    /* P52  */
#define DIGITAL_PIN_CCDE_34     0x00    /* P53  */
#define DIGITAL_PIN_CCDE_35     0x00    /* P54  */
#define DIGITAL_PIN_CCDE_36     0x00    /* P55  */
#define DIGITAL_PIN_CCDE_37     0x00    /* P56  */
#define DIGITAL_PIN_CCDE_38     0x00    /* P57  */
#define DIGITAL_PIN_CCDE_39     0x02    /* P17  */
#define DIGITAL_PIN_CCDE_40     0x00    /* P12  */
#define DIGITAL_PIN_CCDE_41     0x00    /* P11  */
#define DIGITAL_PIN_CCDE_42     0x00    /* P10  */
#define DIGITAL_PIN_CCDE_43     0x00    /* P90  */
#define DIGITAL_PIN_CCDE_44     0x00    /* P91  */
#define DIGITAL_PIN_CCDE_45     0x00    /* P92  */
#define DIGITAL_PIN_CCDE_46     0x00    /* P93  */
#define DIGITAL_PIN_CCDE_47     0x00    /* P94  */
#define DIGITAL_PIN_CCDE_48     0x00    /* P97  */
#define DIGITAL_PIN_CCDE_49     0x00    /* P112 */
#define DIGITAL_PIN_CCDE_50     0x00    /* P113 */
#define DIGITAL_PIN_CCDE_51     0x00    /* P114 */
#define DIGITAL_PIN_CCDE_52     0x00    /* P101 */
#define DIGITAL_PIN_CCDE_53     0x00    /* P111 */
#define DIGITAL_PIN_CCDE_54     0x00    /* P146 */
#define DIGITAL_PIN_CCDE_55     0x00    /* P23  */
#define DIGITAL_PIN_CCDE_56     0x00    /* P22  */
#define DIGITAL_PIN_CCDE_57     0x00    /* P21  */
#define DIGITAL_PIN_CCDE_58     0x00    /* P130 */
#define DIGITAL_PIN_CCDE_59     0x00    /* P102 */
#define DIGITAL_PIN_CCDE_60     0x00    /* P06  */
#define DIGITAL_PIN_CCDE_61     0x00    /* P137 */
#define DIGITAL_PIN_CCDE_62     0x00    /* P70  */
#define DIGITAL_PIN_CCDE_63     0x00    /* P71  */
#define DIGITAL_PIN_CCDE_64     0x00    /* P72  */
#define DIGITAL_PIN_CCDE_65     0x00    /* P73  */
#define DIGITAL_PIN_CCDE_66     0x00    /* P74  */
#define DIGITAL_PIN_CCDE_67     0x00    /* P75  */
#define DIGITAL_PIN_CCDE_68     0x00    /* P76  */
#define DIGITAL_PIN_CCDE_69     0x00    /* P77  */
#define DIGITAL_PIN_CCDE_70     0x00    /* P121 */
#define DIGITAL_PIN_CCDE_71     0x00    /* P122 */
#define DIGITAL_PIN_CCDE_72     0x00    /* P123 */
#define DIGITAL_PIN_CCDE_73     0x00    /* P124 */
#define DIGITAL_PIN_CCDE_74     0x00    /* P125 */
#define DIGITAL_PIN_CCDE_75     0x00    /* P126 */
#define DIGITAL_PIN_CCDE_76     0x00    /* P127 */
#define DIGITAL_PIN_CCDE_77     0x00    /* P41  */
#define DIGITAL_PIN_CCDE_78     0x00    /* P45  */
#define DIGITAL_PIN_CCDE_79     0x00    /* P32  */
#define DIGITAL_PIN_CCDE_80     0x00    /* P35  */
#define DIGITAL_PIN_CCDE_81     0x00    /* P36  */
#define DIGITAL_PIN_CCDE_82     0x00    /* P37  */
#define DIGITAL_PIN_CCDE_83     0x00    /* P120 */
#define DIGITAL_PIN_CCDE_84     0x00    /* P01  */
#define DIGITAL_PIN_CCDE_85     0x00    /* P141 */
#define DIGITAL_PIN_CCDE_86     0x00    /* P142 */
#define DIGITAL_PIN_CCDE_87     0x00    /* P140 */
#define DIGITAL_PIN_CCDE_88     0x00    /* P00  */
#define DIGITAL_PIN_CCDE_89     0x01    /* P16  */
#define DIGITAL_PIN_CCDE_90     0x40    /* P62  */
#define DIGITAL_PIN_CCDE_91     0x80    /* P63  */
#define DIGITAL_PIN_CCDE_92     0x00    /* P47  */
#define DIGITAL_PIN_CCDE_93     0x00    /* P110 */
#define DIGITAL_PIN_CCDE_94     0x00    /* P04  */
#define DIGITAL_PIN_CCDE_95     0x00    /* P07  */
#define DIGITAL_PIN_CCDE_96     0x00    /* P15  */
#define DIGITAL_PIN_CCDE_97     0x00    /* P43  */
#define DIGITAL_PIN_CCDE_98     0x00    /* P44  */
#define DIGITAL_PIN_CCDE_99     0x00    /* P95  */
#define DIGITAL_PIN_CCDE_100    0x00    /* P96  */
#define DIGITAL_PIN_CCDE_101    0x00    /* P84  */
#define DIGITAL_PIN_CCDE_102    0x00    /* P83  */
#define DIGITAL_PIN_CCDE_103    0x00    /* P115 */
#define DIGITAL_PIN_CCDE_104    0x00    /* P116 */
#define DIGITAL_PIN_CCDE_105    0x00    /* P117 */
#define DIGITAL_PIN_CCDE_106    0x00    /* P147 */
#define DIGITAL_PIN_CCDE_107    0x00    /* P100 */
#define DIGITAL_PIN_CCDE_108    0x00    /* P156 */
#define DIGITAL_PIN_CCDE_109    0x00    /* P155 */
#define DIGITAL_PIN_CCDE_110    0x00    /* P154 */
#define DIGITAL_PIN_CCDE_111    0x00    /* P153 */
#define DIGITAL_PIN_CCDE_112    0x00    /* P152 */
#define DIGITAL_PIN_CCDE_113    0x00    /* P151 */
#define DIGITAL_PIN_CCDE_114    0x00    /* P150 */
#define DIGITAL_PIN_CCDE_115    0x00    /* P27  */
#define DIGITAL_PIN_CCDE_116    0x00    /* P26  */
#define DIGITAL_PIN_CCDE_117    0x00    /* P25  */
#define DIGITAL_PIN_CCDE_118    0x00    /* P24  */
/* Define Digital Pin PDIDIS */
// PDIDIS : exist only part of PDIDIS 0, 1, 3, 4, 5, 7, 8, 9, 12, 13, 14 (refer manual)
// Px0 -> 001, Px1 -> 0x02, Px2 -> 0x04, Px3 -> 0x08, Px4 -> 0x10, Px5 -> 0x20, Px6 -> 0x40, Px7 -> 0x80

#define DIGITAL_PIN_PDIDIS_0        0x00    /* P33  */
#define DIGITAL_PIN_PDIDIS_1        0x10    /* P34  */
#define DIGITAL_PIN_PDIDIS_2        0x00    /* P145 */
#define DIGITAL_PIN_PDIDIS_3        0x00    /* P106 */
#define DIGITAL_PIN_PDIDIS_4        0x00    /* P105 */
#define DIGITAL_PIN_PDIDIS_5        0x00    /* P104 */
#define DIGITAL_PIN_PDIDIS_6        0x00    /* P103 */
#define DIGITAL_PIN_PDIDIS_7        0x00    /* P46  */
#define DIGITAL_PIN_PDIDIS_8        0x04    /* P42  */
#define DIGITAL_PIN_PDIDIS_9        0x00    /* P31  */
#define DIGITAL_PIN_PDIDIS_10       0x00    /* P64  */
#define DIGITAL_PIN_PDIDIS_11       0x00    /* P65  */
#define DIGITAL_PIN_PDIDIS_12       0x00    /* P66  */
#define DIGITAL_PIN_PDIDIS_13       0x00    /* P67  */
#define DIGITAL_PIN_PDIDIS_14       0x10    /* P144 */
#define DIGITAL_PIN_PDIDIS_15       0x08    /* P143 */
#define DIGITAL_PIN_PDIDIS_16       0x04    /* P02  */
#define DIGITAL_PIN_PDIDIS_17       0x08    /* P03  */
#define DIGITAL_PIN_PDIDIS_18       0x08    /* P13  */
#define DIGITAL_PIN_PDIDIS_19       0x10    /* P14  */
#define DIGITAL_PIN_PDIDIS_20       0x00    /* P61  */
#define DIGITAL_PIN_PDIDIS_21       0x00    /* P60  */
#define DIGITAL_PIN_PDIDIS_22       0x00    /* P40  */
#define DIGITAL_PIN_PDIDIS_23       0x01    /* P80  */
#define DIGITAL_PIN_PDIDIS_24       0x00    /* P05  */
#define DIGITAL_PIN_PDIDIS_25       0x02    /* P81  */
#define DIGITAL_PIN_PDIDIS_26       0x04    /* P82  */
#define DIGITAL_PIN_PDIDIS_27       0x00    /* P85  */
#define DIGITAL_PIN_PDIDIS_28       0x00    /* P86  */
#define DIGITAL_PIN_PDIDIS_29       0x00    /* P87  */
#define DIGITAL_PIN_PDIDIS_30       0x00    /* P30  */
#define DIGITAL_PIN_PDIDIS_31       0x01    /* P50  */
#define DIGITAL_PIN_PDIDIS_32       0x00    /* P51  */
#define DIGITAL_PIN_PDIDIS_33       0x04    /* P52  */
#define DIGITAL_PIN_PDIDIS_34       0x08    /* P53  */
#define DIGITAL_PIN_PDIDIS_35       0x10    /* P54  */
#define DIGITAL_PIN_PDIDIS_36       0x20    /* P55  */
#define DIGITAL_PIN_PDIDIS_37       0x00    /* P56  */
#define DIGITAL_PIN_PDIDIS_38       0x00    /* P57  */
#define DIGITAL_PIN_PDIDIS_39       0x80    /* P17  */
#define DIGITAL_PIN_PDIDIS_40       0x04    /* P12  */
#define DIGITAL_PIN_PDIDIS_41       0x02    /* P11  */
#define DIGITAL_PIN_PDIDIS_42       0x01    /* P10  */
#define DIGITAL_PIN_PDIDIS_43       0x00    /* P90  */
#define DIGITAL_PIN_PDIDIS_44       0x00    /* P91  */
#define DIGITAL_PIN_PDIDIS_45       0x00    /* P92  */
#define DIGITAL_PIN_PDIDIS_46       0x00    /* P93  */
#define DIGITAL_PIN_PDIDIS_47       0x00    /* P94  */
#define DIGITAL_PIN_PDIDIS_48       0x00    /* P97  */
#define DIGITAL_PIN_PDIDIS_49       0x00    /* P112 */
#define DIGITAL_PIN_PDIDIS_50       0x00    /* P113 */
#define DIGITAL_PIN_PDIDIS_51       0x00    /* P114 */
#define DIGITAL_PIN_PDIDIS_52       0x00    /* P101 */
#define DIGITAL_PIN_PDIDIS_53       0x00    /* P111 */
#define DIGITAL_PIN_PDIDIS_54       0x00    /* P146 */
#define DIGITAL_PIN_PDIDIS_55       0x00    /* P23  */
#define DIGITAL_PIN_PDIDIS_56       0x00    /* P22  */
#define DIGITAL_PIN_PDIDIS_57       0x00    /* P21  */
#define DIGITAL_PIN_PDIDIS_58       0x00    /* P130 */
#define DIGITAL_PIN_PDIDIS_59       0x00    /* P102 */
#define DIGITAL_PIN_PDIDIS_60       0x00    /* P06  */
#define DIGITAL_PIN_PDIDIS_61       0x80    /* P137 */
#define DIGITAL_PIN_PDIDIS_62       0x00    /* P70  */
#define DIGITAL_PIN_PDIDIS_63       0x02    /* P71  */
#define DIGITAL_PIN_PDIDIS_64       0x04    /* P72  */
#define DIGITAL_PIN_PDIDIS_65       0x00    /* P73  */
#define DIGITAL_PIN_PDIDIS_66       0x10    /* P74  */
#define DIGITAL_PIN_PDIDIS_67       0x00    /* P75  */
#define DIGITAL_PIN_PDIDIS_68       0x00    /* P76  */
#define DIGITAL_PIN_PDIDIS_69       0x00    /* P77  */
#define DIGITAL_PIN_PDIDIS_70       0x00    /* P121 */
#define DIGITAL_PIN_PDIDIS_71       0x00    /* P122 */
#define DIGITAL_PIN_PDIDIS_72       0x00    /* P123 */
#define DIGITAL_PIN_PDIDIS_73       0x00    /* P124 */
#define DIGITAL_PIN_PDIDIS_74       0x00    /* P125 */
#define DIGITAL_PIN_PDIDIS_75       0x00    /* P126 */
#define DIGITAL_PIN_PDIDIS_76       0x00    /* P127 */
#define DIGITAL_PIN_PDIDIS_77       0x00    /* P41  */
#define DIGITAL_PIN_PDIDIS_78       0x20    /* P45  */
#define DIGITAL_PIN_PDIDIS_79       0x00    /* P32  */
#define DIGITAL_PIN_PDIDIS_80       0x00    /* P35  */
#define DIGITAL_PIN_PDIDIS_81       0x00    /* P36  */
#define DIGITAL_PIN_PDIDIS_82       0x00    /* P37  */
#define DIGITAL_PIN_PDIDIS_83       0x01    /* P120 */
#define DIGITAL_PIN_PDIDIS_84       0x00    /* P01  */

#define DIGITAL_PIN_PDIDIS_85       0x00    /* P141 */
#define DIGITAL_PIN_PDIDIS_86       0x04    /* P142 */
#define DIGITAL_PIN_PDIDIS_87       0x00    /* P140 */
#define DIGITAL_PIN_PDIDIS_88       0x01    /* P00  */
#define DIGITAL_PIN_PDIDIS_89       0x00    /* P16  */
#define DIGITAL_PIN_PDIDIS_90       0x00    /* P62  */
#define DIGITAL_PIN_PDIDIS_91       0x00    /* P63  */
#define DIGITAL_PIN_PDIDIS_92       0x00    /* P47  */
#define DIGITAL_PIN_PDIDIS_93       0x00    /* P110 */
#define DIGITAL_PIN_PDIDIS_94       0x10    /* P04  */
#define DIGITAL_PIN_PDIDIS_95       0x00    /* P07  */
#define DIGITAL_PIN_PDIDIS_96       0x20    /* P15  */
#define DIGITAL_PIN_PDIDIS_97       0x08    /* P43  */
#define DIGITAL_PIN_PDIDIS_98       0x10    /* P44  */
#define DIGITAL_PIN_PDIDIS_99       0x00    /* P95  */
#define DIGITAL_PIN_PDIDIS_100      0x40    /* P96  */
#define DIGITAL_PIN_PDIDIS_101      0x00    /* P84  */
#define DIGITAL_PIN_PDIDIS_102      0x08    /* P83  */
#define DIGITAL_PIN_PDIDIS_103      0x00    /* P115 */
#define DIGITAL_PIN_PDIDIS_104      0x00    /* P116 */
#define DIGITAL_PIN_PDIDIS_105      0x00    /* P117 */
#define DIGITAL_PIN_PDIDIS_106      0x00    /* P147 */
#define DIGITAL_PIN_PDIDIS_107      0x00    /* P100 */
#define DIGITAL_PIN_PDIDIS_108      0x00    /* P156 */
#define DIGITAL_PIN_PDIDIS_109      0x00    /* P155 */
#define DIGITAL_PIN_PDIDIS_110      0x00    /* P154 */
#define DIGITAL_PIN_PDIDIS_111      0x00    /* P153 */
#define DIGITAL_PIN_PDIDIS_112      0x00    /* P152 */
#define DIGITAL_PIN_PDIDIS_113      0x00    /* P151 */
#define DIGITAL_PIN_PDIDIS_114      0x00    /* P150 */
#define DIGITAL_PIN_PDIDIS_115      0x00    /* P27  */
#define DIGITAL_PIN_PDIDIS_116      0x00    /* P26  */
#define DIGITAL_PIN_PDIDIS_117      0x00    /* P25  */
#define DIGITAL_PIN_PDIDIS_118      0x00    /* P24  */


/* Define Digital Pin PM */
// except PM107, 123,124,157
// Px0 -> 001, Px1 -> 0x02, Px2 -> 0x04, Px3 -> 0x08, Px4 -> 0x10, Px5 -> 0x20, Px6 -> 0x40, Px7 -> 0x80

#define DIGITAL_PIN_PM_0        0x08    /* P33  */
#define DIGITAL_PIN_PM_1        0x10    /* P34  */
#define DIGITAL_PIN_PM_2        0x20    /* P145 */
#define DIGITAL_PIN_PM_3        0x40    /* P106 */
#define DIGITAL_PIN_PM_4        0x20    /* P105 */
#define DIGITAL_PIN_PM_5        0x10    /* P104 */
#define DIGITAL_PIN_PM_6        0x08    /* P103 */
#define DIGITAL_PIN_PM_7        0x40    /* P46  */
#define DIGITAL_PIN_PM_8        0x04    /* P42  */
#define DIGITAL_PIN_PM_9        0x02    /* P31  */
#define DIGITAL_PIN_PM_10       0x10    /* P64  */
#define DIGITAL_PIN_PM_11       0x20    /* P65  */
#define DIGITAL_PIN_PM_12       0x40    /* P66  */
#define DIGITAL_PIN_PM_13       0x80    /* P67  */
#define DIGITAL_PIN_PM_14       0x10    /* P144 */
#define DIGITAL_PIN_PM_15       0x08    /* P143 */
#define DIGITAL_PIN_PM_16       0x04    /* P02  */
#define DIGITAL_PIN_PM_17       0x08    /* P03  */
#define DIGITAL_PIN_PM_18       0x08    /* P13  */
#define DIGITAL_PIN_PM_19       0x10    /* P14  */
#define DIGITAL_PIN_PM_20       0x02    /* P61  */
#define DIGITAL_PIN_PM_21       0x01    /* P60  */
#define DIGITAL_PIN_PM_22       0x01    /* P40  */
#define DIGITAL_PIN_PM_23       0x01    /* P80  */
#define DIGITAL_PIN_PM_24       0x20    /* P05  */
#define DIGITAL_PIN_PM_25       0x02    /* P81  */
#define DIGITAL_PIN_PM_26       0x04    /* P82  */
#define DIGITAL_PIN_PM_27       0x20    /* P85  */
#define DIGITAL_PIN_PM_28       0x40    /* P86  */
#define DIGITAL_PIN_PM_29       0x80    /* P87  */
#define DIGITAL_PIN_PM_30       0x01    /* P30  */
#define DIGITAL_PIN_PM_31       0x01    /* P50  */
#define DIGITAL_PIN_PM_32       0x02    /* P51  */
#define DIGITAL_PIN_PM_33       0x04    /* P52  */
#define DIGITAL_PIN_PM_34       0x08    /* P53  */
#define DIGITAL_PIN_PM_35       0x10    /* P54  */
#define DIGITAL_PIN_PM_36       0x20    /* P55  */
#define DIGITAL_PIN_PM_37       0x40    /* P56  */
#define DIGITAL_PIN_PM_38       0x80    /* P57  */
#define DIGITAL_PIN_PM_39       0x80    /* P17  */
#define DIGITAL_PIN_PM_40       0x04    /* P12  */
#define DIGITAL_PIN_PM_41       0x02    /* P11  */
#define DIGITAL_PIN_PM_42       0x01    /* P10  */
#define DIGITAL_PIN_PM_43       0x01    /* P90  */
#define DIGITAL_PIN_PM_44       0x02    /* P91  */
#define DIGITAL_PIN_PM_45       0x04    /* P92  */
#define DIGITAL_PIN_PM_46       0x08    /* P93  */
#define DIGITAL_PIN_PM_47       0x10    /* P94  */
#define DIGITAL_PIN_PM_48       0x80    /* P97  */
#define DIGITAL_PIN_PM_49       0x04    /* P112 */
#define DIGITAL_PIN_PM_50       0x08    /* P113 */
#define DIGITAL_PIN_PM_51       0x10    /* P114 */
#define DIGITAL_PIN_PM_52       0x02    /* P101 */
#define DIGITAL_PIN_PM_53       0x02    /* P111 */
#define DIGITAL_PIN_PM_54       0x40    /* P146 */
#define DIGITAL_PIN_PM_55       0x08    /* P23  */
#define DIGITAL_PIN_PM_56       0x04    /* P22  */
#define DIGITAL_PIN_PM_57       0x02    /* P21  */
#define DIGITAL_PIN_PM_58       0x00    /* P130 */
#define DIGITAL_PIN_PM_59       0x04    /* P102 */
#define DIGITAL_PIN_PM_60       0x40    /* P06  */
#define DIGITAL_PIN_PM_61       0x00    /* P137 */
#define DIGITAL_PIN_PM_62       0x01    /* P70  */
#define DIGITAL_PIN_PM_63       0x02    /* P71  */
#define DIGITAL_PIN_PM_64       0x04    /* P72  */
#define DIGITAL_PIN_PM_65       0x08    /* P73  */
#define DIGITAL_PIN_PM_66       0x10    /* P74  */
#define DIGITAL_PIN_PM_67       0x20    /* P75  */
#define DIGITAL_PIN_PM_68       0x40    /* P76  */
#define DIGITAL_PIN_PM_69       0x80    /* P77  */
#define DIGITAL_PIN_PM_70       0x02    /* P121 */
#define DIGITAL_PIN_PM_71       0x04    /* P122 */
#define DIGITAL_PIN_PM_72       0x00    /* P123 */
#define DIGITAL_PIN_PM_73       0x00    /* P124 */
#define DIGITAL_PIN_PM_74       0x20    /* P125 */
#define DIGITAL_PIN_PM_75       0x40    /* P126 */
#define DIGITAL_PIN_PM_76       0x80    /* P127 */
#define DIGITAL_PIN_PM_77       0x02    /* P41  */
#define DIGITAL_PIN_PM_78       0x20    /* P45  */
#define DIGITAL_PIN_PM_79       0x04    /* P32  */
#define DIGITAL_PIN_PM_80       0x20    /* P35  */
#define DIGITAL_PIN_PM_81       0x40    /* P36  */
#define DIGITAL_PIN_PM_82       0x80    /* P37  */
#define DIGITAL_PIN_PM_83       0x01    /* P120 */
#define DIGITAL_PIN_PM_84       0x02    /* P01  */

#define DIGITAL_PIN_PM_85       0x02    /* P141 */
#define DIGITAL_PIN_PM_86       0x04    /* P142 */
#define DIGITAL_PIN_PM_87       0x01    /* P140 */
#define DIGITAL_PIN_PM_88       0x01    /* P00  */
#define DIGITAL_PIN_PM_89       0x40    /* P16  */
#define DIGITAL_PIN_PM_90       0x04    /* P62  */
#define DIGITAL_PIN_PM_91       0x08    /* P63  */
#define DIGITAL_PIN_PM_92       0x80    /* P47  */
#define DIGITAL_PIN_PM_93       0x01    /* P110 */
#define DIGITAL_PIN_PM_94       0x10    /* P04  */
#define DIGITAL_PIN_PM_95       0x80    /* P07  */
#define DIGITAL_PIN_PM_96       0x20    /* P15  */
#define DIGITAL_PIN_PM_97       0x08    /* P43  */
#define DIGITAL_PIN_PM_98       0x10    /* P44  */
#define DIGITAL_PIN_PM_99       0x20    /* P95  */
#define DIGITAL_PIN_PM_100      0x40    /* P96  */
#define DIGITAL_PIN_PM_101      0x10    /* P84  */
#define DIGITAL_PIN_PM_102      0x08    /* P83  */
#define DIGITAL_PIN_PM_103      0x20    /* P115 */
#define DIGITAL_PIN_PM_104      0x40    /* P116 */
#define DIGITAL_PIN_PM_105      0x80    /* P117 */
#define DIGITAL_PIN_PM_106      0x80    /* P147 */
#define DIGITAL_PIN_PM_107      0x01    /* P100 */
#define DIGITAL_PIN_PM_108      0x40    /* P156 */
#define DIGITAL_PIN_PM_109      0x20    /* P155 */
#define DIGITAL_PIN_PM_110      0x10    /* P154 */
#define DIGITAL_PIN_PM_111      0x08    /* P153 */
#define DIGITAL_PIN_PM_112      0x04    /* P152 */
#define DIGITAL_PIN_PM_113      0x02    /* P151 */
#define DIGITAL_PIN_PM_114      0x01    /* P150 */
#define DIGITAL_PIN_PM_115      0x80    /* P27  */
#define DIGITAL_PIN_PM_116      0x40    /* P26  */
#define DIGITAL_PIN_PM_117      0x20    /* P25  */
#define DIGITAL_PIN_PM_118      0x10    /* P24  */



/* Define Digital Pin PU */
#define DIGITAL_PIN_PU_0        0x08    /* P33  */
#define DIGITAL_PIN_PU_1        0x10    /* P34  */
#define DIGITAL_PIN_PU_2        0x20    /* P145 */
#define DIGITAL_PIN_PU_3        0x40    /* P106 */
#define DIGITAL_PIN_PU_4        0x20    /* P105 */
#define DIGITAL_PIN_PU_5        0x10    /* P104 */
#define DIGITAL_PIN_PU_6        0x08    /* P103 */
#define DIGITAL_PIN_PU_7        0x40    /* P46  */
#define DIGITAL_PIN_PU_8        0x04    /* P42  */
#define DIGITAL_PIN_PU_9        0x02    /* P31  */
#define DIGITAL_PIN_PU_10       0x10    /* P64  */
#define DIGITAL_PIN_PU_11       0x20    /* P65  */
#define DIGITAL_PIN_PU_12       0x40    /* P66  */
#define DIGITAL_PIN_PU_13       0x80    /* P67  */
#define DIGITAL_PIN_PU_14       0x10    /* P144 */
#define DIGITAL_PIN_PU_15       0x08    /* P143 */
#define DIGITAL_PIN_PU_16       0x04    /* P02  */
#define DIGITAL_PIN_PU_17       0x08    /* P03  */
#define DIGITAL_PIN_PU_18       0x08    /* P13  */
#define DIGITAL_PIN_PU_19       0x10    /* P14  */
#define DIGITAL_PIN_PU_20       0x00    /* P61  */
#define DIGITAL_PIN_PU_21       0x00    /* P60  */
#define DIGITAL_PIN_PU_22       0x01    /* P40  */
#define DIGITAL_PIN_PU_23       0x01    /* P80  */
#define DIGITAL_PIN_PU_24       0x20    /* P05  */
#define DIGITAL_PIN_PU_25       0x02    /* P81  */
#define DIGITAL_PIN_PU_26       0x04    /* P82  */
#define DIGITAL_PIN_PU_27       0x20    /* P85  */
#define DIGITAL_PIN_PU_28       0x40    /* P86  */
#define DIGITAL_PIN_PU_29       0x80    /* P87  */
#define DIGITAL_PIN_PU_30       0x01    /* P30  */
#define DIGITAL_PIN_PU_31       0x01    /* P50  */
#define DIGITAL_PIN_PU_32       0x02    /* P51  */
#define DIGITAL_PIN_PU_33       0x04    /* P52  */
#define DIGITAL_PIN_PU_34       0x08    /* P53  */
#define DIGITAL_PIN_PU_35       0x10    /* P54  */
#define DIGITAL_PIN_PU_36       0x20    /* P55  */
#define DIGITAL_PIN_PU_37       0x40    /* P56  */
#define DIGITAL_PIN_PU_38       0x80    /* P57  */
#define DIGITAL_PIN_PU_39       0x80    /* P17  */
#define DIGITAL_PIN_PU_40       0x04    /* P12  */
#define DIGITAL_PIN_PU_41       0x02    /* P11  */
#define DIGITAL_PIN_PU_42       0x01    /* P10  */
#define DIGITAL_PIN_PU_43       0x01    /* P90  */
#define DIGITAL_PIN_PU_44       0x02    /* P91  */
#define DIGITAL_PIN_PU_45       0x04    /* P92  */
#define DIGITAL_PIN_PU_46       0x08    /* P93  */
#define DIGITAL_PIN_PU_47       0x10    /* P94  */
#define DIGITAL_PIN_PU_48       0x80    /* P97  */
#define DIGITAL_PIN_PU_49       0x04    /* P112 */
#define DIGITAL_PIN_PU_50       0x08    /* P113 */
#define DIGITAL_PIN_PU_51       0x10    /* P114 */
#define DIGITAL_PIN_PU_52       0x02    /* P101 */
#define DIGITAL_PIN_PU_53       0x02    /* P111 */
#define DIGITAL_PIN_PU_54       0x40    /* P146 */
#define DIGITAL_PIN_PU_55       0x00    /* P23  */
#define DIGITAL_PIN_PU_56       0x00    /* P22  */
#define DIGITAL_PIN_PU_57       0x00    /* P21  */
#define DIGITAL_PIN_PU_58       0x00    /* P130 */
#define DIGITAL_PIN_PU_59       0x04    /* P102 */
#define DIGITAL_PIN_PU_60       0x40    /* P06  */
#define DIGITAL_PIN_PU_61       0x00    /* P137 */
#define DIGITAL_PIN_PU_62       0x01    /* P70  */
#define DIGITAL_PIN_PU_63       0x02    /* P71  */
#define DIGITAL_PIN_PU_64       0x04    /* P72  */
#define DIGITAL_PIN_PU_65       0x08    /* P73  */
#define DIGITAL_PIN_PU_66       0x10    /* P74  */
#define DIGITAL_PIN_PU_67       0x20    /* P75  */
#define DIGITAL_PIN_PU_68       0x40    /* P76  */
#define DIGITAL_PIN_PU_69       0x80    /* P77  */
#define DIGITAL_PIN_PU_70       0x02    /* P121 */
#define DIGITAL_PIN_PU_71       0x04    /* P122 */
#define DIGITAL_PIN_PU_72       0x00    /* P123 */
#define DIGITAL_PIN_PU_73       0x00    /* P124 */
#define DIGITAL_PIN_PU_74       0x20    /* P125 */
#define DIGITAL_PIN_PU_75       0x40    /* P126 */
#define DIGITAL_PIN_PU_76       0x80    /* P127 */
#define DIGITAL_PIN_PU_77       0x02    /* P41  */
#define DIGITAL_PIN_PU_78       0x20    /* P45  */
#define DIGITAL_PIN_PU_79       0x04    /* P32  */
#define DIGITAL_PIN_PU_80       0x20    /* P35  */
#define DIGITAL_PIN_PU_81       0x40    /* P36  */
#define DIGITAL_PIN_PU_82       0x80    /* P37  */
#define DIGITAL_PIN_PU_83       0x01    /* P120 */
#define DIGITAL_PIN_PU_84       0x02    /* P01  */

#define DIGITAL_PIN_PU_85       0x02    /* P141 */
#define DIGITAL_PIN_PU_86       0x04    /* P142 */
#define DIGITAL_PIN_PU_87       0x01    /* P140 */
#define DIGITAL_PIN_PU_88       0x01    /* P00  */
#define DIGITAL_PIN_PU_89       0x40    /* P16  */
#define DIGITAL_PIN_PU_90       0x00    /* P62  */
#define DIGITAL_PIN_PU_91       0x00    /* P63  */
#define DIGITAL_PIN_PU_92       0x80    /* P47  */
#define DIGITAL_PIN_PU_93       0x01    /* P110 */
#define DIGITAL_PIN_PU_94       0x10    /* P04  */
#define DIGITAL_PIN_PU_95       0x80    /* P07  */
#define DIGITAL_PIN_PU_96       0x20    /* P15  */
#define DIGITAL_PIN_PU_97       0x08    /* P43  */
#define DIGITAL_PIN_PU_98       0x10    /* P44  */
#define DIGITAL_PIN_PU_99       0x20    /* P95  */
#define DIGITAL_PIN_PU_100      0x40    /* P96  */
#define DIGITAL_PIN_PU_101      0x10    /* P84  */
#define DIGITAL_PIN_PU_102      0x08    /* P83  */
#define DIGITAL_PIN_PU_103      0x20    /* P115 */
#define DIGITAL_PIN_PU_104      0x40    /* P116 */
#define DIGITAL_PIN_PU_105      0x80    /* P117 */
#define DIGITAL_PIN_PU_106      0x80    /* P147 */
#define DIGITAL_PIN_PU_107      0x01    /* P100 */
#define DIGITAL_PIN_PU_108      0x00    /* P156 */
#define DIGITAL_PIN_PU_109      0x00    /* P155 */
#define DIGITAL_PIN_PU_110      0x00    /* P154 */
#define DIGITAL_PIN_PU_111      0x00    /* P153 */
#define DIGITAL_PIN_PU_112      0x00    /* P152 */
#define DIGITAL_PIN_PU_113      0x00    /* P151 */
#define DIGITAL_PIN_PU_114      0x00    /* P150 */
#define DIGITAL_PIN_PU_115      0x00    /* P27  */
#define DIGITAL_PIN_PU_116      0x00    /* P26  */
#define DIGITAL_PIN_PU_117      0x00    /* P25  */
#define DIGITAL_PIN_PU_118      0x00    /* P24  */



/* Define Digital Pin PIM */
// only part of PIM0,1,3,4,5,7,8,14

#define DIGITAL_PIN_PIM_0       0x08    /* P33  */
#define DIGITAL_PIN_PIM_1       0x00    /* P34  */
#define DIGITAL_PIN_PIM_2       0x00    /* P145 */
#define DIGITAL_PIN_PIM_3       0x00    /* P106 */
#define DIGITAL_PIN_PIM_4       0x00    /* P105 */
#define DIGITAL_PIN_PIM_5       0x00    /* P104 */
#define DIGITAL_PIN_PIM_6       0x00    /* P103 */
#define DIGITAL_PIN_PIM_7       0x00    /* P46  */
#define DIGITAL_PIN_PIM_8       0x00    /* P42  */
#define DIGITAL_PIN_PIM_9       0x00    /* P31  */
#define DIGITAL_PIN_PIM_10      0x00    /* P64  */
#define DIGITAL_PIN_PIM_11      0x00    /* P65  */
#define DIGITAL_PIN_PIM_12      0x00    /* P66  */
#define DIGITAL_PIN_PIM_13      0x00    /* P67  */
#define DIGITAL_PIN_PIM_14      0x00    /* P144 */
#define DIGITAL_PIN_PIM_15      0x08    /* P143 */
#define DIGITAL_PIN_PIM_16      0x00    /* P02  */
#define DIGITAL_PIN_PIM_17      0x08    /* P03  */
#define DIGITAL_PIN_PIM_18      0x08    /* P13  */
#define DIGITAL_PIN_PIM_19      0x10    /* P14  */
#define DIGITAL_PIN_PIM_20      0x00    /* P61  */
#define DIGITAL_PIN_PIM_21      0x00    /* P60  */
#define DIGITAL_PIN_PIM_22      0x00    /* P40  */
#define DIGITAL_PIN_PIM_23      0x01    /* P80  */
#define DIGITAL_PIN_PIM_24      0x00    /* P05  */
#define DIGITAL_PIN_PIM_25      0x02    /* P81  */
#define DIGITAL_PIN_PIM_26      0x00    /* P82  */
#define DIGITAL_PIN_PIM_27      0x00    /* P85  */
#define DIGITAL_PIN_PIM_28      0x00    /* P86  */
#define DIGITAL_PIN_PIM_29      0x00    /* P87  */
#define DIGITAL_PIN_PIM_30      0x00    /* P30  */
#define DIGITAL_PIN_PIM_31      0x00    /* P50  */
#define DIGITAL_PIN_PIM_32      0x00    /* P51  */
#define DIGITAL_PIN_PIM_33      0x00    /* P52  */
#define DIGITAL_PIN_PIM_34      0x08    /* P53  */
#define DIGITAL_PIN_PIM_35      0x10    /* P54  */
#define DIGITAL_PIN_PIM_36      0x20    /* P55  */
#define DIGITAL_PIN_PIM_37      0x00    /* P56  */
#define DIGITAL_PIN_PIM_38      0x00    /* P57  */
#define DIGITAL_PIN_PIM_39      0x80    /* P17  */
#define DIGITAL_PIN_PIM_40      0x00    /* P12  */
#define DIGITAL_PIN_PIM_41      0x02    /* P11  */
#define DIGITAL_PIN_PIM_42      0x01    /* P10  */
#define DIGITAL_PIN_PIM_43      0x00    /* P90  */
#define DIGITAL_PIN_PIM_44      0x00    /* P91  */
#define DIGITAL_PIN_PIM_45      0x00    /* P92  */
#define DIGITAL_PIN_PIM_46      0x00    /* P93  */
#define DIGITAL_PIN_PIM_47      0x00    /* P94  */
#define DIGITAL_PIN_PIM_48      0x00    /* P97  */
#define DIGITAL_PIN_PIM_49      0x00    /* P112 */
#define DIGITAL_PIN_PIM_50      0x00    /* P113 */
#define DIGITAL_PIN_PIM_51      0x00    /* P114 */
#define DIGITAL_PIN_PIM_52      0x00    /* P101 */
#define DIGITAL_PIN_PIM_53      0x00    /* P111 */
#define DIGITAL_PIN_PIM_54      0x00    /* P146 */
#define DIGITAL_PIN_PIM_55      0x00    /* P23  */
#define DIGITAL_PIN_PIM_56      0x00    /* P22  */
#define DIGITAL_PIN_PIM_57      0x00    /* P21  */
#define DIGITAL_PIN_PIM_58      0x00    /* P130 */
#define DIGITAL_PIN_PIM_59      0x00    /* P102 */
#define DIGITAL_PIN_PIM_60      0x00    /* P06  */
#define DIGITAL_PIN_PIM_61      0x00    /* P137 */
#define DIGITAL_PIN_PIM_62      0x00    /* P70  */
#define DIGITAL_PIN_PIM_63      0x02    /* P71  */
#define DIGITAL_PIN_PIM_64      0x00    /* P72  */
#define DIGITAL_PIN_PIM_65      0x00    /* P73  */
#define DIGITAL_PIN_PIM_66      0x00    /* P74  */
#define DIGITAL_PIN_PIM_67      0x00    /* P75  */
#define DIGITAL_PIN_PIM_68      0x00    /* P76  */
#define DIGITAL_PIN_PIM_69      0x00    /* P77  */
#define DIGITAL_PIN_PIM_70      0x00    /* P121 */
#define DIGITAL_PIN_PIM_71      0x00    /* P122 */
#define DIGITAL_PIN_PIM_72      0x00    /* P123 */
#define DIGITAL_PIN_PIM_73      0x00    /* P124 */
#define DIGITAL_PIN_PIM_74      0x00    /* P125 */
#define DIGITAL_PIN_PIM_75      0x00    /* P126 */
#define DIGITAL_PIN_PIM_76      0x00    /* P127 */
#define DIGITAL_PIN_PIM_77      0x02    /* P41  */
#define DIGITAL_PIN_PIM_78      0x00    /* P45  */
#define DIGITAL_PIN_PIM_79      0x00    /* P32  */
#define DIGITAL_PIN_PIM_80      0x00    /* P35  */
#define DIGITAL_PIN_PIM_81      0x00    /* P36  */
#define DIGITAL_PIN_PIM_82      0x00    /* P37  */
#define DIGITAL_PIN_PIM_83      0x00    /* P120 */
#define DIGITAL_PIN_PIM_84      0x02    /* P01  */

#define DIGITAL_PIN_PIM_85      0x00    /* P141 */
#define DIGITAL_PIN_PIM_86      0x04    /* P142 */
#define DIGITAL_PIN_PIM_87      0x00    /* P140 */
#define DIGITAL_PIN_PIM_88      0x00    /* P00  */
#define DIGITAL_PIN_PIM_89      0x40    /* P16  */
#define DIGITAL_PIN_PIM_90      0x00    /* P62  */
#define DIGITAL_PIN_PIM_91      0x00    /* P63  */
#define DIGITAL_PIN_PIM_92      0x00    /* P47  */
#define DIGITAL_PIN_PIM_93      0x00    /* P110 */
#define DIGITAL_PIN_PIM_94      0x10    /* P04  */
#define DIGITAL_PIN_PIM_95      0x00    /* P07  */
#define DIGITAL_PIN_PIM_96      0x20    /* P15  */
#define DIGITAL_PIN_PIM_97      0x08    /* P43  */
#define DIGITAL_PIN_PIM_98      0x10    /* P44  */
#define DIGITAL_PIN_PIM_99      0x00    /* P95  */
#define DIGITAL_PIN_PIM_100     0x00    /* P96  */
#define DIGITAL_PIN_PIM_101     0x10    /* P84  */
#define DIGITAL_PIN_PIM_102     0x00    /* P83  */
#define DIGITAL_PIN_PIM_103     0x00    /* P115 */
#define DIGITAL_PIN_PIM_104     0x00    /* P116 */
#define DIGITAL_PIN_PIM_105     0x00    /* P117 */
#define DIGITAL_PIN_PIM_106     0x00    /* P147 */
#define DIGITAL_PIN_PIM_107     0x00    /* P100 */
#define DIGITAL_PIN_PIM_108     0x00    /* P156 */
#define DIGITAL_PIN_PIM_109     0x00    /* P155 */
#define DIGITAL_PIN_PIM_110     0x00    /* P154 */
#define DIGITAL_PIN_PIM_111     0x00    /* P153 */
#define DIGITAL_PIN_PIM_112     0x00    /* P152 */
#define DIGITAL_PIN_PIM_113     0x00    /* P151 */
#define DIGITAL_PIN_PIM_114     0x00    /* P150 */
#define DIGITAL_PIN_PIM_115     0x00    /* P27  */
#define DIGITAL_PIN_PIM_116     0x00    /* P26  */
#define DIGITAL_PIN_PIM_117     0x00    /* P25  */
#define DIGITAL_PIN_PIM_118     0x00    /* P24  */


/* Define Digital Pin POM */

#define DIGITAL_PIN_POM_0       0x00    /* P33  */
#define DIGITAL_PIN_POM_1       0x10    /* P34  */
#define DIGITAL_PIN_POM_2       0x00    /* P145 */
#define DIGITAL_PIN_POM_3       0x00    /* P106 */
#define DIGITAL_PIN_POM_4       0x00    /* P105 */
#define DIGITAL_PIN_POM_5       0x00    /* P104 */
#define DIGITAL_PIN_POM_6       0x00    /* P103 */
#define DIGITAL_PIN_POM_7       0x00    /* P46  */
#define DIGITAL_PIN_POM_8       0x04    /* P42  */
#define DIGITAL_PIN_POM_9       0x00    /* P31  */
#define DIGITAL_PIN_POM_10      0x00    /* P64  */
#define DIGITAL_PIN_POM_11      0x00    /* P65  */
#define DIGITAL_PIN_POM_12      0x00    /* P66  */
#define DIGITAL_PIN_POM_13      0x00    /* P67  */
#define DIGITAL_PIN_POM_14      0x10    /* P144 */
#define DIGITAL_PIN_POM_15      0x08    /* P143 */
#define DIGITAL_PIN_POM_16      0x04    /* P02  */
#define DIGITAL_PIN_POM_17      0x08    /* P03  */
#define DIGITAL_PIN_POM_18      0x08    /* P13  */
#define DIGITAL_PIN_POM_19      0x10    /* P14  */
#define DIGITAL_PIN_POM_20      0x00    /* P61  */
#define DIGITAL_PIN_POM_21      0x00    /* P60  */
#define DIGITAL_PIN_POM_22      0x00    /* P40  */
#define DIGITAL_PIN_POM_23      0x01    /* P80  */
#define DIGITAL_PIN_POM_24      0x00    /* P05  */
#define DIGITAL_PIN_POM_25      0x02    /* P81  */
#define DIGITAL_PIN_POM_26      0x04    /* P82  */
#define DIGITAL_PIN_POM_27      0x00    /* P85  */
#define DIGITAL_PIN_POM_28      0x00    /* P86  */
#define DIGITAL_PIN_POM_29      0x00    /* P87  */
#define DIGITAL_PIN_POM_30      0x00    /* P30  */
#define DIGITAL_PIN_POM_31      0x01    /* P50  */
#define DIGITAL_PIN_POM_32      0x00    /* P51  */
#define DIGITAL_PIN_POM_33      0x04    /* P52  */
#define DIGITAL_PIN_POM_34      0x08    /* P53  */
#define DIGITAL_PIN_POM_35      0x10    /* P54  */
#define DIGITAL_PIN_POM_36      0x20    /* P55  */
#define DIGITAL_PIN_POM_37      0x00    /* P56  */
#define DIGITAL_PIN_POM_38      0x00    /* P57  */
#define DIGITAL_PIN_POM_39      0x80    /* P17  */
#define DIGITAL_PIN_POM_40      0x04    /* P12  */
#define DIGITAL_PIN_POM_41      0x02    /* P11  */
#define DIGITAL_PIN_POM_42      0x01    /* P10  */
#define DIGITAL_PIN_POM_43      0x00    /* P90  */
#define DIGITAL_PIN_POM_44      0x00    /* P91  */
#define DIGITAL_PIN_POM_45      0x00    /* P92  */
#define DIGITAL_PIN_POM_46      0x00    /* P93  */
#define DIGITAL_PIN_POM_47      0x00    /* P94  */
#define DIGITAL_PIN_POM_48      0x00    /* P97  */
#define DIGITAL_PIN_POM_49      0x00    /* P112 */
#define DIGITAL_PIN_POM_50      0x00    /* P113 */
#define DIGITAL_PIN_POM_51      0x00    /* P114 */
#define DIGITAL_PIN_POM_52      0x00    /* P101 */
#define DIGITAL_PIN_POM_53      0x00    /* P111 */
#define DIGITAL_PIN_POM_54      0x00    /* P146 */
#define DIGITAL_PIN_POM_55      0x00    /* P23  */
#define DIGITAL_PIN_POM_56      0x00    /* P22  */
#define DIGITAL_PIN_POM_57      0x00    /* P21  */
#define DIGITAL_PIN_POM_58      0x00    /* P130 */
#define DIGITAL_PIN_POM_59      0x00    /* P102 */
#define DIGITAL_PIN_POM_60      0x00    /* P06  */
#define DIGITAL_PIN_POM_61      0x00    /* P137 */
#define DIGITAL_PIN_POM_62      0x00    /* P70  */
#define DIGITAL_PIN_POM_63      0x02    /* P71  */
#define DIGITAL_PIN_POM_64      0x04    /* P72  */
#define DIGITAL_PIN_POM_65      0x00    /* P73  */
#define DIGITAL_PIN_POM_66      0x10    /* P74  */
#define DIGITAL_PIN_POM_67      0x00    /* P75  */
#define DIGITAL_PIN_POM_68      0x00    /* P76  */
#define DIGITAL_PIN_POM_69      0x00    /* P77  */
#define DIGITAL_PIN_POM_70      0x00    /* P121 */
#define DIGITAL_PIN_POM_71      0x00    /* P122 */
#define DIGITAL_PIN_POM_72      0x00    /* P123 */
#define DIGITAL_PIN_POM_73      0x00    /* P124 */
#define DIGITAL_PIN_POM_74      0x00    /* P125 */
#define DIGITAL_PIN_POM_75      0x00    /* P126 */
#define DIGITAL_PIN_POM_76      0x00    /* P127 */
#define DIGITAL_PIN_POM_77      0x00    /* P41  */
#define DIGITAL_PIN_POM_78      0x20    /* P45  */
#define DIGITAL_PIN_POM_79      0x00    /* P32  */
#define DIGITAL_PIN_POM_80      0x00    /* P35  */
#define DIGITAL_PIN_POM_81      0x00    /* P36  */
#define DIGITAL_PIN_POM_82      0x00    /* P37  */
#define DIGITAL_PIN_POM_83      0x01    /* P120 */
#define DIGITAL_PIN_POM_84      0x00    /* P01  */

#define DIGITAL_PIN_POM_85      0x00    /* P141 */
#define DIGITAL_PIN_POM_86      0x04    /* P142 */
#define DIGITAL_PIN_POM_87      0x00    /* P140 */
#define DIGITAL_PIN_POM_88      0x01    /* P00  */
#define DIGITAL_PIN_POM_89      0x00    /* P16  */
#define DIGITAL_PIN_POM_90      0x00    /* P62  */
#define DIGITAL_PIN_POM_91      0x00    /* P63  */
#define DIGITAL_PIN_POM_92      0x00    /* P47  */
#define DIGITAL_PIN_POM_93      0x00    /* P110 */
#define DIGITAL_PIN_POM_94      0x10    /* P04  */
#define DIGITAL_PIN_POM_95      0x00    /* P07  */
#define DIGITAL_PIN_POM_96      0x20    /* P15  */
#define DIGITAL_PIN_POM_97      0x08    /* P43  */
#define DIGITAL_PIN_POM_98      0x10    /* P44  */
#define DIGITAL_PIN_POM_99      0x00    /* P95  */
#define DIGITAL_PIN_POM_100     0x40    /* P96  */
#define DIGITAL_PIN_POM_101     0x00    /* P84  */
#define DIGITAL_PIN_POM_102     0x08    /* P83  */
#define DIGITAL_PIN_POM_103     0x00    /* P115 */
#define DIGITAL_PIN_POM_104     0x00    /* P116 */
#define DIGITAL_PIN_POM_105     0x00    /* P117 */
#define DIGITAL_PIN_POM_106     0x00    /* P147 */
#define DIGITAL_PIN_POM_107     0x00    /* P100 */
#define DIGITAL_PIN_POM_108     0x00    /* P156 */
#define DIGITAL_PIN_POM_109     0x00    /* P155 */
#define DIGITAL_PIN_POM_110     0x00    /* P154 */
#define DIGITAL_PIN_POM_111     0x00    /* P153 */
#define DIGITAL_PIN_POM_112     0x00    /* P152 */
#define DIGITAL_PIN_POM_113     0x00    /* P151 */
#define DIGITAL_PIN_POM_114     0x00    /* P150 */
#define DIGITAL_PIN_POM_115     0x00    /* P27  */
#define DIGITAL_PIN_POM_116     0x00    /* P26  */
#define DIGITAL_PIN_POM_117     0x00    /* P25  */
#define DIGITAL_PIN_POM_118     0x00    /* P24  */

#define TONE_PIN_2          2       // TO07
#define TONE_PIN_3          3       // TO17
#define TONE_PIN_4          4       // TO16
#define TONE_PIN_5          5       // TO15
#define TONE_PIN_6          6       // TO14
#define TONE_PIN_7          7       // TO05
#define TONE_PIN_8          8       // TO04
#define TONE_PIN_9          9       // TO03
#define TONE_PIN_10         10      // TO1O
#define TONE_PIN_11         11      // TO11
#define TONE_PIN_12         12      // TO12
#define TONE_PIN_13         13      // TO13

#define PWM_PIN_2           2       // TO07
#define PWM_PIN_3           3       // TO17
#define PWM_PIN_4           4       // TO16
#define PWM_PIN_5           5       // TO15
#define PWM_PIN_6           6       // TO14
#define PWM_PIN_7           7       // TO05
#define PWM_PIN_8           8       // TO04
#define PWM_PIN_9           9       // TO03
#define PWM_PIN_11          11      // TO11
#define PWM_PIN_12          12      // TO12
#define PWM_PIN_13          13      // TO13

/* Define Serial Port Number */
#define SERIAL_TXD0         40 // P12
#define SERIAL_RXD0         41 // P11
#define SERIAL_TXD1         1  // P34 TxDA1
#define SERIAL_RXD1         0  // P33
#define SERIAL_TXD2         18 // P13 TxD2
#define SERIAL_RXD2         19 // P14
#define SERIAL_TXD3         16 // P02 TxD1
#define SERIAL_RXD3         17 // P03
#define SERIAL_TXD4         14 // P144 TxD3
#define SERIAL_RXD4         15 // P143
#define SERIAL_TXD5        102 // P83
#define SERIAL_RXD5        101 // P84

/* Define Firmata library */
#define TOTAL_ANALOG_PINS       NUM_ANALOG_INPUTS
#define TOTAL_PINS              NUM_DIGITAL_PINS
#define TOTAL_PORTS             15 //P00 - P147
#define VERSION_BLINK_PIN       BUILTIN_LED1
/* for FIRMATA specific for G23(128p) */
#define PIN_SERIAL0_RX         41
#define PIN_SERIAL0_TX         40
#define PIN_SERIAL1_RX          0
#define PIN_SERIAL1_TX          1
#define PIN_SERIAL2_RX         19
#define PIN_SERIAL2_TX         18
#define PIN_SERIAL3_RX         17
#define PIN_SERIAL3_TX         16
#define PIN_SERIAL4_RX         15
#define PIN_SERIAL4_TX         14
#define PIN_SERIAL5_RX        101
#define PIN_SERIAL5_TX        102

#if defined(UART_CHANNEL)
#define IS_PIN_SERIAL0(p)        ((p) == PIN_SERIAL0_RX || (p) == PIN_SERIAL0_TX )
#else
#define IS_PIN_SERIAL0(p)        (0)
#endif
#if defined(UART1_CHANNEL)
#define IS_PIN_SERIAL1(p)        ((p) == PIN_SERIAL1_RX || (p) == PIN_SERIAL1_TX)
#else
#define IS_PIN_SERIAL1(p)        (0)
#endif
#if defined(UART2_CHANNEL)
#define IS_PIN_SERIAL2(p)        ((p) == PIN_SERIAL2_RX || (p) == PIN_SERIAL2_TX)
#else
#define IS_PIN_SERIAL2(p)        (0)
#endif
#if defined(UART3_CHANNEL)
#define IS_PIN_SERIAL3(p)        ((p) == PIN_SERIAL3_RX || (p) == PIN_SERIAL3_TX)
#else
#define IS_PIN_SERIAL3(p)        (0)
#endif
#if defined(UART4_CHANNEL)
#define IS_PIN_SERIAL4(p)        ((p) == PIN_SERIAL4_RX || (p) == PIN_SERIAL4_TX)
#else
#define IS_PIN_SERIAL4(p)        (0)
#endif
#if defined(UART5_CHANNEL)
#define IS_PIN_SERIAL5(p)        ((p) == PIN_SERIAL5_RX || (p) == PIN_SERIAL5_TX)
#else
#define IS_PIN_SERIAL5(p)        (0)
#endif


#define IS_PIN_DIGITAL(p)       ((p) >= 0 && (p) < NUM_DIGITAL_PINS && (!(IS_PIN_SERIAL(p))) && !((p) == 22) && !((p) == 24) && !((p) == 30) && !((p) == 57)  && !((p) == 60) && !((p) == 72) && !((p) == 73) )

#define IS_PIN_ANALOG(p)        ((p) >= 103 && (p) < 119)
#define IS_PIN_PWM(p)           digitalPinHasPWM(p)
#define IS_PIN_SERVO(p)         ((p) >= 0 && (p) < MAX_SERVOS)
#define IS_PIN_I2C(p)           ((p) == PIN_WIRE_SDA || (p) == PIN_WIRE_SCL || (p) == PIN_WIRE_SDA1 || (p) == PIN_WIRE_SCL1  || (p) == PIN_WIRE_SDA2 || (p) == PIN_WIRE_SCL2  || (p) == PIN_WIRE_SDA3 || (p) == PIN_WIRE_SCL3  || (p) == PIN_WIRE_SDA4 || (p) == PIN_WIRE_SCL4)
#define IS_PIN_SPI(p)           ((p) == SS || (p) == MOSI || (p) == MISO || (p) == SCK)

#define IS_PIN_SERIAL(p)        (IS_PIN_SERIAL0(p) || IS_PIN_SERIAL1(p) || IS_PIN_SERIAL2(p) || IS_PIN_SERIAL3(p) || IS_PIN_SERIAL4(p) || IS_PIN_SERIAL5(p))
#define PIN_TO_DIGITAL(p)       (p)
#define PIN_TO_ANALOG(p)        ((p) - 103)
#define PIN_TO_PWM(p)           PIN_TO_DIGITAL(p)
#define PIN_TO_SERVO(p)         (p)
#define ANALOG_TO_PIN(p)        ((p) + 103)
/* Define Firmata library */

#endif // #variant
