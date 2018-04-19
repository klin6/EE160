/*      File : seconds.c        *
 *      By   :  Kylie Lin                *
 *      login:  link6                *
 *      team :  2 teams                *
 *      Date :  9/14/17                */

/*
 *   This program reads a number of seconds and computes how many
 *     hours, minutes and seconds that corresponds to.
 */


main()
{  int seconds;
   int hours, minutes;

        /*  get the number of seconds  */
        printf("Enter the number of seconds: ");
        scanf("%d", &seconds);

        /*  compute the number of hours  */
        hours = seconds / 3600;

        /*  compute the number of minutes  */
        minutes = seconds % 3600 / 60;

        /*  compute the number of seconds remaining  */
        seconds = seconds % 3600 % 60;

        /*  print the result  */
        printf("there are %d hours, %d minutes, %d seconds\n",
                hours, minutes, seconds);


}
