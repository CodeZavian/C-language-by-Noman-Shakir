#include<stdio.h>
int Even_odd(int a)
{
	int c=0;
	for(int i=2;i<=a/2;i++)
	{
		  if(a%i==0)
		  {
		  	  c++;
		  	  break;
		  }
	}
	return c;
/*if(c==0)
	{
		 printf("prime");
	}
	else
	{
		 printf("odd");
	}*/
	  
	  
}
int main()
{ 
   int number;
   printf("enter the number\n");
   scanf("%d",&number);
   int c = Even_odd(number);
   if(c==0)
	{
		 printf("prime");
	}
	else
	{
		 printf("odd");
	}
}
