// Example of Function with return and without output
// Create a function to find area of circle
#include <stdio.h>

float getPi()
{
     return 3.141592;
}

void main()
{
     int radius = 0;
     float area = 0;
     float pi = 0;
     printf("Enter value of radius ");
     scanf("%d", &radius);
     pi = getPi();
     area = getPi() * (radius * radius);
     printf("\nThe value of area is %f ", area);
}