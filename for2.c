// Write a programe to findout factorial of given number
#include <stdio.h>
void main()
{
     int number = 0;
     int answer = 0;
     int temp = 0;
     printf("Enter value of number ");
     scanf("%d", &number);

     if (number < 0)
     {
          printf("Negative number do not have factorial ");
     }
     else if (number == 0 || number == 1)
     {
          printf("The value of answer is 1 ");
     }
     else
     {
          answer = number * (number - 1); //  5 * 4 = 20

          for (temp = 2; temp < number; temp++)
          {
               answer = answer * (number - temp);
          }
          // 20 * 3 = 60
          // answer = answer * (number - 3);// 60 * 2 = 120
          // answer = answer * (number - 4);
          printf("The value of answer is %d ", answer);
     }
}