/*      File : temptbl.c        *
 *      By   :  Kylie Lin                *
 *      login:   link6               *
 *      team :   2 teams               *
 *      Date :   9/25/17               */

#include<stdio.h>

float tocelsius(float fahrenheit);
int temptable(float start, float stop);

int main()
{ 
        float start, stop;
	/*prompt user for starting and ending temperature in fahrenheit*/
        printf("Enter Start and Ending Temperatures\n");
        scanf("%f %f", &start, &stop);
	
        while ( start != stop ){
        		temptable( start, stop);
        		printf("Enter Start and Ending Temperatures\n");
       		scanf("%f %f", &start, &stop);

        }

        return 0;


}

int temptable ( float start, float stop)
{
        float far, cel;
      

        far = start;
        cel = tocelsius(far);
        printf("Farenheit\tCelcius\n");
        printf("%.2f\t\t%.2f\n", far, cel);
        while ( far != stop)
        {
                far = far + 5;
                cel = tocelsius(far);
                //x = x + 5;
                printf("%.2f\t\t%.2f\n", far ,cel);

                if ( far == stop || far > stop )
                {
                        return 1;
                }
        }

}

float tocelsius ( float fahrenheit)
{
        float y = ( fahrenheit - 32 ) * 5 / 9;
        return y;
}
