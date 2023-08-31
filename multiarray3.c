// Write a programe to print array in desc order
#include <stdio.h>
void main()
{
     int number[5];
     int count = 0;
     int temp = 0;
     int flash = 0;
     for (count = 0; count < 5; count++)
     {
          printf("Enter value of number %d ", count + 1);
          scanf("%d", &number[count]);
     }
     for (count = 0; count < 5; count++)
     {
          printf("\nThe value of number %d is %d ", count + 1, number[count]);
     }
     for (flash = 0; flash < 5; flash++)
     {
          for (count = flash + 1; count < 5; count++)
          {
               if (number[flash] < number[count])
               {
                    temp = number[flash];
                    number[flash] = number[count];
                    number[count] = temp;
               }
          }
     }
     printf("\n\n");
     for (count = 0; count < 5; count++)
     {
          printf("\nThe value of number %d is %d ", count + 1, number[count]);
     }
     // for (count = 2; count < 5; count++)
     // {
     //      if (number[1] < number[count])
     //      {
     //           temp = number[1];
     //           number[1] = number[count];
     //           number[count] = temp;
     //      }
     // }
     // if(number[1] < number[3])
     // {
     //      temp = number[1];
     //      number[1] = number[3];
     //      number[3] = temp ;
     // }

     // if (number[0] < number[2])
     // {
     //      temp = number[0];
     //      number[0] = number[2];
     //      number[2] = temp;
     // }
     // if (number[0] < number[3])
     // {
     //      temp = number[0];
     //      number[0] = number[3];
     //      number[3] = temp;
     // }
}