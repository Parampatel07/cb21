// Write a programe to print even numbers till 6000
#include <stdio.h>
void main()
{
     int number = 1;

     // while(number < 6000)
     // {
     //      printf("%d ", number);
     //      number = number + 2;
     // }
     // 4
     // printf("%d ",number);
     // number = number + 2 ;// 6
     // printf("%d ",number);
     // number = number + 2 ;// 8
     // printf("%d ",number);
     // number = number + 2 ;// 10

     while(number < 6000)
     {
          if (number % 2 == 0)
          {
               printf("%d ", number);
          }
          number = number + 1;
     } // 2
     // if(number % 2 == 0)
     // {
     //      printf("%d ",number);
     // }
     // number = number + 1 ;
     // if(number % 2 == 0)
     // {
     //      printf("%d ",number);
     // }
     // number = number + 1 ;
}