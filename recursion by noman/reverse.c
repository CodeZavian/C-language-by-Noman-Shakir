#include <stdio.h>
#include <math.h>
int reverse(int num, int length);
int main() {
    int number, temp;
    int length = 0;
    printf("Enter the number\n");
    scanf("%d", &number);
    temp = number;
    while (temp != 0) {
        length++;
        temp = temp / 10;
    }
    printf("Reverse of %d = %d\n", number,reverse(number, length));
    return 0;
}
int reverse(int num, int length) {
    if (length == 1) {
        return num;
    } else {
        return ((num % 10) * pow(10, length - 1)) + reverse(num / 10, length - 1);
    }
}
