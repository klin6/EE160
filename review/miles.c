#include <stdio.h>

float Estimated_Time_Of_Arrival(float miles);

int main(){

	float miles;
	printf("Enter float amount of miles: ");
	scanf("%f", &miles);

	while(miles!=0){
		float minutes;
		minutes=Estimated_Time_Of_Arrival(miles);
		printf("You walked for %4.2fminutes\n", minutes);
		printf("Enter float amount of miles:0 to quit: ");
		scanf("%f", &miles);
	}
	return 0;


}

float Estimated_Time_Of_Arrival(float miles){
	float time;
	time=miles/3.1;
	time=time*60;
	return time;
}
