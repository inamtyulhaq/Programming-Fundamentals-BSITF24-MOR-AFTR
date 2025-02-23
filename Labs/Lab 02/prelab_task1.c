#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i < 20; i += 2)
    {
        sum += i;
    }

    printf("The Sum is: %d", sum);
    return 0;
}
