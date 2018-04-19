/*      File : swap.c           *
 *      By   : Kylie Lin                  *
 *      login: link6                 *
 *      team : Two Teams                 *
 *      Date : 11/16/17                 */

/*
 *  A function to swap floating point values using pointers.
 */

#include <stdio.h>
#include "swap.h"

//#define DEBUG


void swap( float *x, float *y)
/* Given: pointers to two floating point variables
   Returns: nothing directly, swaps values at the two adresses given
 */
{
   float temp;

	#ifdef DEBUG
	printf("\tEntering sawp() with\n");
	printf("\t\tx is address = %x, contents %f\n", x, *x);
	printf("\t\ty is address = %x, contents %f\n", y, *y);
	#endif

	/* save first value  */
	temp = *x;

	/* move second value to first  */
	*x = *y;

	/* restore first value to second */
	*y = temp;

	#ifdef DEBUG
	printf("\tExiting sawp() with\n");
	printf("\t\tx is address = %x, contents %f\n", x, *x);
	printf("\t\ty is address = %x, contents %f\n", y, *y);
	#endif

}

void swap_big(float *a, float *b)
{
        #ifdef DEBUG
        printf ("This is a (address): %x, *a: %1.2f\n", a, *a);
        printf ("This is b (address): %x, *b: %1.2f\n", b, *b);
        #endif

        if (*a > *b) //if the value a is greater than value b
        {
        	swap(&*a,&*b); //swap so a is smaller
        }
}
void reorder(float *a, float *b, float *c)
{
        swap_big(&*a, &*b); //make a lower value than b
        swap_big(&*a, &*c); //make a lower value than c
        swap_big(&*b, &*c); //make b lower value than c
}
