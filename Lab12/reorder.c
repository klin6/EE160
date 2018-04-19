/* File: reorder.c
 * By: Kylie Lin
 * Login: link6
 * Date: 11/16/17
 * Team: Two Teams
 */

#include "swap.h"
#include <stdio.h>
//#define DEBUG

int main()
{
        float a;
        float b;
        float c;
        int flag;

        printf ("Enter three float values:\n");
        
        while (scanf("%f %f %f", &a, &b, &c) != EOF)
        {
                reorder(&a, &b, &c);

                #ifdef DEBUG
                printf ("This is new a: %1.2f, new b: %1.2f, new c: %1.2f\n", a, b, c);
                #endif

                printf ("Enter three float values(EOF to quit):\n");
        }

}
