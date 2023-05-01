#include<stdio.h>
int main()
{
    FILE *fptr;
    //pointer = file function ("file ak naam",mod type jo hum krna cha rahe )
    fptr = fopen("Text.txt","r");   // yahan fileopen hovi

    // now close thr file 
    fclose(fptr);  // close

    return 0;
    
}