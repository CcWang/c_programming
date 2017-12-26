/************************************************
* filename: m3_ex2_box_area_volume.c
* Exercise: Module 3, Exercise 2
* Name: Chongchong Wang
* Date Created: March 23, 2017
*
* Description: This program calculate and dispaly a rectangular box's area and volume
* based on user's input
*************************************************/ 

#include <stdio.h>

int main(void){

	float length, width, height, surface_area, volume;

	printf("Please enter the length.\n");


	// get length value from user. The loop will only run when length only get one value and length is positive
	while(scanf("%f", &length) == 1 && length >0.0){

		// get width value from user. if width did not get value or is not positive, jump out of while loop. finish the function.
		if(scanf("%f", &width) !=1 || width <=0.0){
			break;
		}

		// get height value from user. if height did not get value or is not positive, jump out of while loop. finish the function.
		if(scanf("%f", &height) !=1 || height <=0.0){
			break;
		}

		// calculate surface area and volume
		surface_area = (length * width + width * height + length * height) * 2;
		volume = length * width * height;

		// display the area and volume.
		printf("The surface area is %.2f\n", surface_area );
		printf("The volume of box is %.2f\n", volume);

		// ask user a new value
		printf("Enter the length of the rectangle:\n");
	}

	// tell user the program is done.
	printf("Done! \n");

	return 0;
}