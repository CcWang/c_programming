#include <stdio.h>
int main(void){
	int n=3;

	while (n)
		// don't need {}, 
		printf("%2d is true \n",n-- );
	printf("%2d is false\n",n );

	n = -3;
	while (n)
		printf("%2d is true \n",n++ );
	printf("%2d is false \n", n);

	return 0;
}
//all nonzero values are regarded as true, and only 0 is recognized as false. C has a very tolerant notion of truth!