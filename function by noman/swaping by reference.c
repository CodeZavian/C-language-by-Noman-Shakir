#include<stdio.h>
void swap(int &n1,int &n2)  // pass by referferne jab bi wo function call hoag wo value ni le ga
// balka address le ga 
{
        int temp = n1;
        n1 = n2;
        n2 = temp;
}
int main()
{
      int n1=5,n2=10;
      swap(n1,n2);
      printf("values are %d and %d\n",n1,n2);
}