/************************************************
* filename: moduleTwoEx4.c
* Exercise: Module 2, Exercise 4
* Name: Chongchong Wang
* Date Created: March 20, 2017
*
* Description: This program prompts the user to enter a value for the price of an item to be purchased. Then display the price with the sales tax.
*************************************************/

#include <stdio.h>
// include math.h file for round float value
#include <math.h>

// set SALESTAX value 
#define SALESTAX 5.6
int main(void)
{
	/* code */
	float price, total_price;
	int dollars, cents;

	//get price from user
	printf("Please enter the price:\n");
	scanf("%f",&price);

	//calculate for total price
	total_price = price*(1+5.6/100);

	//make dollars integer 
	dollars = (int)total_price;

	// get the cents and round it to 2 digits
	cents = round((total_price-dollars)*100.00f);

	// display all the information
	printf("Item price of $%.2f with sales tax is %d dollars and %d cents.\n",price, dollars, cents );
	return 0;
}