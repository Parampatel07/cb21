// Write a programe to take name as input from user
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
          {
               break;
          }
          count++;
     }

     printf("Your name is  ");
     count = 0;
     while(count < 20)
     {
          printf("%c", name[count]);
          if(name[count] == '\n')
          {
               break;
          }
          count++;
     }
}