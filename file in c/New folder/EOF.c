#include<stdio.h>
// read whole daata
int main()
{
     FILE *fptr;
     fptr = fopen("text.txt","r");
    char ch ;// dummy charac jahan data store krian ga file wala
    ch = fgetc(fptr); // phala charac store krwa lia
    while(ch!=EOF)
    {
          printf("%c",ch); // isko print krain ga phir agla charac a jae ga 
          ch = fgetc(fptr);
    }
    printf("\n"); // emd of file aia to console pa next line print krwa dein ga

     fclose(fptr);
     return 0;
}