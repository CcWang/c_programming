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

	while(scanf("%f", &length) == 1 && length >0.0){

		if(scanf("%f", &width) !=1 || width <=0.0){
			break;
		}
		if(scanf("%f", &height) !=1 || height <=0.0){
			break;
		}

		surface_area = (length * width + width * height + length * height) * 2;
		volume = length * width * height;

		printf("The surface area is %.2f\n", surface_area );
		printf("The volume of box is %.2f\n", volume);
		printf("Enter the length of the rectangle:\n");
	}

	printf("Done! \n");

	return 0;
}