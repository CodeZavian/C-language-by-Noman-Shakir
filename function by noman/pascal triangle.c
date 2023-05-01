#include <stdio.h>
void printPascalsTriangle(int Rows) {
    for (int i = 0; i < Rows; i++) {
        int num = 1;

        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
    printPascalsTriangle(rows);
    return 0;
}
