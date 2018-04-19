/*      File : countup.c        *
 *      By   :  Kylie Lin                *
 *      login:  link6                *
 *      team :  2 teams                *
 *      Date :  9/21/17                */

/*  A program to count from 1 to 20, one per line  */

int main()
{
  int count;

	count = 1;
	/*the while loop misses 1 short till count=20
 	* if count is less than 20 then 20 won't print*/
	while (count < 21)	
	{
		printf("%d", count);
		count = count + 1;
	}
}
