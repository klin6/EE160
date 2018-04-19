/*     file:    regress.c
       by:      Kylie Lin
       login:   link6
       date:    September 25, 2017
       team:    Two Teams
       members: Min Young Kim, Michael Lieu
  */

#include <stdio.h>

int main()
{
	/*declare variables*/
	float x;
	float y;
	float sumx=0; 
	float sumy=0; 
	float sumxy=0;
	float sumx2=0;
	/*n=counter*/
	float counter=0.000;
	float m, b;
	float product;
	float square;

	int f=scanf("%f %f", &x, &y);
	
	while(f!=EOF){
		//print out first y value when counter is 0
	    	if(counter==0){
			printf("p=[ %4.2f,  ", y);		
		}
		//print out y values when counter is 1,2,3,4
		else if(counter<5){
			printf("%4.2f, ",y);	
		}
		//print out last y value when counter is 5 
		else{
			printf("%4.2f];\n",y);
		}
		/*summation of x*/
		sumx = sumx + x;
		/*summation of y*/
		sumy = sumy +y;
		/*summation of xy product*/
		product= x*y;
		sumxy=sumxy+ product; 
		/*summation of x squared*/
		square=x*x;
		sumx2= sumx2+square;
		/*n increments*/
		counter = counter + 1;
		/*redefine file to get out of loop at the end*/
		f = scanf("%f %f",&x,&y);
	}
	
	/*equation for m*/
	m = ((sumx*sumy)-(counter*sumxy)) / ((sumx*sumx)-(counter*sumx2));
	/*equation for b*/
	b = ((sumx*sumxy)-(sumx2*sumy)) / ((sumx*sumx)-(counter*sumx2));

	/*counter minus 1 because counter is 6 at this point*/
	printf("x = linspace(  0.00,  %.2f, %.2f);\n",counter-1.00, counter);
	/*print line equation*/
	printf("y =   %4.2f * x +   %4.2f;\n", m,b);
	printf("plot(x, y ,x ,p, 'go');\n");
	printf("text(0.5,100,'y = 20.83 * x +   3.76');\n");


}
