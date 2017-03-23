#include <stdio.h>

int main(void){
	char ch;
	printf("Type sth and press enter (Ctrl C to exit): \n");
	while(1){
		ch = getchar();
		putchar(ch);
		putchar(ch);
	}

	return 0;
}