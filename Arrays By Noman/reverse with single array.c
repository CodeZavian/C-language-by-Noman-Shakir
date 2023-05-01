#include<stdio.h>

#define num 5

int main() {
    int arr[num] = {1, 2, 3, 4, 5};
    for (int i = num-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
