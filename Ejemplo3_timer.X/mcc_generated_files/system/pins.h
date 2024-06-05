/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSELC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RF0 aliases
#define LED_T1_TRIS                 TRISFbits.TRISF0
#define LED_T1_LAT                  LATFbits.LATF0
#define LED_T1_PORT                 PORTFbits.RF0
#define LED_T1_WPU                  WPUFbits.WPUF0
#define LED_T1_OD                   ODCONFbits.ODCF0
#define LED_T1_ANS                  ANSELFbits.ANSELF0
#define LED_T1_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define LED_T1_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define LED_T1_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define LED_T1_GetValue()           PORTFbits.RF0
#define LED_T1_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define LED_T1_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define LED_T1_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define LED_T1_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define LED_T1_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define LED_T1_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define LED_T1_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define LED_T1_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set RF3 aliases
#define LED_T0_TRIS                 TRISFbits.TRISF3
#define LED_T0_LAT                  LATFbits.LATF3
#define LED_T0_PORT                 PORTFbits.RF3
#define LED_T0_WPU                  WPUFbits.WPUF3
#define LED_T0_OD                   ODCONFbits.ODCF3
#define LED_T0_ANS                  ANSELFbits.ANSELF3
#define LED_T0_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED_T0_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED_T0_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED_T0_GetValue()           PORTFbits.RF3
#define LED_T0_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED_T0_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED_T0_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED_T0_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED_T0_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED_T0_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED_T0_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED_T0_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/