#include <stdio.h>

int main()
{
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operation: ");
    scanf(" %c", &op);

    if (op == '+')
    {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '-')
    {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '*')
    {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
        else
        {
            printf("You can't divide by zero. Incorrect.");
        }
    }
    else
    {
        printf("Invalid operation.\n");
        // leave it here
        // there is another concept of input validation 
        // which you will understand later in the course
    }

    return 0;
}
