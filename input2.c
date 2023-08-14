// Write a programe to findout area of cylinder 
// (2 * pi * r * h) + (2 * pi * r * r)
#include<stdio.h>
void main()
{
     float radius = 0 , height = 0 ;
     float pi = 3.14159 , area = 0 ;

     printf("Enter value of radius ");
     scanf("%f",&radius);

     printf("Enter value of height ");
     scanf("%f",&height);

     printf("The value of radius is %.2f and height is %.2f ",radius,height);

     area = (2 * pi * radius * height) + (2 * pi * (radius * radius ));
     printf("\nThe value of area is %.4f ",area);
}