/*     file:  spchk.c  
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/27/17
	team members: Min young Kim, Michael Lieu
 */

#include <stdio.h>
#include "letters.h"



int main()
{
//delclare variable
        char ch, ch2;
        int vowel, vowel2;
        int cons, cons2;
        int extcons = FALSE;

        printf("Enter a Hawaiian word: \n");
        ch = getchar();
//while there is more characters to test
   while(ch != EOF)
   {
          vowel = is_vowel(ch);
          cons = is_h_consonant(ch);
          printf("%c", ch);
          ch2 = getchar();
//call the functions
          vowel2 = is_vowel(ch2);

          cons2 = is_h_consonant(ch2);
//check for extra consonants
        if(cons == TRUE && cons2 == TRUE)
        {
                extcons = TRUE;
	}
        if(cons == FALSE || cons2 == FALSE)
        {
                extcons = FALSE;
        }

        if(vowel == TRUE)
        {      //no etxra consonants 
                if(delimitp(ch2) == TRUE && extcons == FALSE)
                {
                        printf(" is valid\n");
                        extcons = FALSE;
                }

                else if(delimitp(ch2) == TRUE && extcons == TRUE)
                {
                        printf( " is invalid\n");
                        extcons = FALSE;

                }

        }

        else if(cons == TRUE)
        {      //not Hawaiian
                if(delimitp(ch2) == TRUE && extcons == TRUE)
                {
                        printf(" is invalid\n");
                        extcons = FALSE;
                }

                else if (delimitp(ch2) == TRUE && extcons == FALSE)
                {
                        printf(" is valid\n");
                        extcons = FALSE;
                }
        }
        else if(delimitp(ch2) == TRUE && (vowel == FALSE || cons == FALSE))
        {
                printf(" is invalid\n");
                extcons = FALSE;
        }
	ch = ch2;
        vowel = vowel2 = cons = cons2 = FALSE;

        }
}





//      Function returns TRUE if c is a delimiter, otherwise FALSE
int delimitp(char c){
        if(whitep(c) || punctp(c))
                return TRUE;
        return FALSE;
}
//      Function returns TRUE if c is a white space, else FALSE         
int whitep(char c){
        if(c == '\n' || c == '\t' || c == ' ')
                return TRUE;
        return FALSE;
}
//     Function returns TRUE if c is a punctuation, else FALSE         
int punctp(char c){
        if (c==':'||c == '.' || c == ',' || c == ';' || c == '?' || c == '!')
                return TRUE;
        return FALSE;
}
