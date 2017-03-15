#include <stdio.h>

int main(void){

	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let\'s check it out. \n");
	printf("Please enter your weight in pounds: ");
	getchar();
	// scanf() read a float number (%f) from keyboard, then &weight tells scanf() to assign the input value to variable named weight.
	scanf("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value );
	printf("Your are easily lskdjglksjf\n");
	return 0;
}