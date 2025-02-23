#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter side1: ");
    scanf("%d", &side1);

    printf("Enter side2: ");
    scanf("%d", &side2);

    printf("Enter side3: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral Triangle");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("Isosceles Triangle");
    }
    else if (side1 != side2 && side2 != side3)
    {
        printf("Scalene Triangle");
    }
    else if (side1 + side2 < side3 || side1 + side3 < side2 || side2 + side3 < side1)
    {
        printf("Invalid Triangle");
    }

    return 0;
}
