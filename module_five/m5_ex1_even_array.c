/************************************************
* filename: m5_ex1_even_array.c
* Exercise: Module 5, Exercise 1
* Name: Chongchong Wang
* Date Created: March 27, 2017
*
* Description: This program creates an array containing all even numbers from 1 to 100 in ascending order. 
* Display the 5 largest even numbers from the array in descending order. 
*************************************************/
#include <stdio.h>
// define array size
#define SIZE 50

int main(void){
	// declare array
	int even_numbers[SIZE];

	int i=1;
	int index = 0;
	int display = 1;
	//using for loop to find even numbers from 1 to 100
	// assign even number to array element
	for(i=1, index = 0; i<=100;i++){
		if(i%2 == 0){
			even_numbers[index] = i;
			index++;
		}
	}

	printf("Top 5 even numbers are: ");
	//find last 5 elements
	while(display < 6){
		printf("%d ",even_numbers[SIZE-display] );
		display++;
	}

	return 0;
}