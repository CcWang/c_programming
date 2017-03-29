/************************************************
* filename: m5_ex2_squared_input.c
* Exercise: Module 5, Exercise 2
* Name: Chongchong Wang
* Date Created: March 27, 2017
*
* Description: This program that implements a two dimensional array. 
* Prompt the user to input 5 integer values 
* and then calculate and store the squared values for each user input in the array
*************************************************/
#include <stdio.h>

#define SIZE 5

int main(void){

	int i = 0;
	int numbers[SIZE][SIZE];
	int arr1;

	// ask user to enter int for SIZE times
	while(i<SIZE){
		printf("Please enter an integer: ");
		//check if user provide an integer and assign value to array
		if(scanf("%d", &numbers[i][0]) ==1){
			// assign value to array
			numbers[i][1] = numbers[i][0] * numbers[i][0];
			i++;	
		}else{
		   // flush buffer of non-digit chars so scanf will block and wait for new input
			while(getchar() !='\n');
		}

	}
	printf("Value  Squared\n");
	//print output
	for(arr1 = 0; arr1 < SIZE; arr1++){
		printf("%d  %5d\n", numbers[arr1][0], numbers[arr1][1] );
	}

	return 0;
}