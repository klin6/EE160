 
/*     File : gravity.c     *
 *     By   : Kylie Lin     *
 *     login: link6 
 *     team : 2 teams      *
 *     Date : 9/14/17       */
 
/*
 *   This program computes the velocity and height of a falling
 *   object given the time.
 */
 
 
main()
{  float velocity;
   float time;
   int distance;
 
	/*Get time*/
	printf("Give me a float time: ");
	scanf("%f", &time);
 
        /*  compute the velocity*/
        velocity = 32.0 * time;
 
        /*  compute the distance  */
        distance = 32 * time * time / 2;
 
        /*  print the result  */
        printf("An object falling %4.2i feet in %4.2f seconds\n ",distance, time);
        printf("is traveling %4.2f ft/sec\n",velocity);
}
 
