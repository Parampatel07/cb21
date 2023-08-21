// January - 31 days
// February - 28 days or 29 days
// March - 31 days
// April - 30 days
// May - 31 days
// June - 30 days
// July - 31 days
// August - 31 days
// September - 30 days
// October - 31 days
// November - 30 days
// December - 31 days
// Write a programe to findout how many days given month has without using else if and && ||
#include <stdio.h>
void main()
{
     int month = 0;

     printf("Enter value of month ");
     scanf("%d", &month);
     if (month > 0)
     {
          if (month < 13)
          {
               if (month == 1)
               {
                    printf("It has 31 days ");
               }
               else
               {
                    if (month == 2)
                    {
                         printf("It has 28 or 29 days ");
                    }
                    else
                    {
                         if (month == 3)
                         {
                              printf("It has 31 days ");
                         }
                         else
                         {
                              if (month == 4)
                              {
                                   printf("It has 30 days ");
                              }
                              else
                              {
                                   if (month == 5)
                                   {
                                        printf("It has 31 days ");
                                   }
                              }
                         }
                    }
               }
          }
     }
}