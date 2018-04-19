/*     file: mygrader.c   
                 by:      Kylie Lin
                 login:   link6
		team:   Two Teams
                 date:   10/26/17
*/

#include "driver.h"

int main()
{
//declare variables
    int score;
    char grade;

	//while the score is not 1 evaluate the grade to give
	while(scanf("%d", &score) == 1)
       {
              printf("%d: ",score);
		//print out grade if available
		if(score <= 100 && score >=0)
		{ 
             		grade = assign_grade(score);
              		printf("%c\n",grade);
		}
		//print out for nongrade
		else{	
			printf("illegal score \n");
       		}
     }

}
