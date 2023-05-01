#include<stdio.h>
#define row 2
#define col 3
void input(int a[row][col]);
int main()
{
     int A[row][col],B[row][col],C[row][col];
     intput(A);
     intput(B);
     add(A,B,C);
}void input(int a[row][col])
{
     for(int i=0;i<row;i++)
     {
          for(int j=0;j<col;j++)
          {
             scanf("%d",a[i][j]);
          }
          printf("%d ",a[i][j]);
          printf("\n");
     }
}
void Add(int A[row][col], int B[row][col], int C[row][col])
{
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         C[i][j] = A[i][j] + B[i][j];
         printf("%d ", C[i][j]);
      }
      printf("\n");
   }
}
