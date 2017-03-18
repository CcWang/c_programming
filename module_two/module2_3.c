#include <stdio.h>

int main(void){
	int a=2;
	int b=6;
	int c=9;

	int y;
	y=a+b/2*c++;
		//y will be 29; c++ will only make c increase, c will become 10
	printf("a+b/2*c++ will be %d\t c will be %d\n",y,c );
	return 0;
}