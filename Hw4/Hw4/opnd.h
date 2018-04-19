
/*  File:       opnd.h
    by:         Tep Dobry
    date:
*/

/*  This file contains the prototypes for funcitons in opnd.c  */


int get_opnd(char ch);
/*  This function is given the first character of an operand.  It
	reads the remaining characters of the operand and converts
	it to internal integer form.  Operands may be a sequence of
	digit characters or a sequence of digits (the base) followed
	by a sequence of exponent characters, in which case get_opnd()
	computes the base to the exponent as its result.  All characters
	are echoed to the display using Display Module routines.
*/

