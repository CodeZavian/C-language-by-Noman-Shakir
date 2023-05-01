#include<stdio.h>
main()
{
      int n1,n2;
      scanf("%d%d",&n1,n2);
      for(int i=n1;i<=n2;i++)
      {
         int c=0;
         if(n1%n2==0)
         {
             c++;
         }
         if(c==2)
         {
         	printf("%d\t",i); 
		 }
      }
      
}