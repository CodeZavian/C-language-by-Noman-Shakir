#include<stdio.h>

 struct complex
 {
    // there two parts of complex number
    int real;
    int img;
 };
int main()
{
       struct complex number1 = {5,8}; // real part is 5 and img part is 8 
       // we want to print use of pointer
       struct complex *ptr = &number1;

       printf("real number is %d\n",ptr->real);
       printf("img number is %d\n",ptr->img);
       return 0;     
}