#include<stdio.h>
#define row 2
#define col 2
int main()
{
     int A[10][10],B[10][10],C[10][10];
     
     for(int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
             scanf("%d",&A[i][j]);
         }
     }
     printf(" no of row\n");
     for(int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
             printf("%d\t",A[i][j]);
         }
          printf("\n");
     }
     for(int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
             scanf("%d",&B[i][j]);
         }
     }
      printf("no of Col\n");
     for(int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
             printf("%d\t",B[i][j]);
         }
         printf("\n");
     }
     for(int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
             int S = 0;
              
             for(int k=0;k<col;k++)
             {
                 S = S + A[i][k]*B[k][j];
                 C[i][j] = S;
             }

 
         }
     }
     printf("product of matrix:\n");
     for(int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
             printf("%d\t",C[i][j]);
         }
         printf("\n");
     }
}