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
     
struct student s1 = {115,3.6,"NOMAN"};  // single linr main sab ko intailize kr sakte if u know thr all three vlaue
printf("name = %s\n",s1.name);
printf("roll no = %d\n",s1.roll);
printf("gpa = %f",s1.cgpa);

      
}