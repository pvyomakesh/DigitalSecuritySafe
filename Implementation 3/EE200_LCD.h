/* 
 * File:   EE200_LCD.h
 * Author: Schiano
 *
 * Created on November 6, 2023, 1:00 AM
 */

#ifndef EE200_LCD_H
#define	EE200_LCD_H

/* declare visible functions */
void Init_LCD_Module(void);
void Position_LCD_Cursor(int cell_num);
void Write_LCD_String(char char_Array[16]);

#endif	/* EE200_LCD_H */

