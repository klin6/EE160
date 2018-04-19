#include <stdio.h>
 
float tocelsius(float F);
int temptable(float start, float stop, float step);
 
int main()
{  float F,
         F_start,
         F_stop,
         step,
         flag;
 
        /* Initialize loop condition */
        /* Get the temperatures and step size */
        printf("Enter start, stop, and step: ");
        flag = scanf("%f %f %f", &F_start, &F_stop, &step);
 
        /* While the temperature is within set values */
        while( F_start > -459 && F_stop > -459 && flag != EOF )
        {
            /* If the temperature is greater than -459 degrees F */
            if( step > 0 )
            {   /* Print the result */
                printf("\n Fahrenheit \t Celsius\n");
                temptable(F_start, F_stop, step);
            }
 
            else
            {
                printf("\n Fahrenheit \t Celsius\n");
                temptable(F_start, F_stop, -step);
            }
 
            /* Update loop condition */
            /* Get the temperatures and step size */
            printf("Enter start, stop, and step: ");
            flag = scanf("%f %f %f", &F_start, &F_stop, &step);
        }
 
        if( flag == EOF )
        {
        printf("\nProgram terminated\n");
        }
 
}
 
 
float tocelsius(float F)
/*  Given: a temperature reading in degrees Fahrenheit
 *  Returns: the temperature in degrees Celsius
*/
 
{  float tocelsius;
 
        /* Compute temperature into degree Celsius */
        tocelsius = (F-32) * 5.0 / 9.0;
 
        /* Return the value */
        return tocelsius;
}
 
int temptable(float F_start, float F_stop, float step)
/*  Given: starting and ending temperatures in degrees Fahrenheit
           and a step size.
         
    The function prints a table of conversions from degrees
    Fahrenheit to degrees Celsius from start to at most stop
    in "step" degree F increments, one conversion per line.
    
    Returns: the number of table lines printed.
*/
 
{   float F,
          C;
    int lines;
 
        F = F_start;
 
        while( F != F_stop)
        {
             C = tocelsius(F);
             printf("   %4.2f \t  %4.2f\n", F, C);
 
             if( F > F_stop )
             {
                F = F - step;
                lines = 1 + (F_start - F_stop) / step;
             }
 
             else
             {
                F = F + step;
                lines = 1 - (F_start - F_stop) / step;
             }
        }
 
        /* Print Table Lines */
        printf("Computed %d temperatures\n\n", lines);
 
        return lines;
}
