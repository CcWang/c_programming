#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch;

	printf("Give me a letter of the alphabet, and I will give ");
	printf("an animal name\nbeginning with that letter.\n");
	printf("Please type in a letter; type # to end my act. \n");

	while ((ch = getchar()) !='#') {
		if('\n' == ch)
			continue;
		if(islower(ch)){
			switch (ch)
		
			{
				case 'a' :
					printf("argali, a wild sheep of Asia\n");
					break;
				default :
					printf("don;t want to type\n");
			}
		}
		else
			printf("lowercase only\n");
		while (getchar() !='\n')
			continue;
		printf(" another\n");
	}

	printf("Bye! \n");

	return 0;
}