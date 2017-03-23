#include <stdio.h>
int main(void){
	// uses type long to allow for larger numbers.
	long num;
	long sum = 0L; //type long zero
	printf("Please enter an integer to be summed ");
	printf("(q to quit)\n");
	//status =scanf("%ld", &num);
	while(scanf("%ld", &num)) /* == means "is equal to" */
	{
		sum = sum+num;
		printf("Please enter next integer (q to quit): ");
		//status = scanf("%ld", &num);// if scanf get the right value, will return 1
	}

	printf("Those integers sum to %ld. \n", sum );

	return 0;
}