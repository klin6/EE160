/*      File :  driver1.c          
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   11/13/17
*/

//Write a function, cos(x), using the expansion below and use it in a program to find the cosine of values read until EOF. 

#include "trig.h"
#define PI 3.141592654
#include "util.h"
int main(){
	
	//declare variables
	float value;
	float cosine;
	float radian;
	int remain;
	int recal;

	//prompt user
	printf("Enter the cosine value: \n");

	while( scanf("%f",&value) != EOF){
		//change value into degree if greater than 360 and less than -360
		if(value > 360 || value < -360){
			remain=value/360;
			recal=360*remain;
			value=value-recal;
		}

		//convert degree into radian
		radian=value*(PI/180);

		//find cosine of value
		cosine = cosin(radian);
		//print result
		printf("The cosine of %f is %f\n",value,cosine);
                
		printf("Enter the cosine value(EOF to quit): \n");
	}
}
