// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 1000
// 1, 5 , 9 ,13 , 17 , 21 , 25
#include <stdio.h>
void main()
{
     int number = 1;
     int temp = 5;

     printf("%d ", number);
     for (temp = 5; number < 946; temp = temp + 4 )
     {
          number = number + temp;
          printf("%d ", number);
     }
     // number = number + temp ;
     // printf("%d ",number);
     // temp = temp + 4 ;
     // number = number + temp;
     // printf("%d ",number);
     // temp = temp + 4 ;
     // number = number + temp;
     // printf("%d ",number);
     // temp = temp + 4 ;
     // number = number + temp;
     // printf("%d ",number);
}