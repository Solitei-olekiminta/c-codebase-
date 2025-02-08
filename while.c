#include<stdio.h>
int main()
{
    int value, number = 0;
    printf("\nInput any character to find it's corresponding multiples: ");
    scanf("%d", &value);

    while (number <= 10)
    {
        int result = number * value;
        printf("\n%d * %d = %d", number, value, result);
        number++;
    }

    return 0;
}