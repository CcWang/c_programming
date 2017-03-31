/************************************************
 * filename: m6_ex2_structure.c
 * Exercise: Module 6, Exercise 2
 * Name: Chongchong Wang
 * Date Created: March 29, 2017
 *
 * Description: This program reates a structure template with the following data fields. 
 * The program should then prompt the user to enter the data to populate the structure. 
 * Finally, use printf( ) to display the information entered by the user.

 *1. Account number
 *2. Account owner street address (string)
 *3. Account owner city/state (string)
 *4. Account owner zip code
 *5. Account balances
 *6. Account credit limit
 *7. Account name
 **************************************************/
#include <stdio.h>
#include <string.h>

#define MAXSTR 100	// maximum length of street address
#define MAXCITYST 50 //maximum length of city state
#define MAXNAME 40	//maximum length of name
#define SEPLINE "**************************************"

// to get string and remove usless '\n'
char * s_gets(char * st, int n);

// build structure template
struct account {
	// accoubnt number is positive and can be very long
	unsigned long int account_number;

	char street_address[MAXSTR];
	char city_state[MAXCITYST];
	int zip_code;
	// balances and credit limit can be long and can have mutiple decimal places
	long double balances;
	long double credit_limit;

	char name[MAXNAME];
};

int main(void){

	// declare acc as a account variable
	struct account acc;

	// ask user to enter account number
	printf("Please enter your account number: \n");
	// use scanf to store account number value
	scanf("%lu", &acc.account_number);
	// flush buffer
	while(getchar() !='\n')
		continue;

	//ask the user to enter street address
	printf("Please enter your street address: \n");
	// access to the street_address portion
	s_gets(acc.street_address, MAXSTR);


	//ask the user to enter city and state
	printf("Please enter your city and state (useing: city/state): \n");
	// access to the city_state portion
	s_gets(acc.city_state, MAXCITYST);

	// ask user to enter zip code
	printf("Please enter your zip code: \n");
	// use scanf to store zip code value
	scanf("%d", &acc.zip_code);
	// flush buffer
	while(getchar() !='\n')
		continue;

	// ask the balance and store to the balance portion
	printf("Please enter your balance: \n");
	scanf("%Lf", &acc.balances);
	// to remove the '\n'
	while(getchar() !='\n')
		continue;

	//ask the credit limit and store to the credit_limit portion
	printf("Please enter your credit limit: \n");
	scanf("%LF", &acc.credit_limit);
	// flush buffer
	while(getchar() !='\n')
		continue;

	// ask user name and access to the name portion
	printf("Please enter your name: \n");
	s_gets(acc.name, MAXNAME);

	//display all the inforamtion
	printf(SEPLINE"\n");
	printf("Welcome %s,\nyour account number is %lu.\nYou live in %s, %s, %d\nYOur balances are: $%.2Lf\nYour credie limit is $%.2LF\n", acc.name,acc.account_number, acc.street_address, acc.city_state, acc.zip_code,acc.balances,acc.credit_limit );
	

	return 0;
}

char * s_gets(char * st, int n){
	char * ret_val;
	char * find;

	ret_val =fgets(st, n, stdin);

	if(ret_val){
		//look for newline
		find = strchr(st,'\n');

		//if the address is not NULL
		if(find)
			// place a null character there
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;	//dispose of rest of line
	}

	return ret_val;
}


