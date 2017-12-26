/************************************************
* filename: m3_ex3_isPrime.c
* Exercise: Module 3, Exercise 3
* Name: Chongchong Wang
* Date Created: March 23, 2017
*
* Description: This program determines if a user entered integer is a prime number.
*************************************************/ 

#include <stdio.h>
#include <stdbool.h>

int main(void){

	unsigned long num;		//num is a number to be checked
	unsigned long div;		// div is potential divisors
	bool isPrime;			// check if num is prime

	printf("Enter an integer to be tested if a prime number (enter q to quit): ");

	// get user input, and check if get number from user. if not a number, will stop the program.
	// while the scanf() return value is 1, analyze the number and report results
	while(scanf("%lu", &num) == 1){
		// make div the smallest prime and up to square root. 
		for(div = 2, isPrime = true; (div * div)<=num; div++){
			//check if num can be divisible by div
			if(num % div == 0){
				// check if div square value is equal to num. if not, it means, num can be sivisible by num and num/div
				if((div * div) != num)
				printf("The number %lu is not prime because it is divisible by %lu and %lu. \n", num,div, num/div );
				else
					printf("The number %lu is not prime because it is divisible by %lu. \n", num, div);

				//make bool value isPrime false, if num is not a prime number.
				isPrime = false;	
			}
		}

		// if isPrime is true, means the number user gave is a prime.
		if(isPrime){
			printf("The number %lu is a prime. \n", num );

		// continue get number from user.
		printf("Enter an integer to be tested if a prime number (enter q to quit): ");
		}
	}

	// tell user that the program is ended.
	printf("Bye. \n");

	return 0;
}