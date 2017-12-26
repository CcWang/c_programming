/************************************************
* filename: m4_ex1_print_int.c
* Exercise: Module 4, Exercise 1
* Name: Chongchong Wang
* Date Created: March 26, 2017
*
* Description: This program will read user's input and display the integer contains in user's input.
*************************************************/

#include <stdio.h>

int main(void){

	char ch;
	int num;
	
	printf("Enter some text, equal sign and an integer: ");
	
	// skip any char before '=' and skip '='
	while((ch = getchar()) !='=')
		continue;

	//store the integer value to num.
	if(scanf("%d", &num) == 1)
		// print out the num
		printf("\nThe integer you entered is: %d \n", num );
	else 
		printf("You didn't enter any integer. \n" );

	return 0;
}