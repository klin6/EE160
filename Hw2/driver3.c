/*      file: driver3.c  
 *      by:    Kylie Lin
 *      login:  link6
 *      date:   10/3/17
 *      team: Two teams
 *      members: Michael Lieu, Min young Kim
 */
#include "julian.h"

int main(){

	int day, month, year;

	printf("Give me a day: ");

	while(scanf("%i", &day) != EOF){

		int julian;

		printf("Give me a month: ");
		scanf("%i", &month);

		printf("Give me a year: ");
		scanf("%i", &year);

		julian = julian_date(day, month, year);

		printf("Julian date is %i\n",julian);

		printf("Give me a day(EOF to quit): ");


	}


}
