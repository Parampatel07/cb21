// Write a programe to print half pyramid
#include <stdio.h>
void main()
{

     int count = 0;
     int flash = 0;
     // printf("*");
     // printf("\n");

     while(flash < 6)
     {
          while (count <= flash)
          {
               printf("*");
               count = count + 1;
          }
          printf("\n");
          count = 0;
          flash = flash + 1 ;
     }
     // while (count < 3)
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
     // count = 0;
     // while (count < 5)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count = 0 ;
     // while(count < 6)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
}