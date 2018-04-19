#include "letters.h"

int main(){
	char Hawlet;
	printf("Enter a Hawaiian letter\n");

	while(scanf("%c",&Hawlet)!=EOF){
		FLUSH;
	
		if(is_vowel(Hawlet)==TRUE){
			printf("%c is a Hawaiian vowel\n", Hawlet);
		}

		if(is_h_consonant(Hawlet)==TRUE){
			printf("%c is a Hawaiian consonant\n", Hawlet);
		}	

		if(is_vowel(Hawlet)==FALSE && is_h_consonant(Hawlet)==FALSE){
			printf("Not Hawaiian\n");
		}
	
		
	}	
}

