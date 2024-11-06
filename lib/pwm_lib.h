#ifndef PWM_LIB_H
#define PWM_LIB_H

// PWM 채널 경로 설정
#define PWM1_CHANNEL_PATH "/sys/class/pwm/pwmchip0/pwm0"
#define PWM2_CHANNEL_PATH "/sys/class/pwm/pwmchip0/pwm1"

// PWM 설정
#define PWM_PERIOD 1000000
#define PWM_MAX_DUTY_CYCLE PWM_PERIOD

// PWM 함수
int initialize_pwm(const char *channel_path);
void update_pwm_duty_cycle(const char *channel_path, int duty_cycle);

#endif

