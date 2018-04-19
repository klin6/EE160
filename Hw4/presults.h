
/*  File:	presults.h
    by:		Tep Dobry
    date:
*/

/*  This file contains prototypes for presults.c  */

#define BASE	10

void put_result(int ans);
/*  This function is given an integer and prints it to the dispaly
	one digit at a time.
*/

int sig_dig_value(int n, int wt);
/*  This function is given an integer and the current weight.  It
	returns the integer value of the most significant digit.
*/

int supress_msd(int n, int wt);
/*  This function is given an integer and the current weight.  It
	returns the integer with the most significant digit removed.
*/

int weight(int n);
/*  This function is given an integer.  It returns the weight (a power
	of 10) of the most significant digit.
*/

