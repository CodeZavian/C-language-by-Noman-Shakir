#include<stdio.h>

int lengthofstring(char name[]);

int main() {
    char name[1000];
    printf("Enter string name: ");
    gets(name);
    int length = lengthofstring(name);
    printf("Length of %s = %d\n", name, length);
}

int lengthofstring(char name[]) {
    int i;
    for (i = 0; name[i] != '\0'; i++)
        ;
    return i;
}
