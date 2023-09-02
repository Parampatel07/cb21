// Write a programe to create a menu driven calc using function
// addition
// subtraction
// multiplication
// division
// modulus
// exit
#include <stdio.h>

int getAdd(int number1, int number2)
{
     int answer = number1 + number2;
     return answer;
}

int getSub(int number1, int number2)
{
     int answer = number1 - number2;
     return answer;
}

int getMulti(int number1, int number2)
{
     return number1 * number2;
}

int getDiv(int number1, int number2)
{
     return number1 / number2;
}

int getMod(int number1, int number2)
{
     return number1 % number2;
}

void main()
{
     int number1 = 0, number2 = 0;
     int option = 0;
     int answer = 0;
     do
     {
          printf("\nEnter value of number 1 ");
          scanf("%d", &number1);
          printf("\nEnter value of number 2 ");
          scanf("%d", &number2);
          printf("\nEnter 1 for addition ");
          printf("\nEnter 2 for subtraction ");
          printf("\nEnter 3 for multiplication ");
          printf("\nEnter 4 for division ");
          printf("\nEnter 5 for modulud ");
          printf("\nEnter 0 for exit ");
          printf("\nSelect any one option ");
          scanf("%d", &option);

          if (option >= 0 && option <= 5)
          {

               switch (option)
               {
               case 1:
                    answer = getAdd(number1, number2);
                    break;

               case 2:
                    answer = getSub(number1, number2);
                    break;

               case 3:
                    answer = getMulti(number1, number2);
                    break;

               case 4:
                    answer = getDiv(number1, number2);
                    break;

               case 5:
                    answer = getMod(number1, number2);
                    break;

               case 0:
                    break;
               }
               if (option != 0)
               {
                    printf("\nThe value of answer is %d ", answer);
               }
          }
          else
          {
               printf("\nInvalid Option ");
          }
          printf("\nEnter any number to continue or 0 to exit ");
          scanf("%d", &option);
     } while (option != 0);
}