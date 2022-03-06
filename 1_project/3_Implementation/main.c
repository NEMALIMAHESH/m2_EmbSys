#include "../header/project.h"

int main()
{

	DDRD |= 0b00001111; 								// insted of "DDRD |= 0x0f;"
	DDRC |= 0b1000000;									// set b6 as output port
	LCD_Init();											// initilize led
