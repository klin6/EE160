
/*  File:	ops.h
    by:		Tep Dobry
    date:
*/

/*  This file contains the prototypes for funcitons in ops.c  */

#define ILLEGAL_OP(c)  (((c) != '+')&&((c) != '-')&&((c) != 'x')&&((c) != '/')\
                        && ((c) != '='))

char get_op(void);
/*  This function reads the operator character from the input
	and echos it to dispaly.  It checks the validity of the
	operator and returns it as a character.
*/

