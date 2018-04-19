/*      file:  julian.c 
 *      by:    Kylie Lin
 *      login:  link6
 *      date:   10/3/17
 *      team: Two teams
 *      members: Michael Lieu, Min young Kim
 */
#include "julian.h"

int julian_date(int day, int month, int year)
/* Given: a day, month and year year
   Returns: the julian date for that day.
 */
{  
/* this the stub version of julian_date().  it just
	always returns the same answer, 31 (31 Jan of any year)  */
 
//	#ifdef DEBUG
//	printf("debug:Enter julian_date: day = %d, month = %d, year = %d\n",
//		day, month, year);
//	#endif

//	#ifdef DEBUG
//	printf("debug:Exit julian_date: stub says 31\n");
//	#endif

//	return 31;
		
//}

	int jd=0;
	int startm=1;

	if(is_leap(year) == TRUE){
		while(startm < month){
			jd = jd + days_in_month(startm, year);
			startm = startm + 1;
		}
		jd = jd + day;
	}else{
		while(startm < month){
                        jd = jd + days_in_month(startm, year);
                        startm = startm + 1;
                }
                jd = jd + day;
	}return jd;

}
