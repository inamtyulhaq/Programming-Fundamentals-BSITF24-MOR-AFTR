#include <stdio.h>

int main()
{
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    printf("%d", square);

    // second method
    printf("%d", num * num); // no additional memory used
    return 0;
}
