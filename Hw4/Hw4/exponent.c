
/* File	: exponent.c
 * By	: Kylie Lin
 * Login: link6
 * team	: Two Teams
 * date	: 12/8/17 
 * members: Minyoung Kim, Michael Lieu
*/

/* Functions revolving around exponents */

#include "tfdef.h"

int is_exp(char ch)
{
        switch(ch)
        {
                case '!':
                case '@':
                case '#':
                case '$':
                case '%':
                case '^':
                case '&':
                case '*':
                case '(':
                case ')': return TRUE;
                default: return FALSE;
        }
}

char exp_value(char ch)
{
        switch(ch)
        {
                case '!': return '1';
                case '@': return '2';
                case '#': return '3';
                case '$': return '4';
                case '%': return '5';
                case '^': return '6';
                case '&': return '7';
                case '*': return '8';
                case '(': return '9';
                case ')': return '0';


        }
}

float pos_power(float base, int exponent)
{
	float value = 1.0;
        while (exponent > 0)
        {
                value = value * base;
		exponent -= 1;
        }
        return value;
}
