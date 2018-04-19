/* File :  opnd.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/8/17 
 * members: Minyoung Kim, Michael Lieu
*/

/*
 * opnd.2 is for driver2
 *this is opnd.c for calc
 */

#include<stdio.h>
#include"chrutil.h"
#include"exponent.h"
#include"display.h"
#include"tfdef.h"

#define DISPLAY
int get_opnd(char ch)
{
        int b = 0, e = 0;
        float result;

        /* skip blank spaces */
        while(IS_WHITE_SPACE(ch))
                ch = getchar();

        /* gather value of base */
        while(IS_DIGIT(ch))
        {
                b = (b * 10) + dig_to_int(ch);
                #ifdef DISPLAY
                write_char(ch);
                #else
                putchar(ch);
                #endif
                ch = getchar();
                if(IS_DIGIT(ch) == FALSE && is_exp(ch) == FALSE)
                        #ifdef DISPLAY
			write_message("Invalid operand!");
			#else
			printf("Invalid operand!");
			#endif

        }

        /* gather value of exponent */
        while(is_exp(ch))
        {
                e = (e * 10) + dig_to_int(exp_value(ch));
                #ifdef DISPLAY
                write_exp(exp_value(ch));
                #else
                putchar(ch);
                #endif
                ch = getchar();
        }

        /* if no exponent input */
        if(e == 0)
                e = 1;

        /* calculate result */
        result = pos_power(b, e);

        return result;
}





