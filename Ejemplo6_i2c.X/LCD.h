/* 
 * File:   LCD.h
 * Author: DELL
 *
 * Created on June 25, 2024, 4:42 PM
 */

#ifndef LCD_H
#define	LCD_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "stdint.h"

#define ADD_LCD 0X27

#define RS_BIT	0
#define RW_BIT	1
#define E_BIT 	2
#define D4_BIT 	4
#define D5_BIT 	5
#define D6_BIT  6
#define D7_BIT  7


typedef enum{
	fila1=0,
	fila2,
	fila3,
	fila4
}Ubicacion;


void LCD_PIC_CMD(uint8_t a,uint8_t rs);
void LCD_PIC_BUS(uint8_t a);
void LCD_PIC_INIT(void);
void LCD_PIC_SET_CURSOR(uint8_t x,Ubicacion y);
void LCD_PIC_PRINT_CHAR(char a);
void LCD_PIC_PRINT_STRING(char *a);
void LCD_PIC_New_Char(uint8_t a,uint8_t b,uint8_t c,uint8_t d ,uint8_t e ,uint8_t f,uint8_t g,uint8_t h,uint8_t i);
void LCD_PIC_Print_New_Char(uint8_t a);
void LCD_PIC_Clear(void);
void LCD_PIC_Home(void);





#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */

