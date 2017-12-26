/************************************************
 * filename: m6_ex3_covert_driver.c
 * Exercise: Module 6, Exercise 3
 * Name: Chongchong Wang
 * Date Created: March 29, 2017
 *
 * Description: This program converts a user entered temperature in Fahrenheit to Celsius 
 * incorporating three modules and functions named as identified below. 
 * The user entered Fahrenheit temperature is to be passed as an argument to the function named convert( ) in the module "conversion.c". 
 * The calculated Celsius value is to be return by the function and the result displayed to the user in the function main( ) : 

 * a.convert_driver.c - contains the function main( ) and the user interface
 * b.conversion.h - contains the prototype for a function named convert( )
 * c.convertsion.c - contains the function definition for convert( ) 
 **************************************************/
#include <stdio.h>
#include "conversion.h"  //include the header file

int main(void){
	// declare f_temp and c_temp
	float f_temp;
	float c_temp;

	//ask user to give Fahrenheit temperature and store the value to f_temp variable
	printf("Please enter a Fahrenheit temperature: \n");
	scanf("%f", &f_temp);

	//get c_temp from convert(f_temp) function
	c_temp = convert(f_temp);
	//display
	printf("%.2f Fahrenheit temperature convers to Celsius is %.2f \n", f_temp, c_temp );
	
	return 0;
}