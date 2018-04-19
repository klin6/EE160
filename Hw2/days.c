/*      file: days.c  
 *      by:    Kylie Lin
 *      login:  link6
 *      date:   10/3/17
 *      team: Two teams
 *      members: Michael Lieu, Min young Kim
 */

#include "days.h"

int days_in_month(int month, int year)
/* Given: a month and year year
   Returns: the number of days in that month.
 */
{  
/* this the stub version of days_in_month().  it just
	always returns the same answer, 30  */
 
//	#ifdef DEBUG
//	printf("debug:Enter days_in_month: month = %d, year = %d\n",
//		month, year);
//	#endif

//	#ifdef DEBUG
//	printf("debug:Exit days_in_month: stub says 30\n");
//	#endif

//	return 30;

	int dim;
	
	if(month == 4 || month == 6 || month == 9 || month == 11){
		dim = 30;
	}else if(month == 2){
		int leapyr = is_leap(year);
		if(leapyr){
			dim = 29;
		}else{
			dim = 28;
		}
	}

	else{
		dim = 31;
	}return dim;
}




