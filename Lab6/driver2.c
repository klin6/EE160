/*      File :  driver2.c          
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   10/10/17
*/

#include "maxmin.h"

int main(){

	//declare variable
        float n1, n2;
        float maxim,minum;

        printf("Give me a float: ");
        scanf("%f",&n1);

	//initialize max and min
	maxim=minum=n1;

        printf("Give me another float: ");
        while(scanf("%f", &n2) != EOF){

		//find max and min and continue comparing new numbers every loop
                maxim=max(maxim,n2);
		minum=min(minum,n2);

                printf("Give me another float(EOF to quit): \n");

        }

        printf("The maximum is %f\n",maxim);
        printf("The minimum is %f\n",minum);

}
