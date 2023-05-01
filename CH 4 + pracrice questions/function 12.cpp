#include<stdio.h>
int sum(int a,int b);
void printTable(int number);
int main()
{
         int a,b,number;
         printf("enter the numbers\n");
         scanf("%d%d",&a,&b);
         int s = sum(a,b);
         printf("%d is sum of a and b\n",s);
         printf("enter the number");
         scanf("%d",&number);
         printTable(number);
         return 0;

}
int sum(int a,int b)
{
       return a+b;
}
void printTable(int number)
{
        for(int i=1;i<=10;i++)
        {
        	 printf("2 x %d = %d \n",i,i*number);
		}
}
