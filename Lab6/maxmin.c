/*      File : maxmin.c           
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   10/10/17
*/

#include "maxmin.h"

//write maximum and minimum functions
float max(float n1, float n2){
	
	float MAX;
		//compare for maximum
		if(n1>n2){
			MAX=n1;
		}else if (n1<n2){
			MAX=n2;
		}return MAX;



}


float min(float n1, float n2){

	float MIN;
		//compare for minimum
		if(n1<n2){
			MIN=n1;
		}else if(n1>n2){
			MIN=n2;
		}return MIN;
	

}
