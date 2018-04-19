/*  Program to compute the value of multiple stocks in a portfolio reading
        the data at run time. The program computes our net profit/loss
	on this portfolio. Data is read until end of file.
	The program has been improved to test for valid data entry.  */

#include <stdio.h>
#include "stock_utils.h"

#define INTERACT

main()
{  /*  Variable Declarations   */
   int shares;		/*  number of shares owned     */
   int sell_whole;	/*  selling price information  */
   int sell_numer, sell_denomin;
   int buy_whole;	/*  buying price information  */
   int buy_numer, buy_denomin;

   float portfolio_cost = 0.0;   /*  the cost  of the portfolio  */
   float portfolio_value = 0.0;  /*  the value of the portfolio  */
   float profit;           /*  the profit or loss          */

	/*  Get the number of shares values   */
	#ifdef INTERACT
	printf("Enter number of shares(EOF to quit): ");
	#endif

	/*  While there are more stocks to process  */
	while( scanf("%d", &shares) != EOF )
	{	/*  Get the selling price   */
		#ifdef INTERACT
		printf("Enter stock selling price as"
				" whole numerator denominator: ");
		#endif
		scanf("%d %d %d", &sell_whole, &sell_numer, &sell_denomin);
		/*  Get the purchase price   */
		#ifdef INTERACT
		printf("Enter stock purchase price as"
				" whole numerator denominator: ");
		#endif
		scanf("%d %d %d", &buy_whole, &buy_numer, &buy_denomin);
	
		/*  Print data values  */
		printf("You have %d shares of stock\n",shares);
		printf("selling at $%d %d/%d\n",
			sell_whole,sell_numer,sell_denomin);
		printf("which you bought at $%d %d/%d\n",
			buy_whole,buy_numer,buy_denomin);
	
                /* if the data is ok            */
		if( data_ok(sell_whole,sell_numer,sell_denomin) &&
			data_ok(buy_whole,buy_numer,buy_denomin))
		{	/*  Alccumulate  portfolio  cost  */
			portfolio_cost  = portfolio_cost +
				stock_price(shares,buy_whole,buy_numer,
					buy_denomin);
			/*  Alccumulate  portfolio  value  */
			portfolio_value = portfolio_value +
				stock_price(shares,sell_whole,sell_numer,
					sell_denomin);
		#ifdef DEBUG
		printf("debug: portfolio_cost=%f portfolio_value=%f\n",
			portfolio_cost,portfolio_value);
		#endif
		}
		/* otherwise print an error message and ignore the stock  */
		else printf("\aINVALID stock data - stock ignored\n");

		/*  Get the number of shares values   */
		#ifdef INTERACT
		printf("Enter number of shares(EOF to quit): ");
		#endif
	}
	/*  Calculate  profit            */
	profit = portfolio_value - portfolio_cost;

	/*  Print result   */
	printf("\nYou bought stock for $%f.",portfolio_cost);
	printf("The value of your portfolio is $%f\n",portfolio_value);
	printf("Your net profit is $%f\n",profit);


}
