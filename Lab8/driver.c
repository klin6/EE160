/*	File: driver.c
	by:   Tep Dobry
	date:
*/

/*  This file contains a test driver which reads a number in roman 
	numerals and prints it in decimal.  I uses the function
	get_roman() in roman.c
*/

#include <stdio.h>
#include "roman.h"

int main()
{  int number;

	/*  prompt for first roman number entry  */
	printf("Enter an number in roman numerals(EOF to quit): ");

	/*  while there are more numbers  */
	while((number = get_roman()) != EOF)
	{	printf("The number is %d\n",number);
		/* prompt for next number  */
		printf("Enter an number in roman numerals(EOF to quit): ");
	}
	/*  clean up screen  */
	printf("\n");
}
