// Write a programe to take 5 student 5 subject marks
#include <stdio.h>
void main()
{
     int student[5][5];
     int count = 0;
     int flash = 0;
     int total[5];
     float average = 0;

     for (flash = 0; flash < 5; flash++)
     {
          printf("\nEnter marks for student %d ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nEnter marks for subject %d ", count + 1);
               scanf("%d", &student[flash][count]);
          }
     }

     for (flash = 0; flash < 5; flash++)
     {
          printf("\nThe marks of student %d are ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nSubject %d = %d", count + 1, student[flash][count]);
          }
     }

     for (flash = 0; flash < 5; flash++)
     {
          total[flash] = 0;
          for (count = 0; count < 5; count++)
          {
               total[flash] = total[flash] + student[flash][count];
          }
     }
     printf("\n------------------------------------------");
     for (count = 0; count < 5; count++)
     {
          printf("\nThe total of student %d is %d ", count + 1, total[count]);
     }
     average = (total[0] + total[1] + total[2] + total[3] + total[4])  / 5;
     printf("\nThe value of average is %f ", average);
     // total[1] = 0;
     // for (count = 0; count < 5; count++)
     // {
     //      total[1] = total[1] + student[1][count];
     // }
     // total[2] = 0;
     // for (count = 0; count < 5; count++)
     // {
     //      total[2] = total[2] + student[2][count];
     // }
     // printf("\nThe total of student 2 is %d ",total[1]);
     // printf("\nThe marks of student 2 are ");
     // for(count = 0 ; count < 5 ; count++)
     // {
     //      printf("\nSubject %d = %d ",count+1,student[1][count]);
     // }
     // printf("\nEnter marks for student 2 ");
     // for (count = 0; count < 5; count++)
     // {
     //      printf("\nEnter marks for subject %d ", count + 1);
     //      scanf("%d", &student[1][count]);
     // }

     // printf("\nEnter marks for student 3 ");
     // for(count = 0 ; count < 5 ; count++)
     // {
     //      printf("\nEnter marks for subject %d ",count+1);
     //      scanf("%d", &student[2][count]);
     // }
     // printf("\nEnter marks for subject 2 ");
     // scanf("%d",&student[0][1]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d",&student[0][2]);
}