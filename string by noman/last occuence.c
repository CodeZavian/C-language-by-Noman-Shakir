#include<stdio.h>
#include<string.h>
int last_occ(char str[10],char ch);
int main()
{
      char str[10];
      fgets(str,10,stdin);
      char c = 'm';
     int index = last_occ(str,c);
      if(index == -1)
       {
         printf("%c not found\n",c);
       }
       else {
         printf("%c found at %d index\n",c,index);
       }
}
int last_occ(char str[10],char ch)
{
       int index = -1;
       int length = strlen(str);
       printf("%d \n",length-1);
   
       for(int i=0;i<length;i++)
       {
           if(str[i]==ch)
           {
             index = i;
           }
       }
       return index;
}
