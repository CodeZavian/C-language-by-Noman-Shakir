#include<stdio.h>
#include<math.h>

float numberofsquare(float number);

int main()
{
       float number = 2.00;
      numberofsquare(number);
       return 0;
}
float numberofsquare(float number)
{
      printf("sqaure of number is %f", pow(number,2));
}
/*#include<stdio.h>
#include<math.h>

float squareofnumber(float number);   // decalre 

int main()
{
     float number = 5.00;
     printf("square is %f",pow(number,2));
     return 0;
}*/