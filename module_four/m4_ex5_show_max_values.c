/************************************************
* filename: m4_ex5_show_max_values.c
* Exercise: Module 4, Exercise 5
* Name: Chongchong Wang
* Date Created: March 26, 2017
*
* Description: This program will prompts the user to enter in two integers.
* use max_value function to determine which of the tow values is the largest 
* and assigns the max value to both variables.
* display the values of both variables to demonstrate that they both contain the max value. 
*************************************************/

#include <stdio.h>

//decalre max_value function, using pointers as arguments
void max_value(int *num1ptr, int *num2ptr);

int main(void){

	int num1, num2;

	printf("Enter two integers: \n");
	// check if user provided two integers
	if(scanf("%d %d", &num1, &num2) ==2){
		// passing two integer pointers as max_value's arguments
		max_value(&num1, &num2);

		//print new values
		printf("Both values are now: %d %d\n", num1, num2 );
	}else {
		printf("You didn't enter two integers. \n");
	}

	return 0;
}

void max_value(int *num1ptr, int *num2ptr){
	//compare values, the values are presented by its pointer
	// using pointers to change that location's value
	if(*num1ptr > *num2ptr)
		*num2ptr = *num1ptr;
	else if(*num1ptr < *num2ptr)
		*num1ptr = *num2ptr;

}
