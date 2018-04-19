/*      File : avg.c            *
 *      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : Two Teams                 *
 *      Date : 9/28/17                 */

/*  A program to compute the varage of a sum of numbers given on the input  */
#include <stdio.h>

int main()
{

        /*  Initialize the sum             */
        int sum=0;
        int num;
	int n=0;
	/* declare average */
	float avg;
        /*  Get the first input            */
        printf("Enter an integer value: ");

        /*  While there is more input      */
        while(scanf("%d",&num) != EOF){

                /*  Accumulate the sum     */
		/* count inputs given */
                sum=sum+num;
		n++;
                /*  Get the next input     */
                printf("Enter an integer value(EOF to quit): ");


        }
        /* calculate for average*/
	/*  Print the results              */
	avg=sum/n;
        printf("\nThe average of %d inputs is %f\n",n,avg);

}
