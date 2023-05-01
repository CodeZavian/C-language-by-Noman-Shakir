#include <stdio.h>
void hailstoneSequence(int n);
int main() {
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("Hailstone sequence = ");
    hailstoneSequence(num);
    return 0;
}
void hailstoneSequence(int n) {
    printf("%d ",n);  // it print n (current value)
    if (n == 1) {
        return;  
    }
    if (n % 2 == 0) {
        hailstoneSequence(n/2);  
    } else {
        hailstoneSequence(3 * n + 1); 
    }
}

