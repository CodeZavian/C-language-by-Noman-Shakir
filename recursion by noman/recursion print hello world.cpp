#include<stdio.h>
void printHW(int count);   // declare function
int main()
 {
        printHW(5);
        return 0;
 }
 void printHW(int count)   // define
 {
        if(count==0){             // base case 
             return ;         
        }
        printf("hello world\n");
        printHW(count-1);
 }