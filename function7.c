// Write a programe to findout bmi and bmi category for user using function
#include <stdio.h>

float inchToMeter(int inch)
{
     float answer = 0;
     answer = inch / 39.37;
     return answer;
}

float footToMeter(int foot)
{
     float answer = 0;
     answer = foot / 3.281;
     return answer;
}

float getTotal(float number1, float number2)
{
     return number1 + number2;
}

float bmi(float weight , float total_meter)
{
     float bmi = 0 ;
     bmi =  weight / (total_meter * total_meter) ;
     printf("\nThe value of Bmi is %f",bmi);
     return bmi;
}

void main()
{
     int foot = 0, inch = 0;
     float weight = 0;
     float inch_meter = 0, foot_meter = 0, total_meter = 0;

     printf("Enter value of Weight ");
     scanf("%f", &weight);
     printf("Enter value of foot ");
     scanf("%d", &foot);
     printf("Enter value of inch ");
     scanf("%d", &inch);

     inch_meter = inchToMeter(inch);
     foot_meter = footToMeter(foot);
     total_meter = getTotal(inch_meter, foot_meter);

     printf("\nThe value of inch Meter is %f and foot Meter is %f and total meter is %f ", inch_meter, foot_meter, total_meter);
     bmi(weight,total_meter);

}