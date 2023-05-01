#include<stdio.h>
#include<string.h>
int main()
{ 
    char name[100] = "Sardar";
  //  fgets(name,100,stdin);
    int length = strlen(name);   // it count th legth 
    printf("length is %d",length);
    return 0;
}