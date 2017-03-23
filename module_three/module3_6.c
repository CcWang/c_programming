#include <stdio.h>

int main(void){
	int selection;
	printf("1. Option A\n");
	printf("2. Option B \n");
	printf("3. Option C \n");
	printf("Enter your selection (1,2,or 3): ");
	scanf(" %d", &selection);
	switch (selection){
		case 1:
			printf("You chose option A\n");
			break;
		case 2:
			printf("You chose option B\n");
			break;
		case 3:
			printf("You chose option C\n");
			break;
		default:
			printf("You did not choose a valid option");
	}
}