// Example of Function
// Write a programe to peform subtraction of 2 variable
#include <stdio.h>

void getSub(int n1, int b2)
{
     int answer = 0;
     answer = n1 - b2;
     printf("\nThe value of answer is %d ", answer);
}

void main()
{
     int number1 = 0, number2 = 0;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     getSub(number2, number1);
}