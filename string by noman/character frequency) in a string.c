#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], x;
    printf("Enter the string: \n");
    fgets(str, sizeof(str), stdin);
    for (x = 'a'; x <= 'z'; x++) {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (x == str[i]) {
                count++;
            }
        }
        if(count>0)
        {
             printf("%c = %d times\n", x, count);
        }
    } 
    return 0;
}
