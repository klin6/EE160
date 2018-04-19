 
/*     File : gravity.c     *
 *     By   :               *
 *     login:               *
 *     Date :               */
 
/*
 *   This program computes the velocity and height of a falling
 *   object given the time.
 */
 
 
main()
{  float velocity;
   int time;
   int distance;
 
        /*  set the time  */
        time = 10;
 
        /*  compute the velocity*/
        velocity = 32.0 * time;
 
        /*  compute the distance  */
        distance = 32 * time * time / 2;
 
        /*  print the result  */
        printf("An object falling %4.2i feet in %4.2i seconds\n ",distance, time);
        printf("is traveling %4.2f ft/sec\n",velocity);
}
 
