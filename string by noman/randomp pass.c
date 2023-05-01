#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
char pass_creater()
{
     const char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
     int index = rand()%strlen(ch);  // (sizeof(ch)-1) bur it count \0;
     return ch[index];

     
     }
int main()
{
     srand(time(0));
     char pass[10];
     int length = rand()%9+1;
     for(int i=0;i<length;i++)
     {
         pass[i] = pass_creater();
     }
     pass[length]='\0';
     printf("%s ",pass);

}