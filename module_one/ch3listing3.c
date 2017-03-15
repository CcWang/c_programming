#include <stdio.h>

int main(void){
	int x =100;
	//use single quote for char, double quote for string
	char grad ='A';
	char beep = '\007';
	printf("dec=%d,; octal = %o; hex = %x\n",x,x,x );
	printf("dec=%d,; octal = %#o; hex = %#x\n",x,x,x );
	printf("%c\n", grad );
	printf("Hello!\007\n");
	return 0;
}