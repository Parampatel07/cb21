// Example of Structure
// Write a programe to store data for 5 countries name , hours , minutes.second
#include <stdio.h>

struct time
{
     int hours;
     float minutes_second;
     char name[20];
};

void main()
{
     struct time country1, country2;
     int count = 0;

     for (count = 1; count < 4; count++)
     {
          printf("Enter name of country %d ", count);
          scanf("%s", &country1.name);
          printf("Enter hours of country %d ", count);
          scanf("%d", &country1.hours);
          printf("Enter minutes.second of country %d ", count);
          scanf("%f", &country1.minutes_second);

          printf("\nThe name of country %d is %s ", count, country1.name);
          printf("\nThe hours of country %d is %d ", count, country1.hours);
          printf("\nThe minutes_second of country %d is %f ", count, country1.minutes_second);
     }

     // printf("Enter name of country 2 ");
     // scanf("%s", &country2.name);
     // printf("Enter hours of country 2 ");
     // scanf("%d", &country2.hours);
     // printf("Enter minutes.second of country 2 ");
     // scanf("%f", &country2.minutes_second);

     // printf("The name of country 2 is %s ", country2.name);
     // printf("\nThe hours of country 2 is %d ", country2.hours);
     // printf("\nThe minutes_second of country 2 is %f ", country2.minutes_second);
}