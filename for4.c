// Write a programe to print full pyramid
#include <stdio.h>
void main()
{
     int space = 0;
     int count = 0;
     int flash = 0;
     int adder = 1;
     
     for(flash = 6 ; flash > 0 ; flash--)
     {
          for (space = 0; space < flash; space++)
          {
               printf(" ");
          }
          for (count = 0; count < adder; count++)
          {
               printf("*");
               printf(" ");
          }
          printf("\n");
          adder++;
     }

     // for (space = 0; space < 6; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // for (space = 0; space < 5; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf(" ");
     // printf("*");
     // printf("\n");

     // for (space = 0; space < 3; space++)
     // {
     //      printf(" ");
     // }
     // for(count = 0 ; count < 4 ; count++)
     // {
     //      printf("*");
     //      printf(" ");
     // }
}