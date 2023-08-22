// Write a programe to print following pattern
// 1 8 27 64 .... 10000
#include <stdio.h>
void main()
{
     int number = 1;
     int answer = 0;
     printf("%d ", number);
     
     while(answer < 9261)
     {
          number = number + 1;
          answer = number * number * number; // 8
          printf("%d ", answer);
     }
     // number = number + 1;
     // answer = number * number * number; // 27
     // printf("%d ", answer);
     // number = number + 1;
     // answer = number * number * number; // 64
     // printf("%d ", answer);
}