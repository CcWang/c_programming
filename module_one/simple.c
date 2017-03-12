#include <stdio.h>

void butler(void);
int main(void)
{
	int num;
	num = 1;
	printf("I am a simple ");
	printf("computer. \n");
	butler();
	printf("My favorite number is %d because it is first. \n", num );
	return 0;
}

void butler(void){
	printf("讨厌你！\n");
}
