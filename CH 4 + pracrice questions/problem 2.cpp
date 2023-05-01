#include <stdio.h>

main() {
 
  int result1, result2;
 int   x,y,a,b,g,i,j;
 printf("enter the values\n");
 scanf("%d%d%d%d%d%d%d",&x,&y,&a,&b,&g,&i,&j);
 // first Expression (a)
  result1 = !(x < 5) && !(y >= 7);
  result2 = (!(x < 5) || !(y >= 7));
  printf("first expression is : %d %d\n", result1, result2);
   // first Expression (b)
  result1 = !(a == b) || !(g != 5);
  result2 = (!(a == b) && !(g != 5));
  printf("2nd expression is  : %d %d\n", result1, result2);
   // first Expression (c)
  result1 = !((x <= 8) && (y > 4));
  result2 = (!(x <= 8) || !(y > 4));
  printf("3rd expression is : %d %d\n", result1, result2);
   // first Expression (d)
  result1 = !((i > 4) || (j <= 6));
  result2 = (!(i > 4) && !(j <= 6));
  printf("4th expression is : %d %d\n", result1, result2);
}
