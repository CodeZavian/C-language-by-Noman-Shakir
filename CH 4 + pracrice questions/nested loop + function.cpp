#include<stdio.h>
int add(int a,int b);
int multi(int a,int b);
int divi(int a,int b);
int main()
{
      int n1,n2;
       int  choice1,choice2,choice3;
       printf("enter the two numbers");
       scanf("%d%d",&n1,&n2);
       printf("enter your choice\n 1 for sum\n 2 for multi\n 3 for divide\n");
       scanf("%d",&choice1);
       
       
       switch (choice1)
       {
          case 1:
          add(n1,n2);
          printf("sum of %d and %d = %d\n",n1,n2,add(n1,n2));
          scanf("%d",&choice2);
          switch(choice2)
          {
          case 2:
          multi(n1,n2);
          printf("multiplication of %d and %d = %d\n",n1,n2,multi(n1,n2));
          scanf("%d",&choice3);
          switch(choice3)
          {
          case 3:
          divi(n1,n2);
          printf("division if %d and %d = %d",n1,n2,divi(n1,n2));
          break;
          default:
          printf("dont do anything\n");
          break;
          	   	
		  }
          
          
          break;
		  }
          
          break;
          
          
       }
       
}
int add(int a,int b)
{
     return a+b;
}
int multi(int a,int b)
{
    return a*b;
}
int divi(int a,int b)
{
    return a/b;
}