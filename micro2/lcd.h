/*
 * lcd.h
 *
 *  Created on: Jul 11, 2022
 *      Author: REZK
 */

#ifndef LCD_H_
#define LCD_H_

#include"micro_config.h"
#include"std_types.h"
#include"common_macros.h"

/*
 * configurations
 */

#define RS  PA2
#define E   PA0
#define RW  PA1
#define LCD_CTR_PORT  PORTA
#define LCD_CTR_DIR   DDRA

#define LCD_DATA_PORT PORTB
#define LCD_DATA_DIR  DDRB

/*
 *
 * commands
 *
 */
#define CLEAR_SCREEN             0x1
#define DISPLAY_ON_CURSOR_OFF    0xC
#define DISPLAY_ON_CURSOR_ON     0xE
#define SET_CURSOR_AT_FIRST      0x80
#define TWO_LINE_EIGHT_BIN       0x38

/*
 * prototypes
 *
 */
void LCD_sendCommand(uint8 command);
void LCD_displayCharacter(uint8 data);
void LCD_displayString(const char *str);
void LCD_init(void);
void LCD_clearScreen(void);
void LCD_displayStringRowColumn(uint8 row , uint8 col , const char *str);
void LCD_goToRowColumn(uint8 row , uint8 col);
void LCD_intToStr(int data);


#endif /* LCD_H_ */
