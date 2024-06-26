 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"
#include "I2C.h"
#include "fonts.h"
#include "ssd1306.h"
#include "test.h"
/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 
  SSD1306_Init();
  SSD1306_GotoXY(0, 10);
  SSD1306_Puts("PIC18FQ43",&Font_11x18,1);
  SSD1306_GotoXY(10,40);
  SSD1306_Puts("CAS UPC",&Font_11x18,1);
  SSD1306_UpdateScreen();
  __delay_ms(2000);
  // SCROLL
  SSD1306_ScrollLeft(0, 8);
  __delay_ms(2000);
  SSD1306_ScrollRight(0, 8);
   __delay_ms(2000);
  SSD1306_Stopscroll();
  __delay_ms(2000);
  SSD1306_InvertDisplay(1);
   __delay_ms(2000);
  SSD1306_InvertDisplay(0);
   __delay_ms(2000);
   TestLines (1);
   __delay_ms(2000);
   TestRectangles (1);
   __delay_ms(2000);;
   TestFilledRectangles (1);
   __delay_ms(2000);
   TestFilledCircles(5, 1);
   __delay_ms(2000);
   TestCircles(5, 1);
   __delay_ms(2000);
   TestTriangles (1);

    while(1)
    {
    }    
}