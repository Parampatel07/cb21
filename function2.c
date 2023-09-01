// Example of function
#include <stdio.h>

void printLine(char symbol,int size)
{
     int count = 0;
     printf("\n");
     for (count = 0; count < size; count++)
     {
          printf("%c",symbol);
     }
     printf("\n");
}

void main()
{
     printLine('*',30);
     printf("Param Patel ");
     printLine('-',40);
}