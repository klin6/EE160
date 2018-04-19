/* File :  calc.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/8/17 
 * members: Minyoung Kim, Michael Lieu
*/

#include <stdio.h>
#include "display.h"
#include "exponent.h"
#include "opnd.h"
#include "chrutil.h"
#include "compute.h"
#include "tfdef.h"
#include "ops.h"
#include "presults.h"

int main(){

	char ch, operator;
	int operand1, operand2, result;
	
	//get first char 
	write_message("Input Calculation");
	
	while((ch = getchar()) != 'q'){
		//get the first operand 
		operand1 = get_opnd(ch);
			
		//get the operator
		if((operator = get_op()) == 0)
			break;

		result = operand1;
	
		while(operator != '='){
			//get second operand
			operand2 = get_opnd(ch = getchar());
			if(ch == 'q')
				break;
					
			//get calculation
			result = compute_result(result, operator, operand2);
			write_debug(result);
	
			//get the next operator
			if((operator = get_op()) == 0)
				break;
			
		}
	 	//printresult
 		put_result(result);	

		//get the first character of the next line
		write_message("Input Calculation");
	}
}
