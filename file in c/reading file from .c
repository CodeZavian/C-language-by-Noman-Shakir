#include<stdio.h>

int mian()
{
    FILE *fptr;  // declare file pointer
    fptr =  fopen("tex.txt","w");// jo file ma hoga wo hum read krain ga

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);

    fclose(fptr);
    return 0;

    
}