#ifndef WiringPrivateTone_h
#define WiringPrivateTone_h


#define TONE_CH_NUM (12)

#ifdef __cplusplus
extern "C"{
#endif

typedef struct {
    void (*open)();
    void (*start)();
    void (*stop)();
} tone_func;

#ifdef __cplusplus
} // extern "C"
#endif

// tone_func
int8_t get_tone_channel(uint8_t tone_num);

/* tone pin set */
extern volatile unsigned short *g_tone_period_reg[TONE_CH_NUM];
extern volatile unsigned short *g_timer_tone_mode_reg[TONE_CH_NUM];
extern volatile unsigned short *g_timer_tone_clock_select_reg[TONE_CH_NUM];
extern const uint8_t  tone_channel_table[TONE_CH_NUM];

extern "C"{
    void R_Config_TAU0_2_Square_Wave_Create(void);
    void R_Config_TAU0_2_Square_Wave_Start(void);
    void R_Config_TAU0_2_Square_Wave_Stop(void);
    void R_Config_TAU0_2_Square_Wave_Create_UserInit(void);
    void R_Config_TAU0_3_Square_Wave_Create(void);
    void R_Config_TAU0_3_Square_Wave_Start(void);
    void R_Config_TAU0_3_Square_Wave_Stop(void);
    void R_Config_TAU0_3_Square_Wave_Create_UserInit(void);
    void R_Config_TAU0_4_Square_Wave_Create(void);
    void R_Config_TAU0_4_Square_Wave_Start(void);
    void R_Config_TAU0_4_Square_Wave_Stop(void);
    void R_Config_TAU0_4_Square_Wave_Create_UserInit(void);
    void R_Config_TAU0_5_Square_Wave_Create(void);
    void R_Config_TAU0_5_Square_Wave_Start(void);
    void R_Config_TAU0_5_Square_Wave_Stop(void);
    void R_Config_TAU0_5_Square_Wave_Create_UserInit(void);
    void R_Config_TAU0_6_Square_Wave_Create(void);
    void R_Config_TAU0_6_Square_Wave_Start(void);
    void R_Config_TAU0_6_Square_Wave_Stop(void);
    void R_Config_TAU0_6_Square_Wave_Create_UserInit(void);
    void R_Config_TAU0_7_Square_Wave_Create(void);
    void R_Config_TAU0_7_Square_Wave_Start(void);
    void R_Config_TAU0_7_Square_Wave_Stop(void);
    void R_Config_TAU0_7_Square_Wave_Create_UserInit(void);

    void R_Config_TAU1_0_Square_Wave_Create(void);
    void R_Config_TAU1_0_Square_Wave_Start(void);
    void R_Config_TAU1_0_Square_Wave_Stop(void);
    void R_Config_TAU1_0_Square_Wave_Create_UserInit(void);
    void R_Config_TAU1_1_Square_Wave_Create(void);
    void R_Config_TAU1_1_Square_Wave_Start(void);
    void R_Config_TAU1_1_Square_Wave_Stop(void);
    void R_Config_TAU1_1_Square_Wave_Create_UserInit(void);
    void R_Config_TAU1_2_Square_Wave_Create(void);
    void R_Config_TAU1_2_Square_Wave_Start(void);
    void R_Config_TAU1_2_Square_Wave_Stop(void);
    void R_Config_TAU1_2_Square_Wave_Create_UserInit(void);
    void R_Config_TAU1_3_Square_Wave_Create(void);
    void R_Config_TAU1_3_Square_Wave_Start(void);
    void R_Config_TAU1_3_Square_Wave_Stop(void);
    void R_Config_TAU1_3_Square_Wave_Create_UserInit(void);
    void R_Config_TAU1_4_Square_Wave_Create(void);
    void R_Config_TAU1_4_Square_Wave_Start(void);
    void R_Config_TAU1_4_Square_Wave_Stop(void);
    void R_Config_TAU1_4_Square_Wave_Create_UserInit(void);
    void R_Config_TAU1_5_Square_Wave_Create(void);
    void R_Config_TAU1_5_Square_Wave_Start(void);
    void R_Config_TAU1_5_Square_Wave_Stop(void);
    void R_Config_TAU1_5_Square_Wave_Create_UserInit(void);
    void R_Config_TAU1_6_Square_Wave_Create(void);
    void R_Config_TAU1_6_Square_Wave_Start(void);
    void R_Config_TAU1_6_Square_Wave_Stop(void);
    void R_Config_TAU1_6_Square_Wave_Create_UserInit(void);
    void R_Config_TAU1_7_Square_Wave_Create(void);
    void R_Config_TAU1_7_Square_Wave_Start(void);
    void R_Config_TAU1_7_Square_Wave_Stop(void);
    void R_Config_TAU1_7_Square_Wave_Create_UserInit(void);
}

extern tone_func tone_ch[TONE_CH_NUM];

#endif
