// Write a programe to print day's name of given accept number from user
#include <stdio.h>
void main()
{
     int day = 0;

     printf("Enter any number between 1 - 7 ");
     scanf("%d", &day);

     if (day >= 1 && day <= 7)
     {
          switch (day)
          {
          case 1:
               printf("It is Monday ");
               break;

          case 2:
               printf("It is Tuesday ");
               break;

          case 3:
               printf("It is Wednesday ");
               break;

          case 4:
               printf("It is Thursday ");
               break;

          case 5:
               printf("It is Friday ");
               break;

          case 6:
               printf("It is Saturday ");
               break;

          case 7:
               printf("It is Sunday ");
               break;

          default:
               printf("Invalid day ");
               break;
          }
     }
     else
     {
          printf("Invalid Input ");
     }
}