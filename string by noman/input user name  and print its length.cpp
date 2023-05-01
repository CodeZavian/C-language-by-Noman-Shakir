#include<stdio.h>
int CountLength(char arr[]);

int main()
{
       char name[100];  // declare
       fgets(name,100,stdin);  // for input
       int length = CountLength(name);  // calling function
       printf("the length is %d",length);
       return 0;

}
int CountLength(char arr[])
{
      int count = 0;
      for(int i=0;arr[i]!='\0';i++)  // jab tak i \0 na aie tab tak chale ga
      {
           count++;
      }
      return count-1;   // beacse is also count null charac so count -1 krna ya i start 1 se krna
      
}