#include<stdio.h>
#include<math.h>
float SqureRoot(int number) 
{
      float sq = sqrt(number);  // or we can use pow(number,0.5) for squre root of number
      return sq;
}
int main()
{
      int num;
      printf("enter the number\n");
      scanf("%d",&num);
      printf("squre root of %d = %.1f",num,SqureRoot(num)); // calling the function
}