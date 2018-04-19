
/*   File:	driver1.c
     by:	Tep Dobry	
     date:
*/

/*  This file contains a test driver for experimenting with
	the Display Module functions.  It simply writes
	input characters to the dispaly until quit.  It also tests
	for exponent characters (shift-number) and converts
	and writes those.
*/

#include <stdio.h>
#include "display.h"
#include "exponent.h"

int main()
{  char ch;

	/*  Initialize the dispaly with a message  */
	write_message("Display Test");

	/*  while not quitting  */
	while((ch = getchar()) != 'q')
	{
		/*  if exponent character */
		if( is_exp(ch))
			/*  write the converted exponent character  */
			write_exp(exp_value(ch));
		/*  otherwise write the character  */
		else write_char(ch);
	}

	/* write the q character to terminate the dispaly */
	write_char(ch);

}
