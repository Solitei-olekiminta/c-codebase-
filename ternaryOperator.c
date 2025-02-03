#include<stdio.h>
int main()
{
    printf("Input your present Age: ");
    int Age;
    scanf("%d",&Age);
    (Age >= 18)? printf("You are elligible to vote") : printf("Sorry, you are not elligible to vote");
    
    return 0;
}
