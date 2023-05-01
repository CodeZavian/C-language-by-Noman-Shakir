#include<stdio.h>
int main()
{
      FILE *fptr;
      fptr = fopen("teext.txt","r");
      int n; // jis ma number read krne wale hain
      fscanf(fptr,"%d",&n);
      printf("number = %d\n",n);
      fscanf(fptr,"%d",&n);
      printf("number = %d\n",n);
      fscanf(fptr,"%d",&n);
      printf("number = %d\n",n);
      fscanf(fptr,"%d",&n);
      printf("number = %d\n",n);
      fscanf(fptr,"%d",&n);
      printf("number = %d\n",n);
      fclose(fptr);
      return 0;
}