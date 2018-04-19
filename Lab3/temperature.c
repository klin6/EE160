/*      File : temperature.c           *
 *      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : 2 teams                 *
 *      Date : 9/14/17                 */

/*  program to convert temperatures in degrees Fahrenheit to degrees Celsius */


main()
{
/* variables */
float temp_farenheit, temp_celcius;

	/* get farenheit */
	printf("Enter farenheit temperature: ");
	scanf("%f" , &temp_farenheit);

	/*farenheit to celcius*/
	/* subtract 32 from farenheit temp, then multiply rest by 5/9 */
	temp_celcius = (temp_farenheit - 32) * 5/9;

	/* output celcius temperature */
	printf("The conversion of %4.2fdegree farenheit is %4.2fdegree celcius\n", temp_farenheit,temp_celcius);


} 
