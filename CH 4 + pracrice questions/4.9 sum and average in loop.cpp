#include<stdio.h>
main()
{
     float number;
     float sum=0,average=0;
     int n;
     printf("enter the number\n");
     scanf("%f",&number);
     for (int i = 1; i <=number; i++)
     {
        printf("enter the number\n");
        scanf("%d",&n);
        sum = sum+n;
     }
     printf("sum is %f",sum);
     printf("average is %f",sum/number);
     
     
}