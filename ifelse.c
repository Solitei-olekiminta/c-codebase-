#include<stdio.h>
int main()
{
    int Age;
    printf("Input your current Age: ");
    scanf("%d",&Age);

    if (Age >= 18)
    {
        printf("You are elligible to vote");
    }
    else
    {
        printf("Sorry, you are not elligible to vote");
    }

    return 0;
}