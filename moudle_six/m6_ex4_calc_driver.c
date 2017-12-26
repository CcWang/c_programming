/************************************************
 * filename: m6_ex4_calc_drive.c
 * Exercise: Module 6, Exercise 4
 * Name: Chongchong Wang
 * Date Created: March 29, 2017
 *
 * Description: This program radds and subtracts.
 * Prompt the user to enter two values and select an operation to perform. 
 * Incorporate a program with five modules and functions named as follows:

 * a.calc_driver.c - contains the function main( ) and the user interface
 * b.addition.h - contains the prototype for a function named add( )
 * c.addition.c - contains the function definition for add( )
 * d.subtraction.h - contains the prototype for a function named subtract( )
 * e.subtraction.c - contains the function definition for subtract( )

 **************************************************/

#include <stdio.h>
#include <string.h>
// include the header files
#include "addition.h"
#include "subtraction.h"

int main(void) {
    char op;
    double a, b,result;

    //get a, b value from user
    printf("please enter two values:\n");
    scanf("%lf %lf", &a, &b);

    //flush buffer
    while(getchar() != '\n')
        continue;

    //ask user want to add or subtracts
    printf("what operation to do? + or -:");
    // get operation 
    op = getchar();
    
    if (op == '+') {
        result = add(a, b);
    } else if (op == '-') {
        result = subtract(a, b);
    } else {
        printf("wrong operator\n");
        return 1;
    }

    //print result
    printf("result: %lf\n", result);
    return 0;
}
