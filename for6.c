// Write a programe to print hollow inverted half pyramid
#include <stdio.h>
void main()
{
     int adder = 2;
     int flash = 0;
     int count = 0;
     for (count = 0; count < 6; count++)
     {
          printf("%d ",count+1);
     }
     printf("\n");
     for (flash = 3; flash >= 0; flash--)
     {
          printf("%d ",adder);
          adder = adder + 1;
          for (count = 0; count < flash; count++)
          {
               printf("  ");
          }
          printf("6 ");
          printf("\n");
     }
     printf("6 ");
     // printf("*");
     // for (count = 0; count < 2; count++)
     // {
     //      printf("_");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // for (count = 0; count < 1; count++)
     // {
     //      printf("_");
     // }
     // printf("*");
     // printf("\n");
     // printf("*");
     // printf("*");
}