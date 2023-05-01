#include<stdio.h>
void decreasing(int no);
int main()
{
     int n;
     scanf("%d",&n);
      printf("\n\n");   
     decreasing(n);
}
void decreasing(int no)
{
    if(no==0)
    {
         return ;
    }
    printf("%d\n",no);  // 5 4 3 2 1 // print bhad ma krne se yeh 1 2 3 4 5 asa print kr skta ha
    decreasing(no-1); //3 2 1 
  printf("%d\n",no); // 1 2 3 4 5
    return;
}