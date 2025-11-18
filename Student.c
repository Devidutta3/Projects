#include <stdio.h>
#include <stdlib.h>

int studentname(void)
{
    int i;
    int size;

    printf("Enter the Number Of Students that You want to enter: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    /* each name can hold up to 49 characters + null terminator */
    char name[size][50];

    for (i = 0; i < size; i++)
    {
        printf("Enter the Name of Student %d: ", i + 1);
        /* read up to 49 chars to leave room for '\0' */
        scanf("%49s", name[i]);
    }

    printf("\n--- Student Names ---\n");
    for (i = 0; i < size; i++)
    {
        printf("Name of Student %d: %s\n", i + 1, name[i]);
    }

    return 0;
}

int rollno(void)
{
    long i;
    long size;

    printf("\nEnter the Number of students (for roll numbers): ");
    if (scanf("%lu", &size) != 1 || size <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    int roll[size];

    printf("Enter the Roll Number of %d Students:\n", size);
    for (i = 0; i < size; i++)
    {
        if (scanf("%lu", &roll[i]) != 1) {
            printf("Invalid input for roll number.\n");
            return 1;
        }
    }

    printf("\n--- Roll Numbers ---\n");
    for (i = 0; i < size; i++)
    {
        printf("The Roll Number of Student %lu is: %lu\n", i + 1, roll[i]);
    }

    return 0;
}

int marks(void)
{
    int size, i;

    printf("\nEnter the Number of students (for marks): ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    int mark[size];

    printf("Enter marks for %d students:\n", size);
    for (i = 0; i < size; i++)
    {
        if (scanf("%d", &mark[i]) != 1) {
            printf("Invalid input for marks.\n");
            return 1;
        }
    }

    printf("\n--- Marks ---\n");
    for (i = 0; i < size; i++)
    {
        printf("The Marks of Student %d is: %d\n", i + 1, mark[i]);
    }
    return 0;
}

int main(void)
{
    if (studentname() != 0) return 1;
    if (rollno() != 0) return 1;
    if (marks() != 0) return 1;
    return 0;
}
