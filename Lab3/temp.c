/*      File : temperature.c           *
 *      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : 2 teams                 *
 *      Date : 9/21/17                 */

/*  program to convert temperatures in degrees Fahrenheit to degrees Celsius */
float tocelcius(float fahrenheit);
int main()
{
/* variables */
	float temp_farenheit, temp_celcius;

	printf("Enter farenheit temperature: ");
                scanf("%f" , &temp_farenheit);
		temp_celcius=tocelcius(temp_farenheit);
		printf("The conversion of %4.2fdegree farenheit is %4.2fdegree celcius\n", temp_farenheit, temp_celcius);

return 0;}
float tocelsius(float fahrenheit){
         /*  Given:  a temperature reading in degrees Fahrenheit
             Returns: the temperature in degrees Celsius
          */
	float result;
	result= (fahrenheit - 32) * 5/9;	
	return result;
}	
