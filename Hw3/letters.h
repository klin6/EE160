#include <stdio.h>

#define TRUE 1
#define FALSE 0


int is_vowel(char);
int is_h_consonant(char); 
/*
#include "chrutil.h"

#define IS_BLANKS(c) (c==' '||c=='\t' || c =='\n') 
#define BLANK 9 
#define VOWEL 2 
#define CONS 3 
#define CON_CON 6 
*/

int delimitp(char c);
int whitep(char c);
int punctp(char c);


#define FLUSH while(getchar() != '\n');
