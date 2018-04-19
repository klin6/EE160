/*      File :  exponent.c          
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   11/13/17
*/

#include "exponent.h"


float pos_power(float base, int exponent){

	//initialize variable
	float value=1.0;

	//debug print lines
	#ifdef DEBUG
	printf("debug:Enter pos_power: base = %f exponent= %d\n", base, exponent);
	#endif		

	while(exponent > 0){

		//multiply base to itself at exponent amount
		value = value * base;
		exponent = exponent-1;
		//return 0 when exponent is negative
		if(exponent < 0){
			return 0;
		}
		//debug print result
		#ifdef DEBUG
		printf("debug:Exit pos_power: result = %f\n", value);		
		#endif

	}
	return value;

}
