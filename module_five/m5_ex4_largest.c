/************************************************
 * filename: m5_ex4_largest.c
 * Exercise: Module 5, Exercise 4
 * Name: Chongchong Wang
 * Date Created: March 27, 2017
 *
 * Description: This program uses a 10-element integer array and prompts the user for 10 integer values to populate the array.
 * Pass a pointer of this array to a function called largest( ) that you create as part of your program.
 * The function largest( ) then returns the largest value stored in the array.
 * The function main( ) outputs the largest value contained in the array.
 **************************************************/
#include <stdio.h>
#include <limits.h>

#define SIZE 10

int largest(int *a);

int main(void) {
    int a[SIZE];
    int i = 0;
    // ask user to enter int for SIZE times
    while (i < SIZE) {
        printf("Please enter an integer: ");
        if (scanf("%d", &a[i]) == 1) {
            i++;
        } else {
            // flush buffer of non-digit chars so scanf will block and wait for new input
            while (getchar() != '\n');
        }
    }
    int l = largest(a);
    printf("largest: %d\n", l);
    return 0;
}

int largest(int *a) {
    // initialize ret to the minimum number in c
    int ret = INT_MIN;
    int i;
    // walk through each int in a, since we don't pass size of a to this function
    // assume a in this file always has size 10
    for (i = 0; i < SIZE; i++) {
        // if any int in a is larger than ret, update it
        if (*(a + i) > ret)
            ret = *(a + i);
    }
    return ret;
}