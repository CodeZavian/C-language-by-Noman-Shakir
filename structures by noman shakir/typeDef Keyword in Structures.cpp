#include<stdio.h>
#include<string.h>
typedef struct Student
{
     int roll ;
     float cgpa ;
     char name[100];
}  stu; // short from of Student
typedef struct ComputerEngineeringStudent
{
       int roll ;
     float cgpa ;
     char name[100];
} ceo;   // short form of ComputerEngineeringStudent

int main()
{
   //  struct student s1;   // yeh lihke ki need nahin ha abi (stu s1) yeh use krain ga
    
    ceo s2;
    s2.cgpa = 3.6;
    s2.roll = 115;
    strcpy(s2.name,"NOMAN");
    printf("name = %s\n",s2.name);


     
}
