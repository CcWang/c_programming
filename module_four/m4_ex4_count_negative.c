/************************************************
* filename: m4_ex4_count_negative.c
* Exercise: Module 4, Exercise 4
* Name: Chongchong Wang
* Date Created: March 26, 2017
*
* Description: This program will prompts the user to enter in two "long" values.
* use negative_count function two count negative ones.
* display counts in main function. 
*************************************************/

#include <stdio.h>

int negative_count(long num1, long num2);

int main(void){

	int count;
	long num1,num2;

	printf("Please enter two integers of data type \"long\".\n");
	/*
	while(getchar() != STOP){

		if(scanf("%ld %ld", &num1, &num2) !=2)
			break;
		count = negative_count(num1, num2);
		printf("%ld %ld \n", num1, num2 );
		printf("Number of negative number entered %d\n", count);

		printf("Please enter another two integers of data type \"long\".\n");
		printf("Enter q to quit.\n");	}

	printf("You didn't enter two long integers. Bye. \n");
	*/
	// check if user provided two long integers
	if(scanf("%ld %ld", &num1, &num2) ==2){
		//passing num1 and num2 into negative_count function. 
		// use count to store negative_count() return value.
		count = negative_count(num1, num2);
		printf("Number of negative number entered %d\n", count);

	}
	else
		printf("You didn't enter two long integers. Bye. \n");

	return 0;
}

int negative_count(long num1, long num2){

	int count = 0;
	// check if num1 and num2 are negative values. 
	// increase count if num1 or/and num2 is negative number
	if(num1<0)
		count +=1;
	if(num2<0)
		count +=1;

	return count;
}