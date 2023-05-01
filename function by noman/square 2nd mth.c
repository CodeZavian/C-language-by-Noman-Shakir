#include <stdio.h>
#include <math.h>

void PrintSqNo(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i * i >= a && i * i <= b)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int number1, number2;
    printf("Enter the numbers: ");
    scanf("%d%d", &number1, &number2);
    PrintSqNo(number1, number2);

    return 0;
}
