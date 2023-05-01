#include<stdio.h>

int lcm(int n1, int n2, int g) {
    int LCM;
    int add;
    add = g;
    while(1) {
        if((g % n1 == 0) && (g % n2 == 0)) {
            LCM = g;
            break;
        }
        g = add + g;
    }
    return LCM;
}

int main() {
    int a, b, large;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    a > b ? large = a : large = b;
    int LCM = lcm(a, b, large);
    printf("LCM = %d", LCM);
    return 0;
}
