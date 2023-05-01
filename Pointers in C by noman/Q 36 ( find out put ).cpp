#include<stdio.h>
int main()
{
      int x ;
      int *ptr ;

      ptr = &x;    
      *ptr = 0;      // x=0; // ptr ka adress pa x ki value 0 ha   

      printf("x = %d\n",x);    // print 0
      printf("*pyr = %d\n",*ptr);   // print 0

      *ptr += 5;    // pointer ka adress pa jo value ha is ma +5  ho raha ha x = 0 + 5 = 5
      printf("x = %d\n",x);    // print 5 
      printf("*ptr = %d\n",*ptr);  //   ptr pa x ka adress ha to it also print 5 

      (*ptr)++;   // pointer ka adress pa jo value ha wo + ho rahi ha x = x +1; that is x= 5+1 =6
      printf("x = %d\n",x);     // after the adition x = 6
      printf("*pyt = %d\n",*ptr);  //  it also print 6  b/c is ke adress pa jo value ha wo ab 6 ha
      return 0;
}
