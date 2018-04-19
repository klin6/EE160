#include <stdio.h>

int main () {
   int var1;
   int var2;
   int var3;
     
   var1 = 2;
   var2 = 10;
   var3 = 5;
 
   while (var1 <= var2) {
       printf("var1: %d\n", var1);
       printf("var2: %d\n", var2);
   
       var1 = var1 + 1;
       var2 = var2 - 1;    
       if (var2 <= 9) {
           printf("A\n");
           if (var1 >= 8) {
               printf("C\n");
           } else {
               if (var3 < 2) {
                   printf("E\n");
               }
           }
           if (var1 == var2) {
               printf("%d == %d\n", var1, var2);
           } else {
               if (var1 + 4 <= var2 + var3) {
                   printf("F\n");
               }
           }
       }
       var3 = var2 - var1;
   }
   return 0;
}
