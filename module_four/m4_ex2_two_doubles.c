/************************************************
* filename: m4_ex2_two_doubles.c
* Exercise: Module 4, Exercise 2
* Name: Chongchong Wang
* Date Created: March 26, 2017
*
* Description: This program will prompts the user to enter two values of data type "double".
* And print these two doubles.
*************************************************/
#include <stdio.h>

// declare the print_doubles function
void print_doubles(double num1, double num2);

int main(void){

	double num1, num2;
	printf("Please enter two doubles (use space to seperate): \n");

	//when the user enter a newline, it is the time to stop the while loop.
	while(getchar() !='\n'){

		//check if user provided two doubles. if not, break the loop.
		if(scanf("%lf %lf", &num1, &num2) !=2)
			break;
		// if user did provide two doubles, 
		//pass num1 and num2 value to print_doubles function to display 
		print_doubles(num1, num2);

		//to skip the end of line
		while(getchar() !='\n')
			continue;

		printf("Please enter two doubles (use space to seperate): \n");
		printf("Enter a newline to quit.\n");
	}

	printf("You didn't enter two doubles. Bye. \n");

	return 0;
}
// these function print two doubles based on the argument values
void print_doubles(double num1, double num2 ){
	printf("Two doubles are %lf and %lf\n", num1, num2 );
}