#include<stdio.h>

void input(int arr[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void output(int arr[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void indexx(int arr[][3], int num, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] == num) {
                printf("%d is the row\n%d is the column", i, j);
            }
        }
    }
}
int main() {
    int arr[3][3], num;
    int size = 3;
    input(arr, size);
    printf("Enter the number that you want to search: ");
    scanf("%d", &num);
    output(arr, size);
    printf("The indexes are given below for %d\n\n", num);
    indexx(arr, num, size);
    return 0;
}

