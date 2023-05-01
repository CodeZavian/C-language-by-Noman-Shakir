#include<stdio.h>
#include<math.h>
int Power(int a,int b)
{
	  int p = pow(a,b);
	  return p;
}
int main()
{
	  int base,exp;
	  printf("enter base\n");
	  scanf("%d",&base);
	  printf("enter exp\n");
	  scanf("%d",&exp);
	  int p = Power(base,exp);
	  printf("%d",p);
	  
}
