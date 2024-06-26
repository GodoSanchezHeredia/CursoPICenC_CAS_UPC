
/*
 * LCD.c
 *
 *  Created on: Sep 23, 2023
 *      Author: DELL
 */

#include "LCD.h"
#include "I2C.h"

void LCD_PIC_CMD(uint8_t a,uint8_t rs){
	uint8_t dato = a<<4;
	dato |= rs<<RS_BIT;
	dato |= 1<<E_BIT;
	dato |= 1<<3;//backlight

	I2C_Write( ADD_LCD, &dato, 1);
	__delay_ms(2);
	dato &= ~(1<<E_BIT);
	I2C_Write(ADD_LCD, &dato, 1);
}
void LCD_PIC_BUS(uint8_t a){


}

void LCD_PIC_INIT(void){

	LCD_PIC_CMD(0x03,0);
	__delay_ms(3);
	LCD_PIC_CMD(0x03,0);
	LCD_PIC_CMD(0x03,0);
	LCD_PIC_CMD(0x02,0);
	LCD_PIC_CMD(0x02,0);
	LCD_PIC_CMD(0x08,0);
	LCD_PIC_CMD(0x00,0);
	LCD_PIC_CMD(0x08,0);
	LCD_PIC_CMD(0x00,0);
	LCD_PIC_CMD(0x01,0);
	LCD_PIC_CMD(0x00,0);
	//Con curso activado es 0XD,  sin cursor : 0xC
	LCD_PIC_CMD(0x0D,0);
}


void LCD_PIC_SET_CURSOR(uint8_t x,Ubicacion y){

	uint8_t m,n;


	switch (y) {
		case fila1:
			m=0x80+x;
			n=(0x80+x)>>4;
			LCD_PIC_CMD(n,0);
			LCD_PIC_CMD(m,0);
			break;
		case fila2:
			m=0xC0+x;
			n=(0xC0+x)>>4;
			LCD_PIC_CMD(n,0);
			LCD_PIC_CMD(m,0);
			break;
		case fila3:

			break;
		case fila4:

			break;
	}


}

void LCD_PIC_PRINT_CHAR(char a){
	uint8_t m,n;
	m = a>>4;
    n = a;

	LCD_PIC_CMD(m,1);
	LCD_PIC_CMD(n,1);

}

void LCD_PIC_PRINT_STRING(char *a){


	while(*a){
			LCD_PIC_PRINT_CHAR(*a++);
	}

}
/*
void LCD_STM32_New_Char(uint8_t a,uint8_t b,uint8_t c,uint8_t d ,uint8_t e ,uint8_t f,uint8_t g,uint8_t h,uint8_t i){

	  uint8_t m,n;
		  switch(a){
			  case 1:
			  LCD_STM32_CMD(0x04);
			  LCD_STM32_CMD(0x00);

			  m=b>>4;
			  n=b;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=c>>4;
			  n=c;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=d>>4;
			  n=d;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=e>>4;
			  n=e;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=f>>4;
			  n=f;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=g>>4;
			  n=g;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=h>>4;
			  n=h;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=i>>4;
			  n=i;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);

			  LCD_STM32_CMD(0x00);
			  LCD_STM32_CMD(0x01);
			  HAL_Delay(100);
			  break;
			  case 2:
			  LCD_STM32_CMD(0x04);
			  LCD_STM32_CMD(0x08);

			  m=b>>4;
			  n=b;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=c>>4;
			  n=c;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=c>>4;
			  n=c;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=d>>4;
			  n=d;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=e>>4;
			  n=e;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=f>>4;
			  n=f;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=g>>4;
			  n=g;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=h>>4;
			  n=h;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=i>>4;
			  n=i;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);

			  LCD_STM32_CMD(0x00);
			  LCD_STM32_CMD(0x01);
			  HAL_Delay(100);
			  break;
			  case 3:
			  LCD_STM32_CMD(0x04);
			  LCD_STM32_CMD(0xFF);

			  m=b>>4;
			  n=b;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=c>>4;
			  n=c;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=d>>4;
			  n=d;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=e>>4;
			  n=e;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=f>>4;
			  n=f;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=g>>4;
			  n=g;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=h>>4;
			  n=h;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);
			  m=i>>4;
			  n=i;
			  LCD_STM32_CMD(m);
			  LCD_STM32_CMD(n);

			  LCD_STM32_CMD(0x00);
			  LCD_STM32_CMD(0x01);
			  HAL_Delay(100);
			  break;
		  }



}
void LCD_STM32_Print_New_Char(uint8_t a){

	LCD_STM32_CMD(0x00);
	LCD_STM32_CMD(a-1);

}
*/void LCD_PIC_Clear(void){

	LCD_PIC_CMD(0x00,0);
	LCD_PIC_CMD(0x01,0);
}
void LCD_PIC_Home(void){

    LCD_PIC_CMD(0x00,0);
    LCD_PIC_CMD(0x02,0);
}




