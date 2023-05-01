#include<stdio.h>
void StoreTable(int arr[][10],int n,int m,int number);  // n is row and m is columb 
int main()
{
     int tables[2][10];
     StoreTable(tables,0,10,2);
     StoreTable(tables,1,10,3);

     for(int i=0;i<10;i++)
     {
         printf("\n%d\t",tables[0][i]);
     }
     for(int i=0;i<10;i++)
     {
         printf("\t%d",tables[1][i]);
     }
}
void StoreTable(int arr[][10],int n,int m,int number)      // jab bi 2D array pass krna 2nd define krna pare ga
{
    for(int i=0;i<m;i++)    // 0 to 10 tak jae ga 
    {
        arr[n][i] = number*(i+1);   // 2,4,6....
    }
}