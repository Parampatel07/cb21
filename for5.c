// Write a programe to print hollow full pyramid
// 1
//     1 2
//    1   3
//   1     4
//  1       5
// 1 2 3 4 5 6
#include <stdio.h>
void main()
{
     int space = 0;
     int flash = 0;
     int count = 0;
     int adder = 1;
     int number = 2;
     for (space = 0; space < 5; space++)
     {
          printf(" ");
     }
     printf("1");
     for (flash = 4; flash > 0; flash--)
     {
          printf("\n");
          for (space = 0; space < flash; space++)
          {
               printf(" ");
          }
          printf("1");
          for (count = 0; count < adder; count++)
          {
               printf(" ");
          }
          printf("%d", number);
          adder = adder + 2;
          number = number + 1;
     }
     printf("\n");
     for (count = 1; count <= 6; count++)
     {
          printf("%d",count);
          printf(" ");
     }
     // printf("\n");
     // for (space = 0; space < 3; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // for (count = 0; count < 3; count++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // for (space = 0; space < 2; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // for (count = 0; count < 5; count++)
     //      printf(" ");
     // printf("*");
     // printf("\n");
     // for (space = 0; space < 1; space++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // for (count = 0; count < 7; count++)
     //      printf(" ");
     // printf("*");
}