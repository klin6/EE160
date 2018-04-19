/*      File : countdown.c      *
 *      By   : Kylie Lin                 *
 *      login: link6                 *
 *      team : 2 teams                 *
 *      Date : 9/21/17                 */

/*  A program to count from 10 down to 1, one per line and print "blastoff"  */

main()
{
	/*declare count as an integer*/
        int count = 10;
	/*when count is greater than 1 then 0 won't print out*/
        while( count >= 1)
        {
                
		printf("%d\n", count);
		/*subtract 1 to count*/
		count=count-1;

        }

        printf("BLASTOFF!\n");

}
