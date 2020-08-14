/* 
 * File:   application.h
 * Author: C16783
 *
 * Created on August 11, 2020, 10:53 AM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

#ifdef	__cplusplus
extern "C" {
#endif

#define TRIGGER_SENSITIVITY 25 // DAC Step Size ~= 19mV;  
#define DAC_RESOLUTION 256 // 2^8 = 256
#define ADC_RESOLUTION 4096 // 2^12 = 4096

    adc_result_t pot_result = 0;
    float dac_temp = 0;
    uint8_t tmr1_flag = 0;
    uint8_t adc_thresh_flag;

    void PIR_Startup(void);
    void DAC2_DriftCompensation(void);
    void Read_Potentiometer(void);
    void LED_TimoutControl(void);
    void TMR1_InterruptRoutine(void);
    void ADCC_Threshold_InterruptRoutine(void);


#ifdef	__cplusplus
}
#endif

#endif	/* APPLICATION_H */

