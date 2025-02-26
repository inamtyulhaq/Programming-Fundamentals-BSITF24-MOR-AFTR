#include <stdio.h> // it includes some code files that help in taking input, printing the output on screen

int main()
{
    float op, dp;
    do
    {
        printf("Enter the original price: ");
        scanf("%f", &op);
        if (op < 0)
        {
            // as per mentioned the problem statement
            // we are displaying an error message
            printf("Invalid amount. "); // look here, blank space at end left intentionally for formatting
        }
    } while (op < 0);
    do
    {
        printf("Enter the discount percentage: ");
        scanf("%f", &dp);
        if (dp < 0 || dp > 100)
        {
            // as per mentioned the problem statement
            // we are displaying an error message
            printf("Invalid. "); // look here, blank space at end left intentionally for formatting
        }
    } while (dp < 0 || dp > 100);

    // you can either take extra variables or print out the solution like this.

    printf("The amount discounted is %.1f.\n", op * dp / 100);
    printf("The final price is %.1f.\n", op - (op * dp / 100));

    return 0;
}