/************************************************
* filename: moduleTwoEx3.c
* Exercise: Module 2, Exercise 3
* Name: Chongchong Wang
* Date Created: March 20, 2017
*
* Description: This program prompts the user to enter the number of seconds and then converts that value to hours and minutes. 
*************************************************/ 

#include <stdio.h>

int main(void){

	//make variables for seconds, hours and minutes, the minutes can have decimal
	int seconds,hours;
	float minutes;

	//enter the number of seconds and assign value to variable seconds
	printf("Please enter the number of seconds:\n");
	scanf("%d", &seconds);

	// while loop, only if seconds is larger than 0, the while loop would run
	while(seconds>0){
		// calculate the minutes first, since the minutes is float, need to divied by float number
		minutes = seconds / 60.00;

		// only when mintues is greater than or equal to 60, we need to calculate for hours.

		if(minutes >=60){
			hours = minutes/60;
			//update minuts
			minutes = minutes - hours*60;
		}else{
			hours = 0;
		}

		//print results
		printf("%d seconds is %d hours and %.2f minutes.\n",seconds,hours,minutes );

		//get new seconds value from user
		printf("Please enter the number of seconds:\n");
		scanf("%d", &seconds);
	}

	//if the seconds is not positive number, let user know the program stoped
	printf("Seconds you enter is not larger than 0. Stop the program.\n");

	return 0;
}