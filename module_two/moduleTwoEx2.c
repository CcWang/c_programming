/************************************************
* filename: moduleTwoEx2.c
* Exercise: Module 2, Exercise 2
* Name: Chongchong Wang
* Date Created: March 20, 2017
*
* Description: This program prompts the user to enter a trip distance in miles, a speed in miles/hour, and name. Calculate how long the trip will take and then displays all the information 
*************************************************/ 

#include <stdio.h>

int main(void){

	//make variables for name, distance, speed and hours
	float distance, speed, hours;
	char name[40];
	//ask user to put name first then assign the value to name
	printf("Hello, what is your name? \nName: ");
	scanf("%s", name);

	//ask user to put distance and speed then assign the values to distance and speed
	printf("\nPlease enter a trip distance in miles and your speed. (enter distance first then speed):");
	scanf("%f %f", &distance,&speed);

	//caculate hours
	hours= distance/speed;

	//display all the information
	printf("\n%s, your trip of %.0f miles at %.0f mph will take %.2f hours\n",name, distance,speed,hours);

	return 0;

}