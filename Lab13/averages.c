/*     file: averages.c
        by:      Kylie Lin
        login:   link6
        date:    11/23/17
        team:    Two Teams
*/
/*
 * A program to read values, compute their averages, and to print
 * the values greater than or less than the average.
 */
#include "averages.h"

int tableFill(double a[], int max)
{
  double next;              /* next input value */
  int r;                    /* return from trying to read values */
  int cnt = 0;              /* count of values read */

	while ((r = scanf("%lf", &next)) != EOF)
	{
		if (r != 1)		 /* bad return from scanf */
		{
			printf("Error in the input after reading %d values.\n",
				cnt);
			break; 
		}
		if (cnt == max)		 /* no room to store this value */
		{
			printf("Array full after reading %d values.\n", cnt);
			break;
		}
		a[cnt++] = next;	/* save element in array */
	}
	return cnt;
}

void tablePrint(double a[], int num) 
{              
  int i;

	for (i = 0; i < num; i++)
		printf("%f\n", a[i]);
}

double tableAverage(double a[], int num)
{
	int i;
	double sum = 0;
	double avg;
	
	for(i=0;i<num;i++){
		sum = sum + a[i];
	}
	avg = sum / num;

	return avg;	
}

int tableMatchingElements(double a[], int num, double target)
{
        /* number of values equal to the target */
	double check;
	int equal=0;
	double dif=0;

	for(int i=0;i<num;i++){
		dif=a[i]-target;
		if(dif<0){
			dif=dif*(-1);
		}
		if(dif<0.00001){
			equal++;
		}
	}
	return equal;

}

void print_if_larger(double a[], int num, double target){

	for(int i = 0; i<num;i++){
		if(a[i]>target){
		printf("%.2lf\n",a[i]);	
		}
	}
}

void print_if_smaller(double a[], int num, double target){

	int check=FALSE;
	int dif;

	for(int i = 0; i<num;i++){
		dif=a[i]-target;
		if(dif<0){
			dif=dif * (-1);
		}
		if(dif<0.00001){
			check=TRUE;
		}
		else{
			check=FALSE;
		}

		if(a[i]<target && check == FALSE){
			printf("%.2lf\n",a[i]);
		}
	}

}

int bigger_element(double a[], int num, double target){

	int bigcount=0;
	int dif;
	for(int i=0;i<num;i++){
		dif=a[i]-target;
		if(dif<0){
			dif=dif*-1;
		}
		if(dif > 0.00001 && a[i] > target){
			bigcount++;
		}
	}
	return bigcount;
}

int smaller_element(double a[], int num, double target){
	int smallcount=0;
	int dif;
	for(int i=0;i<num;i++){
		dif=a[i]-target;
		if(dif<0){
			dif=dif*-1;
		}
		if(dif > 0.00001 && a[i] < target){
                        smallcount++;
                }
        }
        return smallcount;
}

