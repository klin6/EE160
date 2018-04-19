/*     file:  driver2.c  
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/26/17
 */


#include "driver2.h"
//function for return letter grade 
char assign_grade(int score, int scale[]){

	if(score <= scale[0] && score >= scale[1]) return 'A';
	if(score <= scale[1] && score >= scale[2]) return 'B';
	if(score <= scale[2] && score >= scale[3]) return 'C';
	if(score <= scale[3] && score >= scale[4]) return 'D';
	if(score <= scale[4] && score >= 0) return 'F';

}
//function to check if valid grade scale or not
void check_scale( int scale[]){
	int valid = 0;
	int i=0;
	while(i < 5){
		if(scale[i] < scale[i+1]){
			valid = valid +1;
		}
		i++;
	}	
	if(valid!=0){
		printf("invalid grading scale\n");
	}
}

