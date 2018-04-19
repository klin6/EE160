/*               file: cell.c
                 by:      Min Young Kim
                 login:   myk777
                 date:    2017 9 23
                 team:    Two Teams
                 members: Kylie Lin, Michael Lieu, Min Young Kim
            */

#include <stdio.h>
//declare fundtion
int round_to_int(float);

main(){
//declare variables
int minutes, seconds;
float inminutes;
float Jog_Min;
float Holo_T_Min;
float Jog_Price;
float Holo_T_Price;

printf("Enter number of minutes and seconds: \n");

// initialize variables
Jog_Min=0;
Holo_T_Min=0;
Jog_Price=0;
Holo_T_Price=0;
printf("Minutes         seconds\n");

//While there are more minute and seconds to process
while(scanf("%d %d \n", &minutes, &seconds)!=EOF){

//convert the minutes and seconds into just by minutes
inminutes=(float)minutes+(float)seconds/60;

printf("%d              %d\n",minutes, seconds);

//Loop the only Jog price
Jog_Price=Jog_Price+0.05*round_to_int(inminutes);
//Loop the minutes
Jog_Min=Jog_Min+round_to_int(inminutes);
Holo_T_Min=Holo_T_Min+inminutes;

}
//calculate the Holo T price
Holo_T_Price=0.07*round_to_int(Holo_T_Min);

//print the final result
printf("Jog would charge you %f for extra %f minutes \n", Jog_Price, Jog_Min);
printf("Holo T would charge you %f for %f minutes\n", Holo_T_Price, Holo_T_Min);
}
int round_to_int(float value){
 /*  Given: a positive float value
             *  Returns: the value rounded to the nearest integer (rounding up)
             */
//decare variable
float a;
//calculate a
a=value-(int)value;
//use conditions to discern if the value is over 0.5 or below 0.5
if(0.50<=a){
value=(int)value+1;
return value;
}
else{
value=(int)value;
//return value
return value;
}
}
