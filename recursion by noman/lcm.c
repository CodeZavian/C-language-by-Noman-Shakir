#include <stdio.h>
int Lcm(int num1, int num2, int lcm);
int main() {
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    int lcm = (num1 > num2) ? num1 : num2;
    printf("The LCM of %d and %d is = %d\n",num1,num2,Lcm(num1, num2, lcm));
    return 0;
}
int Lcm(int num1, int num2, int lcm)
 {
    if (lcm % num1 == 0 && lcm % num2 == 0) {
        return lcm;
    }
    return Lcm(num1, num2, lcm + 1);
}

