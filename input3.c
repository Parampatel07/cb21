// Write a programe to findout bmi of user
#include <stdio.h>
void main()
{
     float weight = 0;
     int foot = 0, inch = 0;
     float foot_meter = 0 , inch_meter = 0 , total_meter = 0 , bmi = 0;
     printf("Enter value of weight ");
     scanf("%f", &weight);
     printf("Enter value of foot ");
     scanf("%d", &foot);
     printf("Enter value of inch ");
     scanf("%d", &inch);

     foot_meter = foot / 3.281 ;
     printf("The value of foot_meter is %f ",foot_meter);

     inch_meter = inch / 37.39 ;
     printf("\nThe value of inch meter is %f ",inch_meter);

     total_meter = foot_meter + inch_meter;
     printf("\nThe value of total meter is %f ",total_meter);

     bmi = weight / (total_meter * total_meter);
     printf("\nThe value of bmi is %f ",bmi);
}