// Write a programe to findout wether the user given alphabet is vowel or not 
#include<stdio.h>
void main()
{
     char letter = ' ';

     printf("Enter value of letter ");
     scanf("%c",&letter);

     if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'u' || letter == 'o' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'U' || letter == 'O')
     {
          printf("It is vowel ");
     }
     else
     {
          printf("It is consonent ");
     }
}