#include <stdio.h>
#include <string.h>

void findOccurrences( char str[],  char sub[]) {
    int subLength = strlen(sub);
    int strLength = strlen(str);
    printf("\n%d %d\n",subLength,strLength);
    int i, j;
    
    for (i = 0; i <strLength; i++) {
     //   printf("\ni = %d and j = %d\n",i,j);
        for (j = 0; j < subLength; j++) {
            if (str[i + j] != sub[j])
                break;
        }
        printf("\ni = %d and j = %d\n",i,j);
        if (j == subLength) {
      //      printf("Substring found at index %d\n", i);
        }
    }
}

int main() {
    char str[100];
    char sub[10];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    
    printf("Enter a substring: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub,"\n")] = '\0';
    
    findOccurrences(str, sub);
    
    return 0;
}
