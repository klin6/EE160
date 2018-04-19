/* File : compute.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/8/17 
 * members: Minyoung Kim, Michael Lieu
*/

#include<stdio.h>
#include"tfdef.h"

int compute_result(int opnd1, char op, int opnd2)
{
	switch(op){
		case '+':
			return opnd1 + opnd2;
		case '-':
			return opnd1 - opnd2;
		case 'x':
			return opnd1 * opnd2;
		case '/':
			return opnd1 / opnd2;
		case FALSE:
			return FALSE;
		default: break;
	}
			
}
