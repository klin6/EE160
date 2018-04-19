/*     file:   driver2.h 
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/26/17
 */

//define pass and fail macros
#include <stdio.h>

#define PASS(c)	((c) >= 'A' && (c) <='C')
#define FAIL(c)	((c) == 'D' || (c) == 'F')
//declare functions in driver2.c
char assign_grade(int score, int scale[]);
void check_scale(int scale[]);
