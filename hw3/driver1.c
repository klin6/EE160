/*     file:   driver1.c 
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/27/17
	team members: Min young Kim, Michael Lieu
 */


#include "letters.h"
int main(){
//declare variable        
char Hawlet;
        printf("Enter a Hawaiian letter\n");
        //while there is more Hawaiian letter to check
        while(scanf("%c",&Hawlet)!=EOF){
//flush enter                
FLUSH;
             //check if letter is a vowel   
                if(is_vowel(Hawlet)==TRUE){
                        printf("%c is a Hawaiian vowel\n", Hawlet);
                }       
                //check if letter is a consonant
                if(is_h_consonant(Hawlet)==TRUE){
                        printf("%c is a Hawaiian consonant\n", Hawlet);
                }       
                //print if not a vowel or consonant
                if(is_vowel(Hawlet)==FALSE && is_h_consonant(Hawlet)==FALSE){
                        printf("Not Hawaiian\n");
                }       
                

        }
} 
