/* File :  opnd2.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/8/17 
 * members: Minyoung Kim, Michael Lieu
*/

/*
 *this is opnd.c for driver2
 */

#define DISPLAY

#include<stdio.h>
#include"chrutil.h"
#include"exponent.h"
#include"display.h"
#include"tfdef.h"

int get_opnd(char ch)
{
        int b = 0, e = 0, dig = FALSE;
        float result;

        /*skip blank spaces */
        while(IS_WHITE_SPACE(ch))
                ch = getchar();

        /*gather value of base */
        while(IS_DIGIT(ch))
        {
                b = (b * 10) + dig_to_int(ch);
                write_debug(b);
                dig = TRUE;
                write_char(ch);
                ch = getchar();
                if(IS_DIGIT(ch) == FALSE && is_exp(ch) == FALSE)
	    {
                        write_message("Invalid operand!");
                        break;
                }
        }

        /*gather value of exponent */
        while(is_exp(ch))
        {
                e = (e * 10) + dig_to_int(exp_value(ch));
                write_debug(e);
                write_exp(exp_value(ch));
                ch = getchar();
                if(ch == '\n')
                        break;
                if(is_exp(ch) == FALSE && ch != '\n')
                {
                        write_message("Invalid exponent!");
                        break;
                }
        }

        /*if no exponent input */
        if(e == 0)
                return 1;


        /*calculate result */
        result = pos_power(b, e);
        write_debug(result);
        return result;
}



