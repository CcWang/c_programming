/************************************************
* filename: moduleOneEx1.c
* Exercise: Module 1, Exercise 1
* Name: Chongchong Wang
* Date Created: March 16, 2017
*
* Description: This program calculates age in days, and display the age in years and days.
*************************************************/ 

#include <stdio.h>

int main(void)
{
	/* code */
	int age_years = 25;
	int age_days;

	// to convert the age in years to days, age_years needs to multiply with 365
	age_days = age_years* 365;

	printf("I am %d years old which is also %d days old!\n", age_years,age_days );

	return 0;
}