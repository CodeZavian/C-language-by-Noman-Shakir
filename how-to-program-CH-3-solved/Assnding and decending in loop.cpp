

#include<stdio.h>
main()
{
	 int n,sum;
	 printf("entr the number\n");
	 scanf("%d",&n);
	
	for (int i=1;i<=n;i++)  
	{
		printf("%d\n",i);
		 sum +=i;
		 
	}
	for(int j=n;j>=1;j--)
	{
		 printf("%d\n",j);
	}
	printf("sum is %d",sum);
}