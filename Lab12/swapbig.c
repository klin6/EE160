/* File: swapbig.c
 * By: Kylie Lin
 * Login: link6
 * Date: 11/16/17
 * Team: Two Teams
 * /

/* A test driver for testing the swapBig() function */

#include "swap.h"
#include <stdio.h>
//#define DEBUG

int main()
{
        float a;
        float b;
        int flag;

        printf ("Enter two float values: \n");

        while (scanf ("%f %f", &a, &b) != EOF)
        {
                swap_big(&a, &b);


                printf ("This is new a: %1.2f, new b: %1.2f\n", a, b);

                printf ("Enter two float values(EOF to quit): \n");
        }
}
