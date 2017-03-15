#include <stdio.h>
int main(void)
{
	/* code */
	char ch;
	printf("Please enter a character. \n");
	scanf("%c", &ch); /*user inputs character*/
	// chance to standard ASCII code runs numerically from 0 to 127. 
	printf("The code for %c is %d. \n", ch,ch );

	return 0;
}