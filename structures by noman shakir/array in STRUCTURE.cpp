#include<stdio.h>
#include<string.h>
 // user define
      struct student
      {
          int roll ;
          float cgpa ;
          char name [100];
      };  
int main()
{
     
      struct student ECE[100];   // array in struncture
      ECE[0].roll = 115;
      ECE[0].cgpa = 3.6;
      strcpy(ECE[0].name,"NOMAN");

      printf("name is %s\n",ECE[0].name);
      printf("roll number is %d\n",ECE[0].roll);
      printf("gpa is %f",ECE[0].cgpa);
      
}