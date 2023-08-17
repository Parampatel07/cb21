// Write a programe to create a calc
// Addition
// Subtraction
// Mutliplication
// Division
// Modulus
// Max
// Min
// Equality
#include <stdio.h>
void main()
{
     int number2 = 0 ,  number1 = 0; 
     int option = 0, answer = 0;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     printf("\nEnter 1 for Addition ");
     printf("\nEnter 2 for Subtraction ");
     printf("\nEnter 3 for Multiplication ");
     printf("\nEnter 4 for Division ");
     printf("\nEnter 5 for Modulus ");
     printf("\nEnter 6 for Max ");
     printf("\nEnter 7 for Min ");
     printf("\nEnter 8 for Eqaulity ");
     printf("\nSelect any one option ");
     scanf("%d", &option);

     if (option == 1)
     {
          answer = number1 + number2;
          printf("\nThe value of answer is %d ", answer);
     }
     else if (option == 2)
     {
          answer = number1 - number2;
          printf("\nThe value of answer is %d ", answer);
     }
     else if (option == 3)
     {
          answer = number1 * number2;
          printf("\nThe value of answer is %d ", answer);
     }
     else if (option == 4)
     {
          answer = number1 / number2;
          printf("\nThe value of answer is %d ", answer);
     }
     else if (option == 5)
     {
          answer = number1 % number2;
          printf("\nThe value of answer is %d ", answer);
     }
     else if (option == 6)
     {
          if (number1 > number2)
          {
               printf("Number 1 is greater ");
          }
          else if (number2 > number1)
          {
               printf("Number 2 is greater ");
          }
          else if (number1 == number2)
          {
               printf("Both are same ");
          }
     }
     else if (option == 7)
     {
          if (number1 < number2)
          {
               printf("Number 1 is smaller ");
          }
          else if (number2 < number1)
          {
               printf("Number 2 is smaller ");
          }
          else
          {
               printf("Both are same ");
          }
     }
     else if (option == 8)
     {
          if (number1 == number2)
          {
               printf("Both are same ");
          }
          else
          {
               printf("Both are not same ");
          }
     }
     else
     {
          printf("Invalid option ");
     }
     printf("\nGoodbyee...");
}