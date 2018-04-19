/*      File : weight.c            *
*      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : Two Teams                 *
 *      Date : 9/28/17                 */

/*  A program to compute the weight average given on the input  */
#include <stdio.h>

int main()
{

        /*  Initialize the sum,weight,value, sum of pairs     */
        int sum=0;
        int value;
	int weight;
	int product;
	int psum=0;
	int n=0;
        /* declare weight average */
       	float wavg;
        /*  Get the first input            */
        printf("Enter an weight/value: ");

        /*  While there is more input      */
        while(scanf("%d %d",&weight ,&value) != EOF){

                /*  Accumulate the sum     */
		/* calculate sum of pairs */
                /* count inputs given */
                sum=sum+weight;
		product=weight*value;
		psum=psum+product;
		n++;
		 /*  Get the next input     */
                printf("Enter an weight/value: ");


        }
        /* calculate for weight average*/
        /*  Print the results              */
        wavg=psum/sum;
        printf("\nThe weighted average of %d inputs is %f\n",n,wavg);

}
