/******************************************************
* Filename: m2_ex2_trip_time.c 
* Exercise: Module 2, Exercise 2
* Name: Bob Adams
* Date Created: 10/15/2011 
*
* Description: This program requests input for
* trip length in miles, a speed in miles per hour
* and then calculates the trip time in hours.
*******************************************************/

#include <stdio.h>

int main(void)
{
   char name[40];   // user input
   float miles;     // user input
   float speed;     // user input
   float trip_time; // calculated value from two user inputs

   printf("************************************************\n");
   printf("Description: This program requests input for\n");
   printf("trip length in miles, a speed in miles per hour\n");
   printf("and then calculates the trip time in hours.\n");
   printf("************************************************\n\n");

   //input user's name.
   printf("What is your first name? ");
   scanf("%s", name);

   //input trip length as a float.
   printf("\n\nInput your trip length in miles: ");
   scanf("%f.2", &miles);

   //input trip speed as a float.
   printf("\n\nInput your speed in miles per hour: ");
   scanf("%f.2", &speed);

   //calculate trip time with user entered distance and speed
   trip_time = miles / speed;
   
   //output results to user
   ("%s, %.f mi at %.f mph takes %.1f hrs.\n",name,miles,speed,trip_time);

   system("pause");

   return 0;
}