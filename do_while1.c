// Write a programe to print square of first 200 numbers
#include <stdio.h>
void main()
{
     int number = 1;
     int answer = 0;

     do
     {
          answer = number * number;
          printf("%d ", answer);
          number = number + 1;
     } while (number <= 200);
     // answer = number * number ;
     // printf("%d ",answer);
     // number++;
     // answer = number * number ;
     // printf("%d ",answer);
     // number++;
     // answer = number * number;
     // printf("%d ",answer);
}