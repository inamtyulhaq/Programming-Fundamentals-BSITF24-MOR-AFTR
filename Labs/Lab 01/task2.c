#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    
    // see logic in below link:
    // https://airandspace.si.edu/stories/editorial/science-leap-year

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("It is a leap year.");
    }
    else
    {
        printf("It is not a leap year.");
    }
    return 0;
}
