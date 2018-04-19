#include <stdio.h>
#include <stdlib.h>
#define PICK(start,stop) (rand() % ((stop) - (start) + 1) + (start))

main(){

int hidden_number;
 hidden_number = PICK( 1, 100);

printf("%i\n",hidden_number);

}
