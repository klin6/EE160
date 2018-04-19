/*  File: driver.c
    by:   Terry Pham
    login: pham2
    date: 1 March 2017
*/

/*  This file contains a test driver which reads a number in roman 
    numerals and prints it in decimal.  I uses the function
    get_roman() in roman.c
*/

#include <stdio.h>
#include "roman.h"
#include "romanutil.h"
#include "tfdef.h"
#include "chrutil.h"

int main()
{  int number;

    /*  prompt for first roman number entry  */
    printf("Enter an number in roman numerals(EOF to quit): ");

    /*  while there are more numbers  */
    while(number = get_roman() != EOF)
    {
        if (is_roman(number) == TRUE)
        {
        printf("The number is %d\n",number);
        /* prompt for next number  */
        printf("Enter an number in roman numerals(EOF to quit): ");
        }

        else if(is_roman(number) == FALSE)
        {
            printf("ERROR: NOT A VALID ROMAN NUMERAL");
        	while(getchar() != '\n');//flush
	}
    }
    /*  clean up screen  */
    printf("\n");
}
