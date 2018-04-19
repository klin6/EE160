/*      File :  driver1.c          
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   10/10/17
*/

#include "maxmin.h"

int main(){

	//declare variables
	float n1,n2;
	float Maxi,Mini;

	//prompt user
	printf("Give me a float: ");
	

	while(scanf("%f",&n1) != EOF){

		printf("Give me another float: ");
		scanf("%f", &n2);
		
		//use functions for max and min
		Maxi=max(n1,n2);
		Mini=min(n1,n2);
		
		//print out max and min
		#ifdef DEBUG
		printf("The maximum is %f\n",Maxi);
		printf("The minimum is %f\n",Mini);
		#endif

		printf("Give me a float(EOF to quit): ");

	}

}
