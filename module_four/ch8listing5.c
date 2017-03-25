#include <stdio.h>

void display(char cr, int lines, int width);
int main(void){


	int ch;
	int rows, cols;
	printf("Enter a character and two integers: \n");

	// user 打完input后敲的回车，导致最后一个ch是'\n'，所以while之可能执行一次
	while ((ch = getchar()) !='\n'){
		scanf("%d %d", &rows, &cols);
		display(ch,rows,cols);
		printf("Enter antoher sets\n");
		printf("Enter a newline to quit\n");
	}

	printf("Bye.\n");

	return 0;
}

void display (char cr, int lines, int width){
	int row, col;
	for(row = 1; row <=lines; row++){
		for(col = 1; col<=width; col++){
			putchar(cr);
		}
		putchar('\n');
	}
}