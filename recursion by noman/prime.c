#include <stdio.h>
#include <stdbool.h>
bool Prime(int n,int count);
int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if (Prime(num,num /2)) {
        printf("%d is a prime number\n",num);
    } else {
        printf("%d is not a prime number\n",num);
    }

    return 0;
}
bool Prime(int n,int count) {
    if (count == 1) {
        return true;
    }
    if (n % count == 0) {
        return false;
    }
    return Prime(n,count - 1);
}
