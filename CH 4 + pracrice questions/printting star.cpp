#include<stdio.h>
int main()
{



// outer loop to control number of rows
for (int i = 1; i <= 9; i++) {
    // inner loop to print spaces before asterisks
    for (int j = 1; j <= (9 - i) / 2; j++) {
        printf(" ");
    }
    // inner loop to print left side of diamond
    for (int k = 1; k <= i; k++) {
        printf("*");
    }
    printf("\n"); // move to next line
}

// outer loop to control number of rows
for (int i = 9- 2; i >= 1; i--) {
    // inner loop to print spaces before asterisks
    for (int j = 1; j <= (9 - i) / 2; j++) {
        printf(" ");
    }
    // inner loop to print left side of diamond
    for (int k = 1; k <= i; k++) {
        printf("*");
    }
    printf("\n"); // move to next line
}

return 0;
}



