#include<stdio.h>
void Slice(char str[],int n,int m);// n and m are two index

 int main()
 {
       char str[] = "Helloworld";
       Slice(str,3,6);
 }
 void Slice(char str[],int n,int m)
 {
       char newStr[100];  // iska size m-n+1 hoga but by defualt abi 100 rahka va
       // and m and n are valid values 
       int j=0;
      for(int i = n;i<=m;i++,j++)  // j is index for newString
      {
            newStr[j] = str[i];  
      } 
      newStr[j] = '\0';
      puts(newStr);  // use for output 
 }
