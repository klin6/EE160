#include <stdio.h>

#define IS_DIGIT(c) ((c) >= '0' && (c) <='9')
#define IS_LOWER(c) ((c) >= 'a' && (c) <='z')
#define IS_UPPER(c) ((c) >= 'A' && (c) <='Z')
#define FLUSH while(getchar()!='\n');

int main(){

	char ch;
	int number=0,character=0,upper=0;
	int count=0;

printf("give password: ");

//while(ch=getchar() != EOF){


	while(count != 15){
		ch=getchar();
		
		if(IS_DIGIT(ch))
			number++;
		if(IS_LOWER(ch))
			character++;
		if(IS_UPPER(ch))
			upper++;

		count++;



	}
	FLUSH;

	if(number==3 && character==10 && upper==2)
		printf("password has changed");
	else
		printf("invalid try again");
	printf("give password2: ");

//}

}
