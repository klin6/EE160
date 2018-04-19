/*      File :  util.c          
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   11/13/17
*/

#include "util.h"
#include "exponent.h"
double factorial(double n){

	double c;
	double f = 1;
 
	for (c = 1; c <= n; c++){
		f = f * c;
 	}
	return f;

}



double close_enough(double newval,double lastval){

	double diff;
	diff=newval-lastval;
	if(diff<0){
		diff=diff*(-1);
	}
	if(diff<0.00005){
		return TRUE;
	}else if(diff>0.00005){
		return FALSE;
	}
}


