/*      File :  trig.c          
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   11/13/17
*/


#include "exponent.h"
#include "util.h"
#include "trig.h"


double cosin(float value){


double sum=0;
int n=0;	//counter
float x;
float neg;
float denom;
float nprod;
float divide;
int check =FALSE;
double newsum;
double oldsum=0;

	while(check != TRUE){

		x=pos_power(value,2*n);
		neg=pos_power(-1,n);
		nprod=x*neg;
		denom = factorial(2*n);
		
		divide=nprod/denom;
		sum=sum+divide;
		
		newsum=sum;
		check=close_enough(newsum,oldsum);
		oldsum=newsum;
		n=n+1;

	}
	return newsum;
}
