/*     file: meter.c
        by:      Kylie Lin
        login:   link6
        date:    11/23/17
        team:    Two Teams
*/

#include "meter.h"

//define function to computes the water usage for each hourly interval and returns the average usage for the day and the highest water usage value
float compute_usage(int num, int *vals, int use[], int *hi_idx){

	float sum=0;
	float avg;
	int higher=0;

	for(int i = 0; i<(num-1); i++){
		use[i]=vals[i+1] - vals[i];

		sum=sum+use[i];

		if(use[i]> higher){
			higher=use[i];
			*hi_idx=1;
		}
	}
	avg=sum/(num-1);
	return avg;
}




