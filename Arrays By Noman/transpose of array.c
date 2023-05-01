#include<stdio.h>
#define row 2
#define col 2
#define size 2

void input(int A[][col]);
void transpose(int A[][col]);

int main()
{
    int a[row][col];
    input(a);
    transpose(a);
    return 0;
}

void input(int A[][col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n");
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n\n");
    }
}

void transpose(int A[][col])
{
    int transposed[col][row];
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            transposed[j][i] = A[i][j];
        }
    }
    
    for(int i=0; i<col; i++)
    {
        printf("\n");
        for(int j=0; j<row; j++)
        {
            printf("%d ", transposed[i][j]);
        }
    }
}
