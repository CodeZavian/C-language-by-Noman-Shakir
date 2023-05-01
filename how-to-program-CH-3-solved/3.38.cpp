#include <stdio.h>

int main() {
    int num, digit, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num > 0) {
    	 
        digit = num%10;
        num /= 10;
        if (digit == 9) {
            count++;
        }
       
    }
    
    printf("There are %d 9s in the number.\n", count);
    
    return 0;
}
