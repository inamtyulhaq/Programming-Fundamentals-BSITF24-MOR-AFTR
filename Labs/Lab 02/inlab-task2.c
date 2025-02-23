#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        if (num % 2 == 0)
        {
            printf("Negative Even");
        }
        else
        {
            printf("Negative Odd");
        }
    }
    else if (num == 0)
    {
        printf("Zero");
    }
    else
    {
        if (num % 2 == 0)
        {
            printf("Positive Even");
        }
        else
        {
            printf("Positive Odd");
        }
    }

    return 0;
}