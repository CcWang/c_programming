#include <stdio.h>
int year = 2017;
void changeYear(void);
int main(void)
{
	/* code */
	year = 2016;
	changeYear();
	printf("%d\n", year );

	return 0;
}
void changeYear(){
	year = 2007;
}