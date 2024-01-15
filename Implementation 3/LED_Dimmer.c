/*
 * File:   Exercise_3_main.c
 * Author: jls32
 *
 * Created on October 15, 2023, 12:42 PM
 */
#define FCY 3685000UL

#include "xc.h"
#include "libpic30.h"
#include "math.h"
#include "stdio.h"
#include "string.h"
#include "EE200_LCD.h"
#pragma config ICS = PGD2    // communicate on PGED2 (pin 14) and PGEC2 (pin 15)
#pragma config JTAGEN = OFF

/* declare functions */
void initialize_IO_ports(void);
void initialize_INT(void);
void __attribute__((__interrupt__,auto_psv)) _INT1Interrupt (void);

typedef enum{
    S0, S1, S2, S3, S4
} STATES;

STATES state = S0;

void initialize_IO_ports (void) {
    /* Configure pins 2 and 3 for digital I/O */
    ANSELAbits.ANSA1 = 0;// use pin 7 (RA1) for digital I/O
    ANSELAbits.ANSA4 = 0;
    ANSELB = 0;
    
    /* Set I/O pin direction */
    TRISB = 0x0011; // setting pin 4 (RB0) and pin 11 (RB4) as input and all others to output
    TRISAbits.TRISA1 = 1; // setting pin 3 (RA1) as input
    TRISAbits.TRISA4 = 0; // setting pin 12 (RA4) as output
    
    PORTB = 0; // setting LCD inputs to low
}

void initialize_INT (void) {
    RPINR0bits.INT1R = 0x24;                             // assign INT1 to RP36 (pin 11)
    INTCON2bits.GIE = 1;                             // set global interrupt enable
    INTCON2bits.INT1EP = 1;                             // interrupt on negative edge
    IFS1bits.INT1IF = 0;                             // clear interrupt flag
    IEC1bits.INT1IE = 1;                             // enable interrupt
}

void __attribute__((__interrupt__,auto_psv)) _INT1Interrupt (void) {
    LATAbits.LATA4 = 1; // set pin 11 (RA4) [R] to 1                       
    LATBbits.LATB1 = 0; // set pin 5 (RB1) [G] to 0  
    LATBbits.LATB2 = 0; // set pin 6 (RB2) [Y1] to 0  
    LATBbits.LATB3 = 0; // set pin 7 (RB3) [Y2] to 0  
    Position_LCD_Cursor(0x00); // place cursosr at cell 0x00
    Write_LCD_String("STATE = S0");
    state = S0;                        // set state to S0
    IFS1bits.INT1IF = 0;                        // clear interrupt flag
  }

int main(void) {
    int input;
    char State0[16] = "STATE = S0";
    char State1[16] = "STATE = S1";
    char State2[16] = "STATE = S2";
    char State3[16] = "STATE = S3";
    char State4[16] = "STATE = S4";
    
    /*Initializing the modules*/
    Init_LCD_Module();
    initialize_IO_ports ();
    initialize_INT ();
    
    /* loop forever */
    while (1) {
        input = PORTBbits.RB0 << 1 ^ PORTAbits.RA1;   // set input = 2K2 + K1
        switch (state){
            case S0:
                switch (input){
                    case 0: state = S0; break;
                    case 1: state = S1; break;
                    case 2: state = S0; break;
                    case 3: state = S0; break;
                }; break;
            case S1:
                switch (input){
                    case 0: state = S2; break;
                    case 1: state = S1; break;
                    case 2: state = S0; break;
                    case 3: state = S0; break;
                }; break;
            case S2:
                switch (input){
                    case 0: state = S2; break;
                    case 1: state = S0; break;
                    case 2: state = S3; break;
                    case 3: state = S0; break;
                }; break;
            case S3:
                switch (input){
                    case 0: state = S4; break;
                    case 1: state = S0; break;
                    case 2: state = S3; break;
                    case 3: state = S0; break;
                }; break;
            case S4:
                switch (input){
                    case 0: state = S4; break;
                    case 1: state = S4; break;
                    case 2: state = S4; break;
                    case 3: state = S0; break;
                }; break;
        }
        
        switch (state){
            case S0: 
                LATBbits.LATB1 = 0; // set pin 5 (RB1) [G] to 0  
                LATBbits.LATB2 = 0; // set pin 6 (RB2) [Y1] to 0  
                LATBbits.LATB3 = 0; // set pin 7 (RB3) [Y2] to 0  
                LATAbits.LATA4 = 1; // set pin 11 (RA4) [R] to 1  
                Position_LCD_Cursor(0x00); // place cursosr at cell 0x00
                Write_LCD_String(State0);
                break;
            case S1: 
                LATBbits.LATB1 = 0; // set pin 5 (RB1) [G] to 0
                LATBbits.LATB2 = 1; // set pin 6 (RB2) [Y1] to 1
                LATBbits.LATB3 = 0; // set pin 7 (RB3) [Y2] to 0
                LATAbits.LATA4 = 0; // set pin 11 (RA4) [R] to 0
                Position_LCD_Cursor(0x00); // place cursosr at cell 0x00
                Write_LCD_String(State1);
                break;
            case S2: 
                LATBbits.LATB1 = 0; // set pin 5 (RB1) [G] to 0
                LATBbits.LATB2 = 0; // set pin 6 (RB2) [Y1] to 0
                LATBbits.LATB3 = 1; // set pin 7 (RB3) [Y2] to 1
                LATAbits.LATA4 = 0; // set pin 11 (RA4) [R] to 0
                Position_LCD_Cursor(0x00); // place cursosr at cell 0x00
                Write_LCD_String(State2);
                break;
            case S3: 
                LATBbits.LATB1 = 0; // set pin 5 (RB1) [G] to 0
                LATBbits.LATB2 = 1; // set pin 6 (RB2) [Y1] to 1
                LATBbits.LATB3 = 1; // set pin 7 (RB3) [G] to 1
                LATAbits.LATA4 = 0; // set pin 11 (RA4) [R] to 0
                Position_LCD_Cursor(0x00); // place cursosr at cell 0x00
                Write_LCD_String(State3);
                break;
            case S4: 
                LATBbits.LATB1 = 1; // set pin 5 (RB1) [G] to 1
                LATBbits.LATB2 = 0; // set pin 6 (RB2) [Y1] to 0
                LATBbits.LATB3 = 0; // set pin 7 (RB3) [Y2] to 0
                LATAbits.LATA4 = 0; // set pin 11 (RA4) [R] to 0
                Position_LCD_Cursor(0x00); // place cursosr at cell 0x00
                Write_LCD_String(State4);
                break;
        }
         __delay_ms(5000);
        ClrWdt(); // restart the watchdog timer
    }
    return 0;
}



