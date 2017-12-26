/************************************************
 * filename: m5_ex3_sort_integers.c
 * Exercise: Module 5, Exercise 3
 * Name: Chongchong Wang
 * Date Created: March 27, 2017
 *
 * Description: This program uses a 10-element integer array 
 * and prompts the user for 10 integer values to populate the array.
 * Pass a pointer of this array to a function called sort( ) that 
 * sorts the numbers from smallest to largest and outputs the sorted numbers to the user.
 **************************************************/

#include <stdio.h>
#include <limits.h>

#define SIZE 10

void sort(int *a);

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
    sort(a);
    for (i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

void sort(int *a) {
    // selection sort
    int i, j, x;
    // advance the position through the entire array
    // (could do j < n-1 because single element is also min element)
    for (j = 0; j < SIZE - 1; j++) {
        // find the min element in the unsorted a[j .. n-1]
        // assume the min is the first element
        int min = j;
        // test against elements after j to find the smallest
        for (i = j + 1; i < SIZE; i++) {
            // if this element is less, then it is the new minimum
            if (a[i] < a[min]) {
                // found new minimum; remember its index
                min = i;
            }
        }
        if (min != j) {
            x = a[min];
            a[min] = a[j];
            a[j] = x;
        }
    }
}