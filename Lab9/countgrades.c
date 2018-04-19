/*      File : countgrades.c  
	by:      Kylie Lin
	login:   link6
	team:   Two Teams
	date:   10/26/17
 */
/*  A program to count the number of grades occuring in the input */

#include <stdio.h>
#define   IS_WHITE_SPACE(c)   ((c) == ' ' || (c) == '\t' || (c) == '\n')

int main()
{
//initialize variables
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  int f=0;
  int others=0;
  char ch;

	//loop for each character into a switch case
       while ((ch = getchar()) != EOF)
       {
		//implement for grades in lower and upper case
		printf("%c",ch);
		switch(ch)
		{
                 case 'a': 
			a++;
			break;
                 case 'A':
			a++;
			break;
                 case 'b':
			b++;
			break;
                 case 'B':
			b++;
			break;     
                 case 'c':
			c++;
			break;
                 case 'C':
                  	c++;
			break;     
                 case 'd':
			d++;
			break;
                 case 'D':
                  	d++;
                  	break;     
                 case 'f':
			f++;
			break;
                 case 'F':
                  	f++;
	          	break;
		 default: others++;
		
		//Flush off for tabs, spaces, ...
		if (IS_WHITE_SPACE(ch)){
                      others--;
             	}
       
		}
	}	

       printf("Grade counts:\n");
	//print results
       printf("  A's: %d\n", a);
       printf("  B's: %d\n", b);
       printf("  C's: %d\n", c);
       printf("  D's: %d\n", d);
       printf("  F's: %d\n", f);
       printf("  Other grades: %d\n", others);

}
