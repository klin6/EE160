#include <stdio.h>

float tocelsius(float fahrenheit);
int temptable(float start, float stop,float step);

int main()
{
        float start, stop,step;
        int count;
        /*prompt user for starting and ending temperature in fahrenheit*/
        printf("Enter Start, Stop, and Step: \n");

        while ( scanf("%f %f %f", &start, &stop, &step) != EOF){
                        count=temptable( start, stop, step);
                        printf("Computed %d temperatures\n", count);
                        printf("Enter Start, Stop, and Step: \n");

        }
        return 0;
}





int temptable ( float start, float stop,float step)
{
        /*  Given: starting and ending temperatures in degrees Fahrenheit
                    and a step size.
             
             The function prints a table of conversions from degrees
             Fahrenheit to degrees Celsius from start to at most stop
             in "step" degree F increments, one conversion per line.

             Returns: the number of table lines printed.
        */
	
	float c;
	int count=0;

	if(step<0){
                step = step * (-1);
       
        if(step> 0.001){
                if(start <= stop){
                        while(start <= stop){
                                c=tocelsius(start);
                                printf("%.2f\t\t%.2f\n",start ,c);
                                start = start + step;
                                count=count+1;
                        }
                }
        }else{
                while(start >= stop){
                        c=tocelsius(start);
                        printf("%.2f\t\t%.2f\n",start ,c);
                        start = start + step;
                        count=count+1;
                }
} }//   else
//		printf("No table--step smaller than 0.001!\n");

	return count;
}



float tocelsius ( float fahrenheit)
{
        float y = ( fahrenheit - 32 ) * 5 / 9;
        return y;
}

