#include<stdio.h>
int prime(int i);        //
main()
{
   int prime(int i);
   printf(" %d",prime);        // call function
    
}
int prime()
{
	int prime,j;
    for (int i=90; i <=100; i++)
    {
      int c=0;
      for(int j=1;j<=i;j++)
      {
          if(i%j==0)
          {
             c++;
          }
          
      }
      if(c==2)
      {
         main();
         //printf("%d is prime number\n",i);
      }
   
    }
    
}