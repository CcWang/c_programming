#include <stdio.h>
#define SPACE ' ' //that's quote-spce-quote

int main(void){
	char ch;

	//ch = getchar();
	while ((ch=getchar()) != '\n'){
		if(ch == SPACE) // leave the space
			putchar(ch); // character unchanged
		else
			putchar(ch+1); // change other characters
		ch = getchar(); //get next character
	}
	putchar(ch);	// print the new line

	return 0;
}