/* File : driver4.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/8/17 
 * members: Minyoung Kim, Michael Lieu
*/
#include <stdio.h>
#include "presults.h"
#include "display.h"
#include "chrutil.h"

int main()
{
        // define variable
        int input;
	//prompt user
        printf("Enter Integers (EOF to quit): ");

        while((scanf("%d", &input)) != EOF)
        {

                printf("The number is: ");
		//print result
                put_result(input);

                putchar('\n');
        }
}



