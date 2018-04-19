/*               file: regress.c
                 by:      Kylie Lin
                 login:   link6
                 date:    2017 9 24
                 team:    Two Teams
                 members: Kylie Lin, Michael Lieu, Min Young Kim
            */

#include <stdio.h>
main(){

//declare variable
float x, y;
float n;
float xfirst, yfirst;
float xsig, ysig, xysig, x2sig;
float m;
float b;

//initialize variables
n=1;
xsig=0;
ysig=0;
xysig=0;
x2sig=0;


//scan only the first x and y
scanf("%f %f",&xfirst, &yfirst);
printf("P = [%f, ", xfirst);
//calculation for the first one
xsig=xsig+xfirst;
ysig=ysig+yfirst;
xysig=xysig+xfirst*yfirst;
x2sig=x2sig+xfirst*xfirst;

while(scanf("%f %f\n", &x,&y)!=EOF){

//calculation for the rest
xsig=xsig+x;
ysig=ysig+y;
xysig=xysig+x*y;
x2sig=x2sig+x*x;

//update n

printf(",%f ",y);

n=n+1;

}
//print the result
printf("]\n");
printf("x = linspace(%f,%f,%f)\n",xfirst,x,n);
m=(xsig*ysig-n*xysig)/(xsig*xsig-n*x2sig);
b=(xsig*xysig-x2sig*ysig)/(xsig*xsig-n*x2sig);
printf("y =   %f * x +   %f;\n",m,b);
printf("plot(x, y ,x ,p, 'go')\n");
printf("text(0.5,100,'y = %f* x +   %f');\n",m,b);

}
