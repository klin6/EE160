/*      file:  leap.c 
 *      by:    Kylie Lin
 *      login:  link6
 *      date:   10/3/17
 *      team: Two teams
 *      members: Michael Lieu, Min young Kim
 */
#include "leap.h"

int is_leap(int year)
/* Given: a year
   Returns: TRUE is year is a leap year, FALSE otherwise
 */
{  
//int answer;
/* this the stub version of isleap().  it justs asks
	the user for the answer  */
//	printf("Is %d a leap year? (1 for yes, 0 for no):");
//	scanf("%d", &answer);
//	return answer;


// Write a program that uses a function to determine if a given year is a leap year. A year is a leap year if it is divisible by 400; or if it is divisible by 4 and it is not divisible by 100.


	if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		return TRUE;
	}else{
		return FALSE;
	}
}
