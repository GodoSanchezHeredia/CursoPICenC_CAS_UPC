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
#include "ILI9341_STM32_Driver.h"
#include "ILI9341_GFX.h"
#include "stdio.h"
#include "stdlib.h"
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
    SPI1_Host.Initialize();
    SPI1_Host.Open(HOST_CONFIG);
 ILI9341_Init();
ILI9341_FillScreen(PINK);
ILI9341_SetRotation(SCREEN_HORIZONTAL_2);
ILI9341_DrawText("CURSO STM32", FONT4, 80, 100, BLACK, PINK);
__delay_ms(500);

ILI9341_FillScreen(BLACK  );
__delay_ms(1000);
ILI9341_FillScreen(NAVY );
__delay_ms(1000);
ILI9341_FillScreen( DARKGREEN  );
__delay_ms(1000);
ILI9341_FillScreen( DARKCYAN    	);
__delay_ms(1000);
ILI9341_FillScreen( MAROON   );
__delay_ms(1000);
ILI9341_FillScreen(PURPLE      		);
__delay_ms(1000);
ILI9341_FillScreen( OLIVE       		);
__delay_ms(1000);
ILI9341_FillScreen( LIGHTGREY);
__delay_ms(1000);
ILI9341_FillScreen( DARKGREY  );
__delay_ms(1000);
ILI9341_FillScreen( BLUE    );
__delay_ms(1000);
ILI9341_FillScreen( GREEN   );
__delay_ms(1000);
ILI9341_FillScreen( CYAN    );
__delay_ms(1000);
ILI9341_FillScreen( RED     );
__delay_ms(1000);
ILI9341_FillScreen( MAGENTA  );
__delay_ms(1000);
ILI9341_FillScreen( YELLOW   );
__delay_ms(1000);
ILI9341_FillScreen( WHITE    );
__delay_ms(1000);
ILI9341_FillScreen(GREENYELLOW 	);
__delay_ms(1000);
ILI9341_FillScreen( PINK  );
__delay_ms(1000);
ILI9341_FillScreen( WHITE  );
char Buffer[35];
uint8_t var;
for (var = 0; var < 10; ++var) {
	sprintf(Buffer,"Contador en %d",var);
	ILI9341_DrawText(Buffer, FONT3, 10, 10, BLACK, WHITE);
	ILI9341_DrawText(Buffer, FONT3, 10, 30, BLUE, WHITE);
	ILI9341_DrawText(Buffer, FONT3, 10, 50, RED, WHITE);
	ILI9341_DrawText(Buffer, FONT3, 10, 70, GREEN, WHITE);
	ILI9341_DrawText(Buffer, FONT3, 10, 90, MAROON, WHITE);
	ILI9341_DrawText(Buffer, FONT3, 10, 110, WHITE, BLACK);
	ILI9341_DrawText(Buffer, FONT3, 10, 130, RED, BLACK);
__delay_ms(500);
}
__delay_ms(1000);
ILI9341_FillScreen( WHITE  );
ILI9341_DrawVLine(160, 40, 200, RED);
__delay_ms(1000);

ILI9341_FillScreen( WHITE  );
ILI9341_DrawHLine(50, 120, 200, RED);
__delay_ms(1000);

ILI9341_FillScreen( WHITE  );
ILI9341_DrawHollowCircle(160, 120, 80, MAROON);
__delay_ms(1000);

ILI9341_FillScreen( WHITE  );
ILI9341_DrawFilledCircle(160, 120, 50, RED);
__delay_ms(1000);

    while(1){
        IO_RF3_Toggle();
__delay_ms(500);
    }    
}