/*     file: driver1.c
        by:      Kylie Lin
        login:   link6
        date:    11/23/17
        team:    Two Teams
*/
#include "averages.h"

int main()
{

  double table[MAXVALS];     /* array to hold input values */
  int n;                     /* number of values in "table" */
  double average;            /* average input value */
  int equal;                 /* number of values the same as average */
  int less;
  int greater;

        n = tableFill(table, MAXVALS);

	//calculate and print the average of values
        average = tableAverage(table, n);
        printf("Average of the %d values read is: %lf\n", n, average);

	//find and print the values equal to the average
        equal = tableMatchingElements(table, n, average);
        printf("There are %d values equal to the average.\n", equal);

	//find and print the values bigger than the average
	greater = bigger_element(table,n,average);	
        printf("There are %d values greater to the average:\n",greater);
        print_if_larger(table, n, average);

	//find and print the values less than the average
	less = smaller_element(table,n,average);
        printf("There are %d values less to the average:\n",less);
        print_if_smaller(table, n, average);
}
