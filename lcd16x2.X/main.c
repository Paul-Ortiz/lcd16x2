/*
 * File:   main.c
 * Author: Paul
 *
 * Created on January 27, 2024, 9:24 PM
 */


#include <xc.h>

#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF       // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

#define _XTAL_FREQ 20000000  //4Mhz

#include "LCD_16x2.h"

void main(void) {
    
    LCD_Init();
    LCD_SetCursor(0, 0);
    LCD_Text("Testeo....");
    LCD_SetCursor(1, 0);
    LCD_Cursor();
    LCD_Blink();
    while(1){
        
    }
    return;
}
