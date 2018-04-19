/*     file:  letters.h  
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/27/17
	team members: Min young Kim, Michael Lieu
 */


#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define FLUSH while(getchar() != '\n');
int is_vowel(char);
int is_h_consonant(char);

int delimitp(char c);
int whitep(char c);
int punctp(char c);

#define SPACE(ch) (ch == ' ' || ch == '\t' || ch == '\n')
#define VOWEL(ch) (ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85 || ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117)
#define CONSONANT(ch) (ch == 72 || ch == 75 || ch == 76 || ch == 77 || ch == 78 || ch == 80 || ch == 87 || ch == 80 || ch == 104 || ch == 107 || ch == 108 || ch == 109 || ch == 110 || ch == 112 || ch == 119 || ch == 44)
