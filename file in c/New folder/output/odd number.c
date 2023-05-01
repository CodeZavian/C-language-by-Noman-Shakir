// write odd number from 1 to 9
#include<stdio.h>
int main()
{
     FILE *fptr;
     fptr = fopen("Odd.txt","w");

     int n;
     printf("enter the number : \n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
           if(i%2!=0)
           {
              fprintf(fptr,"%d\n",i); // file main store kr ka print krna
           }
     }
     fclose(fptr);
     return 0;
}