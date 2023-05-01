#include<stdio.h>
int main()
{
     int marks[2][3];   // declare 2 students have 3 subjects = _ _ _ and _ _ _ 

     marks[0][1] = 92;    // 1st student 1st sub 
      marks[0][2] = 93; // 1st student 2nd sub
       marks[0][3] = 94; // first student 3rd sub

        marks[1][0] = 93;  // 2nd student 1st sub 
         marks[1][1] = 99;// 2nd student 2nd sub 
          marks[1][2] = 94;// 2nd student 3rd sub 
     
     printf("%d",marks[0][1]); // it print  mark of 1st studend 2nd subject
     
}