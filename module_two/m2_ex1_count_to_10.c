/******************************************************
* Filename: m2_ex1_count_to_10.c
* Exercise: Module 2, Exercise 1
* Name: Bob Adams
* Date Created: 7/18/2009
*
* Description: This program uses a while loop to
* count from 1 to 10.
*******************************************************/

#include <stdio.h>

int main(void)
{
   int count = 0;  // initializes counting variable to 0

   printf("This program uses a while loop to count from 1 to 10.\n\n");

   // Checks to see if count is less than 10 and increments count by 1.
   while (++count <= 10)	
      printf("\t%d\n", count);  //Prints current value of count.

   printf("\n\n");  //Some output formatting.

   system("pause");

   return 0;
}