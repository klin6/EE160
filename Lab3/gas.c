/*      File : gas.c           *
 *      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : 2 teams                 *
 *      Date : 9/14/17                 */

/*  A program to compute the cost of a new Porsche   */


main()
{  /*  program constants   */ 
  float gallons_used;
  float miles_used;

  float cost_per_gallon = 3.12;
  float cost_of_fill_up;
  float cost_per_mile;
  float miles_per_gallon;


        /*  Get gallons used and miles  */
        printf("Enter amount of gallons used: ");
        scanf("%f", &gallons_used);
	printf("Enter number of miles since last fill up: ");
	scanf("%f", &miles_used);

	/*compute the cost of fill up*/
	cost_of_fill_up = gallons_used * cost_per_gallon;

	/*compute cost per mile*/
	cost_per_mile = cost_of_fill_up / miles_used;

	/*compute miles per gallon*/
	miles_per_gallon = miles_used / gallons_used;

        /* Output results  */
	printf("For %4.2f gallons where the price is $%4.2f per gallon. ", gallons_used, cost_per_gallon);
	printf("The cost of the whole fill up will be $%4.2f. ", cost_of_fill_up);
	printf("Every mile will cost $%4.2f. ", cost_per_mile);
	printf("With an MPG of %4.2f.\n", miles_per_gallon);
}
