/************************************************
* filename: m4_ex3_characters.c
* Exercise: Module 4, Exercise 3
* Name: Chongchong Wang
* Date Created: March 26, 2017
*
* Description: This program will prompts the user to enter in a character and an integer. 
* And d displays the character by duplicating it the integer number of times 
* on the screen with a single space between the characters.
*************************************************/
#include <stdio.h>
// declare repeat_character function
void repeat_character(char ch, int num);

int main (void){

	char ch;
	int num;

	printf("Enter a character and one integer: \n");
	//Get ch value and jump out of the while loop when user entered a new line.
	while((ch = getchar()) !='\n'){
		// check if user provided a integer. if not, break the loop.
		if(scanf("%d", &num) != 1)
			break;

		//pass ch and num value to repeat_character function.
		repeat_character(ch, num);

		// in case jump out of the loop because of reading the last '\n' user entered
		while(getchar() != '\n')
			continue;

		printf("Enter another set of character and integer. \n");
		printf("Enter a newline to quit.\n");
	}

	printf("Done. \n");
	return 0;
}

// to repeat character 'num' value times
void repeat_character(char ch, int num){
	int i;
	for(i = 0; i<num; i++)
		putchar(ch);
	putchar('\n');
}