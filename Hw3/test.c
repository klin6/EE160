#include "letters.h"

int main(){

	signed char ch, ch2;
	int inword;
	int haw;

	#ifdef INTERACT
        printf("Type characters, EOF to quit\n");
        #endif

	inword=FALSE;

	while(ch=getchar() != EOF){

		if (!inword && !delimitp(ch)){
			inword = TRUE;


			if(is_vowel(ch)==TRUE || is_h_consonant(ch)==TRUE){

				if(is_h_consonant(ch)){
					ch2=getchar();
					if(is_h_consonant(ch2)==TRUE){
						haw=FALSE;
					}
				}
			}
//else{haw==false			
			if(is_vowel(ch)==TRUE && delimitp(ch2)==TRUE && haw==TRUE){
				haw=TRUE;
	//			printf("is valid\n");

			}else{
				haw = FALSE;
	//			printf("is invalid\n");
			}	


		}

		else if(inword && delimitp(ch)){
			inword =FALSE;
			
			if(haw==TRUE){
				printf("is valid");
			}
			else{
				printf("is invalid");
			}
			putchar('\n');
		}


	/*	if(inword){
			putchar(ch);
		}*/

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
