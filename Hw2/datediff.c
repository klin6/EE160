/*      file:  datediff.c 
 *      by:    Kylie Lin
 *      login:  link6
 *      date:   10/3/17
 *      team: Two teams
 *      members: Michael Lieu, Min young Kim
 */

#include <stdio.h>
#include "julian.h"
#define DEBUG

int main(){

	int day1, month1, year1;
	int day2, month2, year2;
	int one=0, two=0, datediff;
	int starty, startm=1;

	printf("Enter a start date (dd mm yyyy): ");

	while(scanf("%i %i %i",&day1,&month1,&year1) != EOF){


		printf("Enter a ending date(dd mm yyyy): ");
		scanf("%i %i %i",&day2,&month2,&year2);
	
		if(year1 == year2){
			if(month2>=month1){
				one=one+julian_date(day1,month1,year1);
 				two=two+julian_date(day2,month2,year2);
			}
			datediff=two-one;
		}	

		else if(year1<year2){
			if(is_leap(year1) != TRUE){
				one=one+(365-julian_date(day1,month1,year1));
#ifdef DEBUG
printf("one = %1\n",one);
#endif
			}
			else if(is_leap(year1) == TRUE){
				one=one+(366-julian_date(day1,month1,year1));
#ifdef DEBUG
printf("one = %1\n",one);
#endif
			}
			starty=year1+1;
			while(starty<year2){
				while(startm<=12){
					two=two+days_in_month(startm,starty);
#ifdef DEBUG
printf("two = %i\n",two);
#endif
					startm=startm+1;
					}
				starty++;
			}
		two=two+julian_date(day2,month2,year2);
		datediff=one +two;
		}
		
		else if(year1>year2){
			one=one+julian_date(day1,month1,year1);
			starty=year1-1;
			while(starty>year2){
				while(startm<=12){
					one=one+days_in_month(startm,starty);
					startm++;
				}
			starty--;
			}
			if(is_leap(year2) != TRUE){
				two=two+(365-julian_date(day2,month2,year2));
			}else if(is_leap(year2) == TRUE){
				two=two+(366-julian_date(day2,month2,year2));
			}
			datediff=one+two;
		}
		
		printf("From day:%i month:%i year:%i\n",day1,month1,year1);
		printf("To day:%i month: %i year:%i\n",day2,month2,year2);

		printf("there are %i days\n",datediff);

		printf("Enter a start date (dd mm yyyy)(EOF to quit): ");

	}

}




