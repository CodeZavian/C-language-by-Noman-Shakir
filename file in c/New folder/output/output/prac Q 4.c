//a and b are written in a file replace them with thier sum 
#include<stdio.h>
int main()
{
      FILE *fptr;
      fptr = fopen("text.txt","w");  // first read 

      int a ;
      fscanf(fptr,"%d",&a);
      int b ;
      fscanf(fptr,"%d",&b); // indono ko read kr dia ha ur store kr dia ha a and b main
    // ab close kr dein ga file ko
      fclose(fptr); //close the file

      // ab again file ko overwrite kr dein ga again open krain ga write mood main
     fptr = fopen("text.txt","r"); 
      fprintf(fptr,"%d", a + b);  
      fclose(fptr);
      return 0;
}