#include <stdio.h>

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

int main() {
    printf("N   N^2   N^3   N^4\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d   %d   %d   %d\n", i, square(i), cube(i), square(square(i)));
    }
    return 0;
}
