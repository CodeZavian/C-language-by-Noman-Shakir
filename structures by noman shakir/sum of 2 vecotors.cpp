#include<stdio.h>

// user define 
struct vector
{
    int x;
    int y;
}; 
 //make a function to print sum of vectors

 void calSum(struct vector v1 ,struct vector v2 ,struct vector sum);
int  main()
{
       struct vector v1 = {2,8};  // first vector
       struct vector v2 = {5,10}; // second vec
        struct vector sum = {0,0};  // abi sum zero ha 
        calSum(v1,v2,sum);  // calling function
        return 0;

}

void calSum(struct vector v1,struct vector v2,struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x = %d\n",sum.x);
    printf("sum of y = %d\n",sum.y);
}

