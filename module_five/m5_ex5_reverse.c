/************************************************
 * filename: m5_ex5_reverse.c
 * Exercise: Module 5, Exercise 5
 * Name: Chongchong Wang
 * Date Created: March 27, 2017
 *
 * Description: This program will prompt the user for a character string.
 * Pass this string to a function called reverse( ) that you create as part of your program.
 * The function reverse( ) then reverses the order of all of the characters in the string.
 * The function main( ) then prints out the reversed string array.
 *************************************************/

#include <stdio.h>

void reverse(char *s1);

int main(void) {
    // test different cases, with even/odd/single/no chars.
    char a[] = "long";
    reverse(a);
    printf("%s\n", a);

    char b[] = "abc";
    reverse(b);
    printf("%s\n", b);

    char c[] = "x";
    printf("%s\n", c);

    char d[] = "";
    printf("%s\n", d);

    return 0;
}

void reverse(char *s1) {
    // to find length of s1, excluding NULL character
    int length = 0;
    while (s1[length] != '\0')
        length++;
    // reverse order of chars in s1 by swapping chars on two ends and walking to the middle
    int i;
    char x;
    for (i = 0; i <= length - i - 1; i++) {
        x = s1[length - i - 1];
        s1[length - i - 1] = s1[i];
        s1[i] = x;
    }
}