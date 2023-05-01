#include<stdio.h>
int main()
{
     int arr[]= {1,2,3,4,5};
     printf("%d\n",*(arr+2));  // it print 3 becase 3 is at 2nd position 
     printf("%d\n",*(arr+5));  // it print 0 becase 5th position doesnot exits in given array
      return 0;
}
     
