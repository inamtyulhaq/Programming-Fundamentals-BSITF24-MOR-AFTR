#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter the length of the line (0-50): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 51);
    for (int i = 0; i < n; i++)
    {
        printf("%c", '|');
        for (int j = 0; j < n - 1; j++)
        {
            printf("%c", ' ');
        }
        printf("\n");
    }
    return 0;
}