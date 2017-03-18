#include <stdio.h>
int main(void){
	int quantity, total=0;
	printf("Program to calculate total number of tickets sold \n\n");
	do{
		printf("Enter tickets sold (0 to exit): ");
		scanf("%d", &quantity);
		total +=quantity;
		printf("Total number of tickets sold =%d\n\n",total );
	
	}while(quantity >0);

	return 0 ;
	
}