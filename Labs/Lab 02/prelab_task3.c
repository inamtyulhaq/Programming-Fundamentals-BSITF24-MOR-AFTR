#include <stdio.h>

int main()
{
    int days, years, weeks, days2;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365; // ab remainder le lia 365 se to less than 365 days hi bachay
    weeks = days / 7;
    days2 = days % 7; // ab less than 7 days hi bachay, because we took a remainder

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days2);

    return 0;
}
