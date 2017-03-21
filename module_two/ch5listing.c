#include <stdio.h>
int main(void)
{
	/* code */
	int i=1;
	float n;
	while(++i<6){
		n=1.0/i;
		printf("n is %f and int i is %d\n",n,i );
	}
	return 0;
}