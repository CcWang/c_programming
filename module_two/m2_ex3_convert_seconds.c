/******************************************************
* Filename: convert_seconds.c
* Exercise: Module 2, Exercise 3
* Name: Bob Adams
* Date Created: 11/30/2009
*
* Description: This program converts seconds to 
* hours and minutes. The user can enter as many
* values as they want and can terminate the
* program by entering a 0 or a negative value.
*******************************************************/
#include <stdlib.h> //for system pause statement
#include <stdio.h>

//Define Time Constants
#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_MINUTE 60.0

int main(void)
{
   unsigned int seconds;  // user input
   unsigned int hours;    // calculated from seconds
   float minutes;         // calculated from seconds

   printf("**************************************************\n");
   printf("Description: This program converts seconds to \n");
   printf("hours and minutes. Enter seconds in as an integer.\n");
   printf("Terminate the program by entering a 0.\n");
   printf("**************************************************\n\n");

   do
   {
      //input seconds from user.
      printf("Input the number of seconds: ");
      scanf("%d", &seconds);

      //Calculate hours from seconds
      hours = seconds / SECONDS_IN_HOUR;

      //Calculate fractional minutes from remainder of seconds from hours
      minutes = (seconds % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE;

      //Output results in desired format.
      printf("%d secs is %d hrs and %.2f mins.\n\n",seconds, hours, minutes);

      } while (seconds > 0);

   system("pause");

   return 0;
}