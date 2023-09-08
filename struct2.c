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
     struct time country[5];
     int count = 0;

     for (count = 0; count < 5; count++)
     {
          printf("Enter name for country %d ", count + 1);
          scanf("%s", &country[count].name);
          printf("Enter hours for country %d ", count + 1);
          scanf("%d", &country[count].hours);
          printf("Enter minutes.second for country %d \n", count + 1);
          scanf("%f", &country[count].minutes_second);
     }

     for (count = 0; count < 5; count++)
     {
          printf("\nThe name of country %d is %s ", count + 1, country[count].name);
          printf("\nThe hours of country %d is %d ", count + 1, country[count].hours);
          printf("\nThe minutes_second of country %d is %f ", count + 1, country[count].minutes_second);
     }
}