#include "letters.h"


int main()
{    signed char ch,ch2;
     int inword;         /* flag indicating when in a word    */

int haw_w;
	
	#ifdef INTERACT
	printf("Type characters, EOF to quit\n");
	#endif
	inword = FALSE;          /* before beginning we are not in a word  */

	while ((ch = getchar()) != EOF){     /* while there are more characters */

//haw_w=is_word(ch);

          /* if not in a word and not a delimiter  */
          /* then this must be the beginning of a word  */
          if (!inword && !delimitp(ch)){     /* if not in word and not delim. */
              inword = TRUE;               /* remember we are in a word     */
        
		//while ((ch = getchar()) != EOF){
		if(is_vowel(ch)==TRUE || is_h_consonant(ch)==TRUE){
			if(is_vowel){

			}
		
			if(is_h_consonant){
				ch2=getchar();
				if(is_h_consonant(ch2)==TRUE){
					haw_w=FALSE;
}			}


  }
}
          /*  otherwise if in a word, but found a delimiter  */
          /*  then we just went beyond the end of the word  */
          else if (inword && delimitp(ch)){    /* if in word and a delimiter*/
              inword = FALSE;                /* we are no longer in a word*/
               putchar('\n');                 /* end word with a newline   */
          }

          if (inword){                    /*  if in a word         */
               putchar(ch);              /*  print the character  */
	}
printf("is invalid\n");
ch2=ch; 
    }
}






/      Function returns TRUE if c is a delimiter, otherwise FALSE      
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


