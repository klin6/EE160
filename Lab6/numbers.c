/*      File :  numbers.c          
 *      By   :  Kylie Lin          
 *      login:  link6
 *      team : Two Teams         
 *      Date :   10/10/17
*/



/*Write a program that reads a set of integers until a zero is entered. Excluding zero the program should print a count of and a sum of:
a) positive numbers
b) negative numbers
c) even numbers
d) odd numbers
e) positive even numbers
f) negative odd numbers
g) all numbers
Use debug statements to show cumulative sums as each new number is read and processed
*/

#include <stdio.h>
/*#define DEBUG*/

int main(){
	//initialize variables
	int num;	
	int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7 =0;
	int total1=0,total2=0, total3=0, total4=0, total5=0, total6=0, total7 = 0;	
		
	//prompt user
	printf("Give me an integer(0 to stop): \n");
	scanf("%d",&num);

while(num != 0){

	//find if num is positive
	if(num>=1){
		count1=count1+1;
		total1=total1+num;
		#ifdef DEBUG
		printf("debug:%d is positive(count= %d, total= %d)\n",num,count1,total1);
		#endif
	//find if num is negative
	}else if(num<0){
		count2=count2+1;
		total2=total2+num;
		#ifdef DEBUG
		//neg
		printf("debug:%d is negative(count= %d, total= %d)\n",num,count2,total2);
		#endif
	}

	

	//find if num is even
	if(num % 2 == 0){
		count3=count3+1;
		total3=total3+num;
		#ifdef DEBUG
		printf("debug:%d is even(count= %d, total= %d)\n",num,count3,total3);
		#endif
	//find if num is odd
	}else if(num % 2 !=0){//odd
		count4=count4+1;
		total4=total4+num;
		#ifdef DEBUG
		printf("debug:%d is odd(count= %d, total= %d)\n",num,count4,total4);
		#endif
	}
	

	//find if num is positive even number
	if(num>=1 && num % 2 ==0){
		count5=count5+1;;
		total5=total5+num;
		#ifdef DEBUG
		printf("debug:%d is positive and even(count= %d, total= %d)\n",num,count5,total5);
		#endif
	//find if num is negative even number
	}else if(num <0 && num % 2 != 0){
		count6=count6+1;
		total6=total6+num;
		#ifdef DEBUG
		printf("debug:%d is negative and odd(count= %d, total= %d)\n",num,count6,total6);
		#endif

	}

	count7 = count7+1;
	total7=total7+num;
	#ifdef DEBUG
	//total of all num's
	printf("debug:Total(count= %d, total= %d)\n",count7,total7);
	#endif	
	
	printf("Give me an integer(0 to stop): \n");
        scanf("%d",&num);	

}
//print final results
printf("There were %d positive numbers totaling %d\n",count1,total1);
printf("There were %d negative numbers totaling %d\n",count2,total2);
printf("There were %d even numbers totaling %d\n",count3,total3);
printf("There were %d odd numbers totaling %d\n",count4,total4);
printf("There were %d positive even numbers totaling %d\n",count5,total5);
printf("There were %d negative odd numbers totaling %d\n",count6,total6);
printf("There were %d total numbers totaling %d\n",count7,total7);


}
