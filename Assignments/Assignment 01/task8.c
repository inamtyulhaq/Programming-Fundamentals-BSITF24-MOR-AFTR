// ok now, only code

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // first method
    int sum = 0; // new memory block
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    // second method
    // that mathematical formula

    int sum2 = 0;
    sum = N * (N + 1) / 2;
    printf("%d", sum);
    return 0;
}