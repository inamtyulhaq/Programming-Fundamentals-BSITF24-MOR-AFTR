#include <stdio.h>

int main()
{
    int minutes, seconds;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;

    printf("%d minutes is equal to %d seconds.", minutes, seconds);

    return 0;
}
