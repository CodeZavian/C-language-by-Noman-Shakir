#include<stdio.h>
#include<math.h>

float circleArea(float rad);
float rectangleArea(float a,float b);
float squareArea(float side);
 int main()
 {
     float a = 5.00,b=10.00;
     float side = 2.00;
     float rad = 3.00;
     printf("rectangle area : %f\n",rectangleArea(a,b));
     printf("square are : %f\n",squareArea(side));   // if we dont call function and use printf it will print gthe value stored in main function
     printf("circle area : %f",circleArea(rad));
     return 0;

 }
 float circleArea(float rad)
 {
     rad = 3.14*rad*rad;
     return rad;
      

 }
 float rectangleArea(float a,float b)
 { 
       return a*b;
 }
 float squareArea(float side)
 {
     return side*side;
 }