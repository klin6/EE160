/* File : menu.c 
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/12/17 
 * members: Minyoung Kim, Michael Lieu
*/

/*  opens files and player chooses difficulty*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "display.h"
#include "miensfeld.h"

/*open text files options*/

int startscreen(void)
{
	//variable declare
	int play=FALSE,
		i_diff,
		i;
	char c_diff,
		 choice,
		 c;
	FILE *fp;

		//open title1
		fp = fopen("title1","r");
		// Print file to screen 
		while(1)
		{
			c = getc(fp);
			if(feof(fp))
				break;
			putchar(c);
		}
		fclose(fp);
		printf("Enter choice: ");
		scanf("%c",&choice);

        // While the user has not started playing 
		while(choice!='4')
		{
			switch(choice)
			{			
				//Opens move
				case '1':
					//Flush new line character
					getchar();
					//Print file to screen
					fp = fopen("move","r");
					while(1)
					{
						c = getc(fp);
						if(feof(fp))
							break;
						putchar(c);
					}
					fclose(fp);
					//User input
					printf("Enter choice: ");
					scanf("%c",&choice);
					break;
				//opens flag	
				case '2':
					getchar();
					fp = fopen("flags","r");
					while(1)
					{
						c = getc(fp);
						if(feof(fp))
							break;
						putchar(c);
					}
					fclose(fp);
					printf("Enter choice: ");
					scanf("%c",&choice);
					break;
				//open points	
				case '3':
					getchar();
					fp = fopen("points","r");
					while(1)
					{
						c = getc(fp);
						if(feof(fp))
							break;
						putchar(c);
					}
					fclose(fp);
					printf("Enter choice: ");
					scanf("%c",&choice);
					break;
						
				// If choice is invalid
				default:
					getchar();
					printf("Invalid choice.\n"
						"Enter another choice: ");
					scanf("%c",&choice);
					break;
			}
		}

		//Flush 
		c=getchar();

		//make space since last file
		for(i=0;i<=4;i++)putchar('\n');

        // when player play
		if(choice == '4')
		{
		    //Print difficulty choices
			printf("\tChoose your level of difficulty:\n"
				"\t\t1)\tEasy\n"
				"\t\t2)\tModerate\n"
				"\t\t3)\tHard\n"
				"\t\t4)\tImpossible\n"
				"Choice: ");
			
			//when not any difficulty option is given
			while(!play)
			{
				scanf("%c",&c_diff);
				switch(c_diff)
				{
				    //Return if valid difficulty
					case '1':
					case '2':
					case '3':
					case '4':
						play=TRUE;
						break;
						
                    //if user chooses invalid difficulty
					default:
						getchar();
						//tell them to choose again
						printf("Invalid choice.\n"
							"Enter another choice: ");
				}
			}
			//character into numeric 
			i_diff = c_diff-'0';
			//return difficulty
			return i_diff;
		}
}

