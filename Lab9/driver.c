/*     file:  driver.c  
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/26/17
 */

#include "driver.h"
//letter grade given for certain range of grades
char assign_grade(int score){

	if(score <= 100 && score >=90)      return 'A';
	if(score <=89 && score >= 80) return 'B';
	if(score <= 79 && score >= 70) return 'C';
	if(score<=69 && score >= 60) return 'D';
	if(score <= 69 && score >= 0) return 'F';

}
