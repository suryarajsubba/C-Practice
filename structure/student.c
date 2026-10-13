#include <stdio.h>
#include <string.h>

struct students
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct students student[3];

    // user input
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name for student[%d]: ", i + 1);
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("Enter age of %s: ", student[i].name);
        scanf("%d", &student[i].age);

        printf("Enter marks of %s: ", student[i].name);
        scanf("%f", &student[i].marks);
        getchar();
    }
    printf("\n");

    // display all the students details
    for (int i = 0; i < 3; i++)
    {
        printf("---Student %d---\n", i + 1);
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Marks: %.2f\n\n", student[i].marks);
    }

    // finding student with the highest marks
    int highest = 0; // this stores the index of the student with the highest marks
    for (int i = 0; i < 3; i++)
    {
        if (student[i].marks > student[highest].marks)
        {
            highest = i;
        }
    }
    printf("---Student with the highest marks---\n");
    printf("Name: %s\n", student[highest].name);
    printf("Age: %d\n", student[highest].age);
    printf("Marks: %.2f\n\n", student[highest].marks);

    // calculating average marks
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += student[i].marks;
    }
    float average = sum / 3;
    printf("Average marks = %.2f\n\n", average);

    // displaying students with marks above average
    printf("---Students scoring above average---\n");
    for (int i = 0; i < 3; i++)
    {
        if (student[i].marks > average)
        {
            printf("Name: %s\n", student[i].name);
            printf("Age: %d\n", student[i].age);
            printf("Marks: %.2f\n\n", student[i].marks);
        }
    }

    return 0;
}