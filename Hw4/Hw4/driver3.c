/* File : driver3.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/8/17 
 * members: Minyoung Kim, Michael Lieu
*/

#include<stdio.h>
#include"ops.h"
#include"compute.h"
#include"tfdef.h"

int main()
{
	int operand1, operand2;
	char operator;
	
	// prompt user for 2 operands and one operator
	printf("Enter first operand, operator, second operand: ");

	while(scanf("%d", &operand1) != EOF)
	{
			
		// get operator
		operator = get_op();
	
		// get second operand
		scanf("%d", &operand2);

		// check compute and print
		if(compute_result(operand1, operator, operand2) != FALSE) 
			printf("The answer is: %d\n", compute_result(operand1, operator, operand2));
		else
			printf("Error, invalid operator\n");
		
		//prompt again
		printf("Enter first operand, operator, second operand:");
	}
	//clean screen
	printf("\n");	

}	
