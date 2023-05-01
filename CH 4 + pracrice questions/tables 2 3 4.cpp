#include<stdio.h>     // for tables 1, 2, 3, 4, 5. 6. 7. 8. 9. 10
main()
{
	  int i,j;
	  for(i=1;i<=10;i++)     // if i<=20  then it display table from 1 to 20
	  {
	 
	  printf("-------\n");
	  printf("--Table of %d\n",i);
	  printf("-------\n");
	 
	 for(j=1;j<=10;j++)     // means last value is 10*20 = 200
// j<=5                      means last value is 10*5 = 50	 
	 
	{
	  printf("%d x %d = %d\n",i,j,i*j);
}
	
	
	  }
}
