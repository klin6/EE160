/*	File : roman.c		*
 *	By   : Kylie Lin	*
 *	Login: link6		*
 *	Team : Two Teams	*
 *	Date : 10/25/17		*
 */

/*  This file contains the functions used to read and convert a number
 *	in roman numerals.
 */

#include <stdio.h>
#include "tfdef.h"
#include "roman.h"
#include "romanutil.h"

int get_roman(void)
/*  This function reads the next number in roman numerals from the input
	and returns it as an integer  */
{  char rdigit;
   int  num = 0;
   int  dig_value, last_dig_value = M;

	/*  get the first digit  */
	rdigit = getchar();

	/* while there are empty spaces before the first roman numeral */
	while ( rdigit == ' ' || rdigit == '\t' || rdigit == '\n')
		rdigit = getchar();

	/* if there is a nonroman numeral before the first roman numeral */
	if( !is_roman(rdigit) && rdigit != EOF && rdigit != '\n')
	{
		/* print error message */
		printf("Error: Non-Roman numeral was entered.\n");

		/* throw away all following characters */
		while(rdigit != '\n')
			rdigit = getchar();

		/* return 0 */
		return FALSE;
	}

	/*  while it is a roman digit  */
	while( is_roman(rdigit))
	{
		/*  convert roman digit to its value  */
		dig_value = convert_roman(rdigit);

		/*  if previous digit was a prefix digit  */
		if(dig_value > last_dig_value)
			/*  adjust total  */
			num = num - 2 * last_dig_value + dig_value;

		/*  otherwise accumulate the total  */
		else num = num + dig_value;

		/*  save this digit as previous  */
		last_dig_value = dig_value;

		/*  get next digit  */
		rdigit = getchar();

		/* while there are empty spaces after the first roman numeral */
		while ( rdigit == ' ' || rdigit == '\t')
			rdigit = getchar();

		/* if there is a  nonroman numeral after the first roman numeral */
		if ( !is_roman(rdigit) && rdigit != EOF && rdigit != '\n')
		{
			/* print error message */
			printf("Error: Non-Roman numeral was entered.\n",rdigit);

			/* throw away all following characters*/
			while(rdigit != '\n')
				rdigit = getchar();

			/* return 0 */
			return FALSE;
		}
	}

	/*  return EOF if detected  */
	if(rdigit == EOF) return EOF;

	/*  return the number  */
	return num;
}
