#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[3][3];
  int i,j;
  printf("Input elements in the matrix:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("Elements [%d][%d]=",i,j);
           scanf("%d",&a[i][j]);
       }
   }

   printf("\nthe matrix is :\n");

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d  ",a[i][j]);

       }
       printf("\n");
   }


    return 0;
}
