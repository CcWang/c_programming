#include <stdio.h>
int main(void){
	int z =1;
	int *p;

	p=&z;
	printf("z is %d, address of z = %d, and p is %d", z, &z, p);
	*p = 5;
	printf("z=%d",z);

	return 0;
}