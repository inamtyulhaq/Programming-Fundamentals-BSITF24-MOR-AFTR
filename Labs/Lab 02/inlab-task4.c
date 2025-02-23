#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) // or i = i-1
    {
        printf("%d ", i);
    }

    return 0;
}
