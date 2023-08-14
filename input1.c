// Example of input 
#include<stdio.h>
#include<stdlib.h>
void main()
{
     int number1 = 0 ;
     float num2 = 0 ;
     char letter = ' ';

     printf("Enter value of number 1 ");
     scanf("%d",&number1);
     printf("Enter value of num2 ");
     scanf("%f",&num2);
     fflush(stdin);
     printf("Enter any one letter ");
     scanf("%c",&letter);

     printf("The value of number 1 is %d ",number1);
     printf("\nThe value of num2 is %f ",num2);
     printf("\nThe value of letter is %c ",letter);
}