#include <stdio.h>
#define PAGES 959
int main(void){
	printf("*%d*\n", PAGES );
	printf("*%2d*\n", PAGES );
	//*          959*
	printf("*%10d*\n", PAGES );
	//*959          *
	printf("*%-10d*\n", PAGES );

	return 0;
}