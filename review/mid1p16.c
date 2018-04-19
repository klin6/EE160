#include <stdio.h>

int main(){

	float var1=5.0;
	int x=0;

	if(var1 > 10.0){
		while(x<=3){
			if(x>2){
				printf("%f \n",x);
			}else{
				printf("%f\n",x*2);
			}
		x=x+1;
		}
	}else{
		x=-3;
		while(x>-5){
			printf("output: %d\n",x*5);
			x=x-1;
		}
	}
	printf("program ending!");

}
