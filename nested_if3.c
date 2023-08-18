// Write a programe to findout zodiac sign of user take birth month and day as input
#include <stdio.h>
void main()
{
     int day = 0;
     int month = 0;

     printf("Enter your birth day ");
     scanf("%d", &day);

     printf("Enter your birth month ");
     scanf("%d", &month);

     if (month < 13 && month > 0)
     {
          if((month == 4 && day >= 1 && day <= 19) || (month == 3 && day >= 21 && day <= 31))
          {
               printf("Your zodiac sign is Aries ");
          }
     }
     else
     {
          printf("Invalid month ");
     }
}