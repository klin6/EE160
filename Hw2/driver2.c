/*      file: driver2.c 
 *      by:    Kylie Lin
 *      login:  link6
 *      date:   10/3/17
 *      team: Two teams
 *      members: Michael Lieu, Min young Kim
 */
#include "days.h"

int main(){

	int month, year;

	printf("Give me a month: ");

	while(scanf("%i",&month) != EOF){

		printf("Give me a year: ");
		scanf("%i",&year);

		int days;
		days = days_in_month(month,year);
	
		printf("There are %i days in this month.\n", days);

		printf("Give me a month(EOF to quit): ");

	}

}
