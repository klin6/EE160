/* File : ops.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/8/17 
 * members: Minyoung Kim, Michael Lieu
*/

#include<stdio.h>
#include"ops.h"
#include"tfdef.h"

char get_op(void)
{
	char operator;
	
	/* get operator character */
	operator = getchar();
	
		
	/* check if it's valid then echo */
	if(ILLEGAL_OP(operator) == FALSE){
		return operator;
	}
	else{
		return FALSE;
	}
}	
			
	
