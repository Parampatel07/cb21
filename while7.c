#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 5;
     int number = 1;
     while (flash > 0)
     {
          while (count < flash)
          {
               printf("%d ", number);
               count = count + 1;
               number = number + 1;
          }
          printf("\n");
          number = 1;
          count = 0;
          flash = flash - 1;
     }
     // while (count < 5)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0 ;
     // while(count < 3)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("*");
     // printf("*");
}