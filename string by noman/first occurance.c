#include<stdio.h>
#include<string.h>
void first_occ(char str[10],char ch);
int main()
{
      char str[10];
      fgets(str,10,stdin);
      char c = 'm';
     first_occ(str,c);
}
void first_occ(char str[10],char ch)
{
       int length = strlen(str);
       printf("%d \n",length-1);
    int index = -1;
       for(int i=0;i<length;i++)
       {
           if(str[i]==ch)
           {
             index = i;
             break;
           }
       }
       if(index == -1)
       {
         printf("%c not found\n",ch);
       }
       else {
         printf("%c found at %d index\n",ch,index);
       }
}
