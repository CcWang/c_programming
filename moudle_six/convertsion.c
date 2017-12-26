/************************************************
 * filename: m6_ex3_covertsion.c
 * Exercise: Module 6, Exercise 3
 * Name: Chongchong Wang
 * Date Created: March 29, 2017
 *
 * Description: This is the part c of exercise 3
 **************************************************/
#include <stdio.h>
#include "conversion.h" //include the header file

//get f_temp from argument
float convert(float f_temp){
	int c_temp;
	// calculate the c temp and return it's value
	c_temp = (f_temp -32)*5/9;

	return c_temp;
}