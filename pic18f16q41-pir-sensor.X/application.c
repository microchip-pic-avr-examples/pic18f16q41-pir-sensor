/*
 * File:   application.c
 * Author: C16783
 *
 * Created on August 11, 2020, 10:52 AM
 */


#include <xc.h>
#include "mcc_generated_files/mcc.h"
#include "application.h"

void PIR_Startup(void) {
    VREGCONbits.VREGPM = 0b00;
    __delay_ms(500); // Start-up Delay;
    DAC2_DriftCompensation();
}

void DAC2_DriftCompensation(void) {
    dac_temp = ADCC_GetConversionResult(); // DAC2 drift compensation;
    dac_temp = (dac_temp / ADC_RESOLUTION) * DAC_RESOLUTION; // Calculate DAC2 CMP trigger;
    DAC2DATL = (uint8_t) dac_temp + TRIGGER_SENSITIVITY; // Update DAC2 with calculated value;
}

void Read_Potentiometer(void) {
    ADPCH = POT1; // Set ADC Positive Channel to Potentiometer;
    ADCON0bits.ADGO = 1; // Start ADC conversion;
    while (ADCON0bits.ADGO); // Wait for conversion to complete;           
    pot_result = ((ADRESH << 8) + ADRESL); // Store ADC conversion result;
    pot_result = pot_result * 14; // Change potentiometer result scale to load tmr1 period;
    TMR1_WriteTimer(pot_result);
}

void LED_TimoutControl(void) {
    LATAbits.LATA4 = 1; // Turn on LED;
    printf("CMP1 Interrupt! \r\n");
    TMR1_StartTimer();
}

void TMR1_InterruptRoutine(void) {
    LATAbits.LATA4 = 0; // Turn off LED;
    TMR1_StopTimer(); // Turning off LED timer
}

void ADCC_Threshold_InterruptRoutine(void) {
    adc_thresh_flag = 1;
}
