/*      File : mygrader2.c         *
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/26/17
 */
/*  A program to assign letter grades to scores  */

#include "driver2.h"
//#define DEBUG

int main()
{
	//initialize variables
	int score;
	char grade;
	int scale[6];
	int pass =0;
	int fail =0;
	int illegal =0;
	scale[0]=100;
	scale[5]=0;
	
	printf("Enter grading scale:");
	scanf("%d %d %d %d", &scale[1], &scale[2], &scale[3], &scale[4]);

	//print debug
	#ifdef DEBUG
	printf("debug: GRADING SCALE: %d %d %d %d %d %d\n", scale[0], scale[1], scale[2], scale[3], scale[4], scale[5]);
	#endif

	check_scale(scale);      
	while(scanf("%d", &score) == 1){
		printf("%d: ", score);
		if(score <= 100 && score >=0){ 
			grade = assign_grade(score, scale);
			printf("%c\n", grade);

			//count pass or fail
			if(PASS(grade)) pass++;
			if(FAIL(grade)) fail++; 
		}		
		// count illegal scores
		else{
			printf("illegal score \n");
			illegal++; 
		}   
	}	
	//print total grades
	printf("Passing Scores: %d\n", pass);
	printf("Failing Scores: %d\n", fail);
	printf("illegal scores: %d\n", illegal);

}
