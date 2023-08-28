// Write a programe to take name as input and print it in reverse
#include <stdio.h>
void main()
{
     char name[20];
     int count = 0;

     printf("Enter your name ");
     while (count < 20)
     {
          scanf("%c", &name[count]);
          if (name[count] == '\n')
               break;
          count++;
     }

     printf("Your name in reverse is : ");
     count = count - 1;
     while (count >= 0)
     {
          printf("%c", name[count]);
          count--;
     }
}