/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.3
        Device            :  PIC18F16Q41
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSELA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2_IN2 aliases
#define RA2_IN2_TRIS                 TRISAbits.TRISA2
#define RA2_IN2_LAT                  LATAbits.LATA2
#define RA2_IN2_PORT                 PORTAbits.RA2
#define RA2_IN2_WPU                  WPUAbits.WPUA2
#define RA2_IN2_OD                   ODCONAbits.ODCA2
#define RA2_IN2_ANS                  ANSELAbits.ANSELA2
#define RA2_IN2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_IN2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_IN2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_IN2_GetValue()           PORTAbits.RA2
#define RA2_IN2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_IN2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_IN2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_IN2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_IN2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define RA2_IN2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define RA2_IN2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_IN2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set PIR_LED aliases
#define PIR_LED_TRIS                 TRISAbits.TRISA4
#define PIR_LED_LAT                  LATAbits.LATA4
#define PIR_LED_PORT                 PORTAbits.RA4
#define PIR_LED_WPU                  WPUAbits.WPUA4
#define PIR_LED_OD                   ODCONAbits.ODCA4
#define PIR_LED_ANS                  ANSELAbits.ANSELA4
#define PIR_LED_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define PIR_LED_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define PIR_LED_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define PIR_LED_GetValue()           PORTAbits.RA4
#define PIR_LED_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define PIR_LED_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define PIR_LED_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define PIR_LED_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define PIR_LED_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define PIR_LED_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define PIR_LED_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define PIR_LED_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5_IN0 aliases
#define RB5_IN0_TRIS                 TRISBbits.TRISB5
#define RB5_IN0_LAT                  LATBbits.LATB5
#define RB5_IN0_PORT                 PORTBbits.RB5
#define RB5_IN0_WPU                  WPUBbits.WPUB5
#define RB5_IN0_OD                   ODCONBbits.ODCB5
#define RB5_IN0_ANS                  ANSELBbits.ANSELB5
#define RB5_IN0_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_IN0_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_IN0_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_IN0_GetValue()           PORTBbits.RB5
#define RB5_IN0_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_IN0_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_IN0_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_IN0_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_IN0_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define RB5_IN0_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define RB5_IN0_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define RB5_IN0_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSELB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set POT1 aliases
#define POT1_TRIS                 TRISCbits.TRISC0
#define POT1_LAT                  LATCbits.LATC0
#define POT1_PORT                 PORTCbits.RC0
#define POT1_WPU                  WPUCbits.WPUC0
#define POT1_OD                   ODCONCbits.ODCC0
#define POT1_ANS                  ANSELCbits.ANSELC0
#define POT1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define POT1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define POT1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define POT1_GetValue()           PORTCbits.RC0
#define POT1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define POT1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define POT1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define POT1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define POT1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define POT1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define POT1_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define POT1_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSELC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSELC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSELC2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/