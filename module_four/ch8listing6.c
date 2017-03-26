#include <stdio.h>
void display(char cr, int lines, int width);

int main (void){
	int ch;
	int rows, cols;

	printf("Enter a character and two integers: \n");
	while ((ch = getchar()) != '\n'){
		if(scanf("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		/*
		Unlike scanf(), getchar() doesn’t skip over newline characters, 
		so this newline char- acter is read by getchar() during the next 
		cycle of the loop before you have a chance to enter anything else. 
		Then it’s assigned to ch, and ch being the newline character 
		is the condition that terminates the loop.
		 the program has to skip over any newlines or spaces between the last number typed for one cycle of input 
		 and the character typed at the beginning of the next line. 
		 Also, it would be nice if the program could be terminated at the scanf() stage in addition to the getchar() test.
		*/
		while(getchar() != '\n')
			continue;
		printf("Enter another set\n");
		printf("Enter a newline to quit.\n");
	}

	printf("Bye. \n");
	return 0;
}

void display(char cr, int lines, int width) {
	int row, col;

	for(row = 1; row <=lines; row++){
		for(col = 1; col <=width; col++)
			putchar(cr);
		putchar('\n');
	}
}