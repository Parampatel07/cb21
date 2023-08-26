// Write a programe to print table of 5
// 5 x 1 = 5
// ..
// 5 x 10 = 50
#include <stdio.h>
void main()
{
     int table = 0;
     int mutlipler = 1;
     int answer = 0;
     printf("Enter table number ");
     scanf("%d", &table);
     answer = table;
     do
     {
          printf("\n%d x %d = %d ", table, mutlipler, answer);
          mutlipler++;
          answer = table * mutlipler;
     } while (mutlipler <= 10);
     // printf("\n%d x %d = %d ",table,mutlipler,answer);
     // mutlipler++;
     // answer = table * mutlipler;
     // printf("\n%d x %d = %d ",table,mutlipler,answer);
     // mutlipler++;
     // answer = table * mutlipler;
     // printf("\n%d x %d = %d ",table,mutlipler,answer);
}