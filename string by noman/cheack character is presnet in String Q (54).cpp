#include<stdio.h>
void CheckCharacter(char str[],char ch); 

int main()
{
     char str[100];
    
   
    printf("enter the string\n");
 //  scanf("%s",str);  // yeh after space ko include nahin krta
    fgets(str,100,stdin);  // it is for input 
    char ch;
    scanf("%c",&ch);
//    printf("enter the character for check it is presnt or not\n");
//    scanf("%c",ch);

    CheckCharacter(str,ch);  // callin function  
}
void CheckCharacter(char str[],char ch)
{
       for(int i=0;str[i]!='\0';i++)
       {
            if(str[i]==ch)
            {
                 printf("character is presnt\n");
                 return ; // jab character mil jae ga to bas yeh loop stoop ho jae gi 
                 
            }
                
               
       }
}