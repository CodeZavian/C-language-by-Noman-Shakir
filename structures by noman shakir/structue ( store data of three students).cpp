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
         printf("your CGPA is %f\n\n",S1.cgpa);

         struct Student S2;
         S2.roll = 111;
         S2.cgpa = 3.4;
         strcpy(S2.name,"ASIM");
         printf("Student name is %s\n",S2.name);
         printf("student roll is %d\n",S2.roll);
         printf("student CGPA is %f\n\n",S2.cgpa);

         struct Student S3;
         S3.roll = 143;
         S3.cgpa = 3.5;
         strcpy(S3.name,"ABUZAR");
         printf("Student name is %s\n",S3.name);
         printf("student roll is %d\n",S3.roll);
         printf("student CGPA is %f\n",S3.cgpa);

         
         return 0;

}