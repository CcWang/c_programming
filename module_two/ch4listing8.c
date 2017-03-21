#include <stdio.h>
#define QUOTE "Hopefully this will help!"
int main(void){
	const double RENT = 3852.99; // const-style constant
	/* there are two defaults—the field width and the number of digits to the right of the decimal. 
	The second default is six digits, and the field width is whatever it takes to hold the number.*/
	printf("*%f*\n", RENT );
	printf("*%e*\n", RENT );
	printf("*%4.2f*\n", RENT );
	printf("*%3.1f*\n", RENT );
	printf("*%10.3f*\n", RENT );
	printf("*%10.3E*\n", RENT );
	printf("*%+4.2ff*\n", RENT );
	printf("*%010.2f*\n", RENT );
	printf("The answer is %10.1f\n", 1.2345 );
	//printf("/%10.5s/", QUOTE );
	printf("x=%010d\n",43 );
	printf("%c",'\x4d' );
	char name[40];
	scanf("%s %s", name,name);
	printf("%s \n",  name);
	return 0;
}