/******************************************************
* Filename:   m2_ex4_sales_tax.c
* Exercise:   Module 2, Exercise 4
* Programmer: Bob Adams
* Date Created: 11/1/2009
*
* Description: This program calculates the total
* cost of a single item with sales tax.  The user
* inputs the price of the item and the program
* returns the total price with sales tax.
* Sales tax is a constant supplied by the program.
*******************************************************/
#include <stdlib.h> //for system pause statement
#include <stdio.h>

//Define Tax Rate Constant
#define SALES_TAX 0.056

int main(void)
{
   float item_price;    // user input
   float total_price;   // calculated price including sale tax
   int dollars;         // calculated from total_price
   float cents;         // calculated from total_price

   printf("********************************************************\n");
   printf("Description: This program calculates the total \n");
   printf("cost of a single item with sales tax.\n");
   printf("The sales tax is defined as a program constant of 5.6%%.\n");
   printf("Terminate the program by entering a 0.\n");
   printf("********************************************************\n\n");

   do
   {
      //input item price from user.
      printf(" What is the price of the item in dollars?: ");
      scanf("%f", &item_price);

      //Calculate the dollar amount of the total price with tax included.
      total_price = item_price * (1.0 + SALES_TAX);

      //Truncate the dollar value by converting total price to an interger.
      dollars = (int)total_price;

      //Gets number of cents. Leaves in float format for rounding not truncating.
      cents = 100.0 * (total_price - dollars);

      //Output results in desired format.
      printf("Item price of $%.2f with sales tax is %d dollars and %.f cents.
              \n\n",item_price, dollars, cents);

      } while (item_price > 0.0);

   system("pause");

   return 0;
}