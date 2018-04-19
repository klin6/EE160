/*      File : account.c        *
 *      By   :  Kylie Lin                *
 *      login:  link6                *
 *      team :  2 teams                *
 *      Date :  9/25/17                */

#include <stdio.h>

float calc_acc_amt(float acc_amount, float annual_interest, int years);

int main(){
	float initial_amount, initial_interest, final_amount;
	int amount_years;
		
	printf("Enter initial amount: ");
	scanf("%f", &initial_amount);

	while(initial_amount != 0){
		printf("what is your interest rate: ");
		scanf("%f", &initial_interest);

		printf("How many years: ");
		scanf("%i", &amount_years);

		final_amount= calc_acc_amt(initial_amount, initial_interest, amount_years);

		printf("Your total is: %f\n", final_amount);
		
		printf("Enter initial amount: 0 to Quit: ");
		scanf("%f", &initial_amount);
		
	}
}

float calc_acc_amt(float acc_amount, float annual_interest, int years){

	int time = 0;
	while(time < years){
		
		acc_amount=acc_amount + acc_amount * annual_interest;
		time++;
	}
	return acc_amount;
}

