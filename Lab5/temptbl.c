/*      File : temptbl.c        *
 *      By   :  Kylie Lin                *
 *      login:   link6               *
 *      team :   Two Teams               *
 *      Date :   10/1/17               */

#include<stdio.h>
//declare functions
float tocelsius(float fahrenheit);
int temptable(float start, float stop,float step);

int main()
{ 
	//declare variables
        float start, stop,step;
	int count;
	/*prompt user for starting and ending temperature in fahrenheit*/
        printf("Enter Start, Stop, and Step: \n");
	//print out table, quit at EOF
        while ( scanf("%f %f %f", &start, &stop, &step) != EOF){
        		temptable( start, stop, step);
			
			printf("Enter Start, Stop, and Step: \n");
			
        }
	return 0;
}
//function that converts the table out
int temptable ( float start, float stop,float step)
{
	/*  Given: starting and ending temperatures in degrees Fahrenheit
                    and a step size.
             
             The function prints a table of conversions from degrees
             Fahrenheit to degrees Celsius from start to at most stop
             in "step" degree F increments, one conversion per line.

             Returns: the number of table lines printed.
        */

        float far, cel;
	//count computation lines
	int count=0;
        far = start;
        cel = tocelsius(far);
        printf("Farenheit\tCelcius\n");
        printf("%.2f\t\t%.2f\n", far, cel);
 	//have negative step equal positive step
	if(step>0){
                step = step * (-1);
	}
	//table will not compute when step is smaller than 0.001
	if(step>0.001){
               printf("No table--step smaller than 0.001!");

	}
	//compute farenheit to celsius at every step, print conversions on table
	while ( far != stop)
        {
		far = far + step;
		count=count+1;
                cel = tocelsius(far);
           
                printf("%.2f\t\t%.2f\n", far ,cel);
	
                if (far == stop || far > stop){
                    return 1;
		
		}

	}
	//print count computed lines
	printf("Computed %d temperatures\n", count);
	return count;
}
//convert farenheit to celsius function
float tocelsius ( float fahrenheit)
{
        float y = ( fahrenheit - 32 ) * 5 / 9;
        return y;
}
