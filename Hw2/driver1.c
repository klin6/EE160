/*      file:  driver1.c 
 *      by:    Kylie Lin
 *      login:  link6
 *      date:   10/3/17
 *      team: Two teams
 *      members: Michael Lieu, Min young Kim
 */
#include "leap.h"
//this file hold the int main for is_leap
 int main()
{
	int year;
	int answer;
	
	printf("Give me a year: \n");
	scanf("%i",&year);

	while(year>0){

		answer = is_leap(year);

		if(answer == TRUE){
			printf("This is a leap year.\n");
		}else if(answer ==FALSE){
			printf("This is not a leap year.\n");
		}
		printf("Give me a year(0 to quit): \n");
		scanf("%i",&year);
	}return 0;
}
