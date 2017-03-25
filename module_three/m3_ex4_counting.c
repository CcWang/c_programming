/************************************************
* filename: m3_ex4_counting.c
* Exercise: Module 3, Exercise 4
* Name: Chongchong Wang
* Date Created: March 24, 2017
*
* Description: This program reads input until encountering the # character,
* then reports the number of spaces read, 
* the number of new line characters read, 
* and the number of all other characters read.
*************************************************/ 

#include <stdio.h>
#include <ctype.h>   // to use isspace()
#include <stdbool.h>  // to use bool, true, false

#define STOP '#'	// define stop character

int main(void){
	char ch;
	char prev; 				// get previous ch value
	int num_lines = 0;		// to get the number of new line characters read
	int num_spcaes = 0;	// to get the number of spaces read
	long num_other_chars = 0;	//for all other characters
	int partial_line = 0;

	printf("Please enter any text. (Enter '#' to quit) :\n");
	prev = '\n';
	// when user didn't enter '#', the while loop will run
	while((ch = getchar()) !=STOP) {

		// if user changed the line, ch will be '\n',  number of line add one.
		if(ch == '\n')
			num_lines ++;

		// check if is a space, isspace returns true means it is a space, number of spaces add one
		else if(isspace(ch))
			num_spcaes++;

		// other characters add to number of other characters
		else
			num_other_chars++;

		// save character value
		prev = ch;
	}

	// usually the last line, user will not change the line, so that count as a partial line. need to be added into total number of lines.
	if(prev !='\n'){
		partial_line = 1;
	}
	
	//display all the information
	printf("Number of lines is %d, number of spaces is %d, number of other characters is %ld. \n", num_lines+partial_line, num_spcaes, num_other_chars );


	return 0;
}