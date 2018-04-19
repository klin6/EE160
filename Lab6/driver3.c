/*      File :  driver3.c          
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   10/10/17
*/



/*Write a function which returns the value of base raised to a positive exponent 
 * For example if base is 2.0 and exponent is 3.0 the function should return 8.0  
If the exponent is negative the function should return 0.
*/
#include "exponent.h"

int main(){

	//declare varibles
	float base;
	int exponent;	

	float power;
	
	//prompt user
	printf("Give me a base: ");
	while(scanf("%f",&base) != EOF){

		printf("Give me a exponent: ");
		scanf("%d", &exponent);
	
		//use function for power value
		power=pos_power(base,exponent);
	
		printf("The power is %f\n",power);	

		printf("Give me a base(EOF to quit): ");
	}

}
