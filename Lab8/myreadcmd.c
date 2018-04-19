/*      File : myreadcmd.c   *
 *      By   :   Kylie Lin   *
 *      login: link6         *
 *      team : Two Teams     *
 *      Date : 10/25/17       
*/

/*
 * Read a command, skipping over leading blanks and any trailing
 * characters.
 */

#include <stdio.h>
#include "chrutil.h"

int skipBlanks(void);
int skipOverRestOfCommand(void);

int main()
{
  /* Variable Declarations */
  char cmd;

	/* Check if characters are blank spaces */
        cmd = skipBlanks();

	/*While there are more characters */
        while (cmd != EOF)
        {

		/* If the input starts with a semi-colon or no values are entered */
		if(cmd == ';' || cmd == '\n')
                {
			printf("Error: missing command.\n");
			cmd = skipBlanks();
		}

		/* If the character input is not an alphabetical letter */	
		else if( !IS_LOWER(cmd) && !IS_UPPER(cmd) && (cmd != ' ') && (cmd != '\t') && (cmd != '\n' ) )
		{
			printf("Error: %c is not a letter.\n", cmd);
			skipOverRestOfCommand();
			cmd = skipBlanks();
		}

		/* If character is a alphabetical letter */
		else
		{
			printf("The command is: %c\n", cmd);
                	skipOverRestOfCommand();
                	cmd = skipBlanks();    
		}
        }
}

int skipBlanks(void)
{
  /*Variable Declaration */
  char c;

	/* Evaluate character */
        c = getchar();

	/* While there is a blank space */
        while (c == ' ' || c == '\t')
                c = getchar();
        return c;
}

int skipOverRestOfCommand(void)
{
  /* Variable Declaration */
  char c;

	/* Evaluate character*/  
        c = getchar();

	/* While the character is a new line or semi-colon */
        while (c != '\n' && c != ';')
                c = getchar();
        return c;
}
