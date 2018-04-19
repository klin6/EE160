/*      File : sum.c            *
 *      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : Two Teams                 *
 *      Date : 9/28/17                 */

/*  A program to compute the sum of numbers given on the input  */
#include <stdio.h>

int main()
{

        /*  Initialize the sum             */
	int sum=0;
	int num;
	/*  Get the first input            */
	printf("Enter an integer value: ");

        /*  While there is more input      */
	while(scanf("%d",&num) != EOF){

                /*  Accumulate the sum     */
		sum=sum+num;
	
                /*  Get the next input     */
		printf("Enter an integer value(EOF to quit): ");

	
	}
        /*  Print the results              */
	printf("The sum is %d.\n",sum);

}
