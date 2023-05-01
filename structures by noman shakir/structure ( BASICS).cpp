#include<stdio.h>
#include<string.h>


// user define data types 
struct Student
{
     char name[100];
     int roll;
     float cgpa;

};
int main()
{
         struct Student S1; // make a variable 
         S1.roll = 115;// data types ki properties ko acces krta dot operator
         S1.cgpa = 3.6;    
         //S1.name = "noman" you cant becase array notation main string ki value change nhain kr sakte
         // but u can copy so 
         strcpy(S1.name,"NOMAN");
         printf("your name is %s\n",S1.name);
         printf("your roll number is %d\n",S1.roll);
         printf("your CGPA is %f\n",S1.cgpa);
         return 0;

}