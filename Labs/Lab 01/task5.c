#include <stdio.h>
#include <string.h>

int main()
{
    char username[20], password[20]; // remember, characters ki list...

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (username == "admin" && password == "1234")
    // this is not correct but for you guys
    // it's ok for now.
    // here we had to use a function,
    // so you will get to know that when you will study functions later on in the course
    // just remember in C,
    // = is used for assignment
    // == is used for comparison
    // although here it is incorrect
        printf("Login successful\n");
    else
        printf("Incorrect username or password.\n");

    return 0;
}
