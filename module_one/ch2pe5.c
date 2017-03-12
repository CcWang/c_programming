#include <stdio.h>

void br(void){
	printf("Brazil, Russia");
}

void ic(void){
	printf("India, China");

}

int main()
{
	/* code */
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	return 0;
}