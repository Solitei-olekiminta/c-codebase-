#include<stdio.h>
int main()
{
    int value, number = 0;
    printf("\nInput any value to get it's corresponding multiples: ");
    scanf("%d",&value);

    for(number; number<=10; number++)
    {
        int result = number * value;
        printf("\n%d * %d = %d", number,value, result);
    }

    return 0;
}