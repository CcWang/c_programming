/************************************************
* filename: moduleTwoEx2.c
* Exercise: Module 1, Exercise 2
* Name: Chongchong Wang
* Date Created: March 16, 2017
*
* Description: This program calculates and displays the results of 
	* number times 2
	* number divided by 2
	* number plus 2
	* number minus 2
	* number squared (num times num)	
*************************************************/ 

#include <stdio.h>

int main(void){

	/* code */
	int number = 10;
	// num_times_2 is number * 2;
	int num_times_2 = number *2;

	//num_divided_by_2 is number /2
	int num_divided_by_2=number/2;

	//num_plus_2 is number add 2
	int num_plus_2=number+2;

	// num_minus_2 is number minus 2
	int num_minus_2=number-2;

	// num_squared is number times itself
	int num_squared=number*number;

	printf("Number times 2 equals %d\nNumber divided by 2 equals %d\nNumber plus 2 equals %d\nNumber minus 2 equals %d\nNumber squared equals %d\n",num_times_2, num_divided_by_2, num_plus_2, num_minus_2, num_squared);

	return 0;
}