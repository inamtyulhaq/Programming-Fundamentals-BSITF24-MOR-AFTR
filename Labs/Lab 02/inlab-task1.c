#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5)
    {
        printf("Ticket Price: Free");
    }
    else if (age >= 5 && age <= 17) // also can use age > 4 and age < 18
    {
        printf("Ticket Price: $10");
    }
    else if (age >= 18 && age <= 60) // also can use age > 17 and age < 61
    {
        printf("Ticket Price: $20");
    }
    else
    {
        printf("Ticket Price: $15");
    }

    return 0;
}
