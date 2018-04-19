/* File: chrutil.c 
*/

/*   This file contains various utility functions for processing characters  */

#include <stdio.h>
#include "tfdef.h"
#include "chrutil.h"

/*   Function converts ch to an integer if it is a digit. Otherwise, it
     prints an error message.
*/
int dig_to_int(char ch)
{
     if (IS_DIGIT(ch))
          return ch - '0';
     printf("ERROR:dig_to_int:  %c is not a digit\n", ch);
     return ERROR;
}

/*   Function converts a positive integer less than 10 to a corresponding
     digit character.
*/
char int_to_dig(int n)
{
     if (n >= 0 && n < 10)
          return n + '0';
     printf("ERROR:int_to_dig:  %d is not in the range 0 to 9\n", n);
     return '\0';
}



/*  Function reads the next integer from the input  */
int getint()
{    int n = 0;
     int got_dig = FALSE;
     signed char ch;


     ch = getchar();                     /* read next char                  */
     while (IS_WHITE_SPACE(ch))          /* skip white space                */
              ch = getchar(); 
     while (IS_DIGIT(ch)) {              /* repeat as long as ch is a digit */
          n = n * 10 + dig_to_int(ch);   /* accumulate value in n           */
          got_dig = TRUE;
#ifdef DEBUG
printf("debug:getint: ch = %c\n", ch);   /* debug statement */
printf("debug:getint: n = %d\n", n);     /* debug statement */
#endif
          ch = getchar();                /* read next char                  */
     }
     if(ch == EOF) return EOF;           /* test for end of file            */
     if(!got_dig)  return ERROR;         /* test for no digits read         */
     return n;                           /* otherwise return the result     */

}

/* Function tests if c is an alphabetic letter. */
int letterp(char c)
{
     if (IS_LOWER(c) || IS_UPPER(c))
          return TRUE;
     return FALSE;
}


/*   Function returns TRUE if c is a delimiter, i.e., it is a white space
     or a punctuation. Otherwise, it returns FALSE.
*/
int delimitp(char c)
{
     if (whitep(c) || punctp(c))
          return TRUE;
     return FALSE;
}

/* Function returns TRUE if c is white space; returns FALSE otherwise. */
int whitep(char c)
{
     if (c == '\n' || c == '\t' || c == ' ')
          return TRUE;
     return FALSE;
}

/* Function returns TRUE if c is a punctuation; returns FALSE otherwise. */
int punctp(char c)
{
     if (c == '.' || c == ',' || c == ';' || c == ':'
               || c == '?' || c == '!')
          return TRUE;
     return FALSE;
}


/*   Function checks if c is a vowel. */
int vowelp(char c)
{
     switch(c) {
          case 'a':
          case 'A':
          case 'e':
          case 'E':
          case 'i':
          case 'I':
          case 'o':
          case 'O':
          case 'u':
          case 'U':  return TRUE;
          default:   return FALSE;
     }
}


/* Function tests if c is printable. */
int illegal(char c)
{
   if (IS_PRINT(c) || IS_WHITE_SPACE(c))
     return FALSE;
   return TRUE;
}

