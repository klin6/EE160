/*      File : averager.c       *
 *      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : Two Teams                 *
 *      Date : 11/6/17                 */

/*
 * Read in a number of values to read and then print the average
 * of those values.
 */

#define IS_DIGIT(c)   ((c) >= '0' && (c) <= '9')
#define IS_CHAR(c) ((c) >= 'a' && (c) <= 'z')
#include <stdio.h>
#include "tfdef.h"
int main()
{
//declare variables
  int expected;
  int count;
  double sum;
  int value;
  char c,v;
int error;
	while (scanf("%d", &expected) != EOF){


		//change into type char
		c=(char) expected;  
		//check if expected is a character
		if(IS_CHAR(c) == TRUE)
		{	
			//its a garbage input
			printf("Error!  Can't read number of expected values\n");
		}

		else{
			sum = 0;
			error=0;
                	for (count = 0; count < expected; count++){
                        	scanf("%d", &value);	//scan inputted values
			
				v=(char)value;	//change value into a character
                        	if(IS_CHAR(v)!=TRUE){
					sum += value;	//add up all values
				}
				else{
					error += 1;	//count errors
				}	
               		 }
			//print the errors in value
                	if(error>=1){
			printf("Error!  Can't read expected value %d\n",error);
			}
			//calculate and print average
			printf("Average of %d values is %.2f\n",
                       	count, count != 0 ? sum / count : 0.0);
		}
	}
}
