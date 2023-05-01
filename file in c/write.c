//Check if a file exit before reading it 
#include<stdio.h>
int main()
{
    FILE *fptr;
    //pointer = file function ("file ak naam",mod type jo hum krna cha rahe )
    fptr = fopen("NEWText.txt","w");   // it create a new file name NEWText.ext
    if(fptr==NULL)   //we know ka agr file na ho to wo null character store hota ha pointers ma
    {
          printf("file doen not exits\n");
    }
    else {
        // now close thr file 
    fclose(fptr);  // close
          
    }
    return 0;
    
}