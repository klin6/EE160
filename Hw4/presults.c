/*  File:       presults.c
 *      by:         Tep Dobry
*/

/*  This file contains the code to convert an integer into a
 *          sequence of characters and print them.  The code uses
 *                  conditonal compilation to determine whether or not to
 *                          use the calculator display.
 *                          */

/* define for use without the display */
//#define DISPLAY 
 

#include <stdio.h>
#include "presults.h"
#include "display.h"
#include "chrutil.h"

void put_result(int ans)
/*  This function is given an integer and prints it one digit at a time
 *          either to the calc display or the stdout.
 *          */
{  int wt;      /*  the weight of the msd  */

        /*  if the integer is 0, print it and return  */
        if(ans == 0)
        {
                #ifdef DISPLAY
               	write_char('0');
                #else
                putchar('0');
                #endif
                return;
        }
        /*  if the integer is negative, print the '-' and make it pos.  */
        if(ans < 0)
 {
                #ifdef DISPLAY
                write_char('-');
                #else
                putchar('-');
                #endif
                ans = -ans;
        }
        /*  find the weight of the msd  */
        wt = weight(ans);
        /*  while there are more digits  */
        while(wt >= 1)
        {       /*  get msd, convert to char, and print it  */
                #ifdef DISPLAY
                write_char(int_to_dig(sig_dig_value(ans,wt)));
                #else
                putchar(int_to_dig(sig_dig_value(ans,wt)));
                #endif
                /*  strip the msd  */
                ans = supress_msd(ans,wt);
                /*  go on to next weight  */
                wt = wt / BASE;
        }

}


int sig_dig_value(int n, int wt)
/*  This function is given and integer and the current weight.  It
 *          returns the integer value of the most significant digit.  */
{  return n/wt; }

int supress_msd(int n, int wt)
/*  This function is given an integer and the current weight.  It
 *          returns an integer with the most significant digit removed.  */
{  return n % wt;  }

int weight(int n)
/*  This function is given an integer.  It returns the weight  (a power
 *          of 10) of the most significant digit.  */
{  int wt = 1;

        while((n/wt) != 0)
                wt = wt * BASE;

        wt = wt / BASE;
        return wt;
}
