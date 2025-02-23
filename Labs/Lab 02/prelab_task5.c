#include <stdio.h>

int main()
{
    int roll_no, physics, chemistry, computer;
    char name[50];
    float total, percentage;

    printf("Input the Roll Number of the student: ");
    scanf("%d", &roll_no);

    printf("Input the Name of the Student: ");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry, and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computer);

    total = physics + chemistry + computer;
    percentage = (total / 300) * 100;

    printf("Roll No: %d ", roll_no);
    printf("Name of Student: %s ", name);
    printf("Marks in Physics: %d ", physics);
    printf("Marks in Chemistry: %d ", chemistry);
    printf("Marks in Computer Application: %d ", computer);
    printf("Total Marks = %.2f ", total);
    printf("Percentage = %.2f ", percentage);

    if (percentage >= 85)
    {
        printf("Division: First ");
    }
    else if (percentage >= 65)
    {
        printf("Division: Second ");
    }
    else if (percentage >= 45)
    {
        printf("Division: Third ");
    }
    else
    {
        printf("Division: Fail ");
    }
    
    return 0;
}
