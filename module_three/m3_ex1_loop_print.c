/************************************************
* filename: m3_ex1_loop_print.c
* Exercise: Module 3, Exercise 1
* Name: Chongchong Wang
* Date Created: March 23, 2017
*
* Description: This program print the following output:
*&
*&&
*&&&
*&&&&
*&&&&&
*&&&&&&
*************************************************/ 

#include <stdio.h>

int main(void){
	int col = 1;
	int row = 1;

	// first for loop to print total 6 columns 
	for (col = 1 ; col <=6; col ++){
		// each column print different number of row, depends on the col number
		for (row = 1; row <=col; row ++){
			printf("&");
		}
		// finish a row, change a line
		printf("\n");
	}


	return 0;
}