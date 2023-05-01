#include<stdio.h>

int main() {
     int num1, num2, greater;
     int LCM = 1; // Initialize LCM to 1
     printf("Enter two numbers: ");
     scanf("%d%d", &num1, &num2);
     
     (num1 > num2) ? (greater = num1) : (greater = num2);
     
     for (int i = 1; i <= greater; i++) {
        if (num1 % i == 0 || num2 % i == 0) {
            if (num1 % i == 0) {
                num1 = num1 / i;
            }
            if (num2 % i == 0) {
                num2 = num2 / i;
            }
            LCM = LCM * i;
        }
     }
      
     printf("LCM = %d\n", LCM);
     
     return 0;
}
