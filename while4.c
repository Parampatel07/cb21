// Write a programe to print following pattern
// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
// 1  4  7  10 13  16  19  21
// 1  3  3  3
#include <stdio.h>
void main()
{
     int number = 1;
     int temp = 4;

     while(number < 3000)
     {
          printf("%d ", number);
          number = number + temp;
          temp = temp + 3;
     }                      // 7
     // printf("%d ", number); // 5
     // number = number + temp;
     // temp = temp + 3;       // 10
     // printf("%d ", number); // 12
     // number = number + temp;
     // temp = temp + 3;       // 13
     // printf("%d ", number); // 22
     // number = number + temp;
     // printf("%d ", number); // 35
}