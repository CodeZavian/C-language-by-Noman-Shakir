#include <stdio.h>

int main() {
    
    int number;
     int sum =0;
     int digit =0;
   
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number>0)
    {
       digit = number%10;
       if (number%2==0)
       {
            sum = sum+digit;
       }
       number = number/10;
       
    }
    printf("sum is %d",sum);
}
    

