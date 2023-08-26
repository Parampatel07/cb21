// Write a programe to print hollow inverted half pyramid
#include <stdio.h>
void main()
{

     int count = 0;
     int space = 0;
     int flash = 3;
     do
     {
          printf("*");
          count = count + 1;
     } while (count < 6);
     printf("\n");
     do
     {
          space = 0;
          printf("*");
          do
          {
               printf(" ");
               space++;
          } while (space < flash);
          printf("*");
          printf("\n");
          flash--;
     } while (flash > 0);
     count = 0;
     do
     {
          printf("*");
          count++;
     } while (count < 2);
     printf("\n");
     printf("*");
     // printf("*");
     // space = 0;
     // do
     // {
     //      printf(" ");
     //      space++;
     // } while (space < 2);
     // printf("*");
     // printf("\n");
     // printf("*");
     // space = 0;
     // do
     // {
     //      printf(" ");
     //      space++;
     // } while (space < 1);
     // printf("*");
     // printf("\n");
}