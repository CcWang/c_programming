/************************************************
* filename: moduleTwoEx1.c
* Exercise: Module 2, Exercise 1
* Name: Chongchong Wang
* Date Created: March 20, 2017
*
* Description: This program print the numbers from 1 to 10
*************************************************/ 

#include <stdio.h>

int main(void)
{
	/* code */
	//declare a int variable, set value as 1
	int num = 1;
	// while loop to print num until num >10
	while (num <=10){
		printf("%d\n", num );
		// increase num by 1 after print num 
		num++;
	}

	return 0;
}