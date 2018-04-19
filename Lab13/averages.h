/*     file: averages.h
        by:      Kylie Lin
        login:   link6
        date:    11/23/17
        team:    Two Teams
*/
#include <stdio.h>
//define macros
#define MAXVALS 100       /* max number of values we can process */

#define TRUE 1
#define FALSE 0
//declare functions
int tableFill(double a[], int max);
void tablePrint(double a[], int num);
double tableAverage(double a[], int num);
int tableMatchingElements(double a[], int num, double target);


void print_if_larger(double a[], int num, double target);
void print_if_smaller(double a[], int num, double target);

int bigger_element(double a[], int num, double target);
int smaller_element(double a[], int num, double target);
