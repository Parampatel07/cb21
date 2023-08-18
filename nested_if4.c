// Write a programe to print number in words only 2 digit number
// --> 71
// five six
#include <stdio.h>
void main()
{
     int number = 0;
     int first = 0, second = 0;
     printf("Enter any 2 digit number ");
     scanf("%d", &number);

     first = number / 10;
     second = number % 10;
     printf("The value of first is %d and second is %d \n", first, second);

     if (number < 0 && number >= 100)
     {
          printf("Invalid input ");
     }
     else
     {
          if (first == 1)
          {
               printf("One ");
          }
          else if (first == 2)
          {
               printf("Two ");
          }

          if (second == 1)
          {
               printf("One ");
          }
          else if (second == 2)
          {
               printf("Two ");
          }
     }
}