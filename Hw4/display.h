

/*	File:  display.h
	by:    Tep Dobry
*/

/*  This file contains the prototypes for useful funcitons in display.o
	library  */

#define MYFLUSH(c) while((((c) = getchar()) != '\n') && ((c) != 13));

void write_char(char);
/* This function is given a character and writes it to the display.
	The characters recognized to be written include the digits, '0'..'9',
	the operators, '+', '-', 'x', '/', and '=', the period, '.', and
	the special characters, 'q', ' ', '\n', and '\b'.  The
	special characters are explained in the documentation.
*/

void write_exp(char);
/* This function is given a character and writes it as an exponent to
	the dispaly.  The characters recognized to be written are
	the digits '0'..'9', and the minus sign, '-'.
*/

void write_message(char *);
/* This function is given a string which is written in the center
	of the top line of the display.  It also initializes the
	dispaly.
*/

void write_error(char *);
/* This function is given a string which is written to the bottom line
	of the display and causes the display to beep.
*/

void write_debug(int);
/* This function is given an integer which is written to the bottom line
	of the display to be used as debugging output in the program
*/
