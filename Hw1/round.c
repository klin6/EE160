/*     file:    round.c
       by:      Michael Lieu
       login:   mlieu
       date:    September 25, 2017
       team:    Two Teams
       members: Min Young Kim, Kylie Lin
  */
#include <stdio.h>

int main(){

    //Declare Variables
  float input = 0.0;
  int integer = 0;

    //Obtain Inputs
  printf("Enter Number to be Rounded:");
  scanf("%f", &input);


  while (input != 0){
    integer = input;

    //rounding operation
    if(input >= 0)
      integer = input-integer < 0.5 ? integer: integer +1;
        else
      integer = integer - input < 0.5 ? integer : integer - 1;

      //print results
  printf("Integer = %d\n", integer);
      //Reaquire Inputs
  printf("Enter 0 to quit.\nEnter Number to be Rounded:");
  scanf("%f", &input);

}

return 0;
}
