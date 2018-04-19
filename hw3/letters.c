/*     file: letters.c   
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/27/17
	team members: Min young Kim, Michael Lieu
 */
#include "letters.h"



int is_vowel(char c){

        switch(c){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U': return TRUE;
                default : return FALSE;
        }
}



int is_h_consonant(char c){


        switch(c){
                case 'h':
                case 'k':
                case 'l':
                case 'm':
                case 'n':
                case 'p':
                case 'w':
                case 'H':
                case 'K':
                case 'L':
                case 'M':
                case 'N':
                case 'P':
                case 'W':
                case '`': return TRUE;
                default : return FALSE;
        }
}
