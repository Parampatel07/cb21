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
     char symbol = ' ';
     int size = 0;

     printf("Enter Symbol to print line ");
     scanf("%c",&symbol);
     printf("Enter value of Size ");
     scanf("%d",&size);

     printLine(symbol,size);
     printf("Param Patel ");
     printLine(symbol,size);
}