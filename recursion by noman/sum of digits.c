#include <stdio.h>
int AddDigits(int num);
int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int sum = AddDigits(num);
    printf("The sum of the digits is: %d\n",sum);
    return 0;
}
int AddDigits(int num) {
    if (num == 0) {
        return num;
    }
    return AddDigits(num/10)+(num%10);
}


