/*      File : account.c        *
 *      By   :  Kylie Lin                *
 *      login:  link6                *
 *      team :  Two teams                *
 *      Date :  10/3/17                */

#include <stdio.h>
//define macros to compund annual, monthly, or daily
#define ANNUAL 1
#define MONTHLY 2
#define DAILY 3

//declare functions being used
float calc_acc_amt(float acc_amount, float annual_interest, int years);

int main(){
	//declare variable
	float initial_amount, initial_interest;
	int amount_years;
	//declare which type to use
	int type;	
	//prompt user for initial amount
	printf("Enter initial amount: ");

	while(scanf("%f", &initial_amount) != EOF){
		//declare annual compound
		float final_amount;
		//continue prompting user for interest rate, amount of years, and type to calculate
		printf("what is your interest rate: ");
		scanf("%f", &initial_interest);

		printf("How many years: ");
		scanf("%i", &amount_years);

		printf("What type(1,2,3): ");
		scanf("%d", &type);
		
		//compound interest for monthly
		if (type == MONTHLY){
			amount_years = 12 * amount_years;
			initial_interest = initial_interest/12;
		
		}	
		//compund interest for daily
		if (type == DAILY){
			amount_years = 365 * amount_years;
			initial_interest = initial_interest/365;

		}
		//compund interest for annually
		final_amount = calc_acc_amt(initial_amount, initial_interest, amount_years);
		//print for asked interest
		printf("Your interest is %f\n", final_amount);
		//terminate inpute with EOF
		printf("Enter initial amount(EOF to Quit): ");
		
	}
}
//function to calculate annual compound
float calc_acc_amt(float acc_amount, float annual_interest, int years){

	int time = 0;
	while(time < years){
		
		acc_amount = acc_amount + acc_amount * annual_interest;
		time++;
	}
	return acc_amount;
}

