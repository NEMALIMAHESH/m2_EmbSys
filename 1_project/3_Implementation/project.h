/**
 * @file project.h
 * @author N.Maheswara Reddy (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#indef project_h
#define project_h

#indef _AVR_ATmega328_
#define _AVR_ATmega328_

#define F_CPU 1000000UL
#include<avr/io.h>
#include<math.h>
#include<util/delay.h>
#include<stdlib.h>
#include<string.h>
/**
 * @brief Define LCD data port direction for DDRB
 */
#define LCD_Dir DDRB /* Define LCD data port direction */

/**
 * @brief Define LCD data port to PORTB
 *
 */
#define LCD_Port PORTB /* Define LCD data port */

/**
 * @brief Define Register Select pin to PB0
 *
 */
#define RS PB0 /* Define Register Select pin */

/**
 * @brief Define Enable signal pin to PB1
 *
 */
#define EN PB1 /* Define Enable signal pin */

/**
 * @brief Gives Unsigned char commands to the LCD
 *
 * @param cmnd
 */
void LCD_Command(unsigned char cmnd);

/**
 * @brief Prints Character on the display
 *
 * @param data
 */
void LCD_Char(unsigned char data);

/**
 * @brief Initilizes the LCD
 *
 */
void LCD_Init(void);

/**
 * @brief Prints String on the LCD
 *
 * @param str
 */
void LCD_String(char *str);

/**
 * @brief Prints String at certain position on LCD
 *
 * @param row
 * @param pos
 * @param str
 */
void LCD_String_xy(char row, char pos, char *str);

/**
 * @brief Clears the LCD display
 *
 */
void LCD_Clear();

/**
 * @brief Sets Display Cursor to row,pos
 *
 * @param row
 * @param pos
 */
void LCD_pos(char row, char pos);

/**
 * @brief Initilize the ADC (Analog to Digital Converter)
 *
 */
void ADC_Init();

/**
 * @brief Read the ADC Value from port c channel (0-6)
 *
 * @param channel
 * @return int
 */
int ADC_Read(char channel);

/**
 * @brief Converts the value we have to Percentage
 *
 * @param temp
 * @return int
 */
void temp_led(int temp);

/**
 * @brief 
 * 
 */

#endif