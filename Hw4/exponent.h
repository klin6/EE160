
/*  File:	exponent.h
    by:		Tep Dobry
    date:
*/

/*  This file contains the prototypes for the functions in exponent.c  */

int is_exp(char ch);
/*  This function is given a character and returns true if it
	is a legal shifted exponent character, false otherwise.
*/

char exp_value(char ch);
/*  This function is given a legal shifted exponent character and converts
	it to its unshifted form, returning the cnverted character.
*/

float pos_power(float base, int exponent);
/*  This function is given a float base and integer exponent and
	raises the base to the exponent, returning the float result.
*/

