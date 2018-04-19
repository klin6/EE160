/*  Header file declaring stock utility functions    */


float stock_price(int shares, int whole, int num, int denom);
/* Given: the number of shares, and stock price in whole, numerator
                and denominator.
   Return: the cost/value of this amount of stock.
*/

int data_ok(int whole, int num, int denom);
/*  Given: the stock price values
    Returns: TRUE if a valid stock price, FALSE otherwise
*/
