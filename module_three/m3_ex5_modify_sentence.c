/************************************************
* filename: m3_ex5_modify_sentence.c
* Exercise: Module 3, Exercise 5
* Name: Chongchong Wang
* Date Created: March 24, 2017
*
* Description: This program reads in a single sentence up to the period. 
* The program outputs the modified sentence with all of the spaces removed
*  and replaces each of the vowels with the letter 'Z'.
*************************************************/ 

#include <stdio.h>
#include <ctype.h>   // to use isspace(), islower(), isupper()
#include <stdbool.h>  // to use bool, true, false

#define STOP '.'   // define the stop character
int main(void){

	char ch;
	bool isVowel; // bool, true or false

	printf("Please enter any text (Type '.' to stop): \n");
	while ((ch=getchar()) !=STOP){
		// check if the ch is an vowel
		// check for lower letter first 
		if(islower(ch)){
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
				// set bool isVowel true if character is an vowel
				isVowel = true;
			else
				// set bool isVowel false if character is not an vowel
				isVowel = false;
		}

		// check for upper letter
		if(isupper(ch)) {
			// set bool isVowel true if character is an vowel
			if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
				isVowel = true;
			// set bool isVowel false if character is not an vowel
			else
				isVowel = false;
		}

		//if isVowel is true, need to replace the vowels to 'Z'
		if(isVowel)	{
			ch = 'Z';
			//reset the bool value
			isVowel = false;
		}
		// if ch is a spcae, do not print the space by using 'continue' to jump to while loop condition.
		if(isspace(ch))
			continue;
		// print the ch
		printf("%c",ch );


	}

	printf("\nDone! \n");
	return 0;
}