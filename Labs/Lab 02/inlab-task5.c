#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            printf("Even ");
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}
