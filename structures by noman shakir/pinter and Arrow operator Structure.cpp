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
     struct student s1 = {115,3.6,"NOMAN"};
     printf("roll of student with dot operator =  %d\n",s1.roll);
     
      struct student *ptr = &s1;
      printf("roll of student with pointer =  %d\n",(*ptr).roll);   // *ptr point towards the whole S1 so we use .roll to print indiviadual
      // it is complex so we use arrow operator
      printf("roll of student with  arrow operator = %d\n",ptr->roll);
      printf("name of student with  arrow operator = %d\n",ptr->name);
      printf("gpa of student with  arrow operator = %f\n",ptr->cgpa);
      return 0;


      
}