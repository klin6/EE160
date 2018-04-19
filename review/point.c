#include <stdio.h>

int main(){
int x,y;
     int * px;

     x = 5;
     px = &x;

     printf("x = %d\n", x);
     printf("x = %d\n", *px);

     y = *px;
     printf("y = %d\n", y);

     *px = 10;

     printf("x = %d\n", x);
     printf("x = %d\n", *px);

     px = &y;
     *px = 15;

     printf("x = %d\n", x);
     printf("y = %d\n", y);
     printf("what = %d\n", *px);
}
