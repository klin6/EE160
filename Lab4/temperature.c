/*      File : temperature.c           *
 *      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : 2 teams                 *
 *      Date : 9/21/17                 */

/*  program to convert temperatures in degrees Fahrenheit to degrees Celsius */
float tocelsius(float fahrenheit);
int main()
{
	/* variables */
	float temp_farenheit;
	/*prompt user*/
	printf("Enter farenheit temperature: ");
        scanf("%f", &temp_farenheit);
	/*while inputed temperature is not -500,user will continue to be prompted until
 	* they enter -500 to quit*/
	while(temp_farenheit != -500){	
		printf("%4.2fdegree farenheit = %4.2fdegree celcius\n", temp_farenheit, tocelsius(temp_farenheit));
		printf("Enter farenheit temperature(-500 to Quit): ");
                scanf("%f", &temp_farenheit);
	}		
}
/*function to convert farenheit to celcius*/
float tocelsius(float fahrenheit){
         /*  Given:  a temperature reading in degrees Fahrenheit
             Returns: the temperature in degrees Celsius
          */
	float celsius;
	celsius= (fahrenheit - 32) * 5/9;	
	return celsius;
}	
