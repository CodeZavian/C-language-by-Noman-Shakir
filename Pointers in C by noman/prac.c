#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int mark;

};
int main()
{

      struct student s1[5];

       for(int i=1;i<=5;i++)
       {
           gets(s1[i].name);
           scanf("%d",&s1[i].roll);
           scanf("%d",&s1[i].mark);
       }
       for(int i=1;i<=5;i++)
       {
           printf("%s\t",s1[i].name);
           printf("%d\n\t",s1[i].roll);
           printf("%d\t",s1[i].mark);
           printf("\n");
       }


     
}