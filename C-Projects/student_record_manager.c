#include <stdio.h>
#include <string.h>

struct students
{
    char name[30];
    int age;
    float marks;
};

void add_student()
{
    struct students student;

    // user input
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // file handling
    FILE *fp;
    fp = fopen("students.txt", "a"); // open students.txt file in append mode

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return;
    }

    // append into the file
    fprintf(fp, "%s\n", student.name);
    fprintf(fp, "%d\n", student.age);
    fprintf(fp, "%.2f\n", student.marks);

    fclose(fp); // close students.txt file
}

void display_students()
{
    FILE *fp;
    fp = fopen("students.txt", "r"); // open students.txt in read mode

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return;
    }

    struct students student[100];

    // reading from students.txt
    int i = 0;
    while (i < 100 && fgets(student[i].name, sizeof(student[i].name), fp) != NULL) // fgets() returns NULL at EOF
    {
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        if (fscanf(fp, "%d", &student[i].age) != 1)
        {
            printf("Invalid age data in file.\n");
            break;
        }

        if (fscanf(fp, "%f", &student[i].marks) != 1)
        {
            printf("Invalid marks data in file.\n");
            break;
        }
        fgetc(fp); // consumes the newline character(\n) after marks.

        i++;
    }

    if (i == 0)
    {
        printf("No student records found.\n");
    }
    else
    {
        // print all students info from students.txt
        for (int j = 0; j < i; j++)
        {
            printf("-----Student %d-----\n", j+1);
            printf("Name: %s\n", student[j].name);
            printf("Age: %d\n", student[j].age);
            printf("Marks: %.2f\n\n", student[j].marks);
        }
    }

    fclose(fp);     //closing students.txt file
}

void calculate_average()
{
    FILE *fp;
    fp = fopen("students.txt", "r"); // open students.txt in read mode

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return;
    }

    struct students student[100];

    // reading from students.txt
    int i = 0;
    while (i < 100 && fgets(student[i].name, sizeof(student[i].name), fp) != NULL) // fgets() returns NULL at EOF
    {
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        if (fscanf(fp, "%d", &student[i].age) != 1)
        {
            printf("Invalid age data in file.\n");
            break;
        }

        if (fscanf(fp, "%f", &student[i].marks) != 1)
        {
            printf("Invalid marks data in file.\n");
            break;
        }
        fgetc(fp); // consumes the newline character(\n) after marks.

        i++;
    }

    // calculating average marks
    if (i != 0)
    {
        float average;
        float sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += student[j].marks;
        }
        average = sum / i;
        printf("Average marks = %.2f\n", average);

        // print students with marks above average
        printf("\n---Students scoring above average---\n");
        for (int j = 0; j < i; j++)
        {
            if (student[j].marks > average)
            {
                printf("Name: %s\n", student[j].name);
                printf("Age: %d\n", student[j].age);
                printf("Marks: %.2f\n\n", student[j].marks);
            }
        }
    }

    else
    {
        printf("No student records found.\n");
    }

    fclose(fp); // close students.txt
}

int main()
{
    int choice;

    printf("--------------------STUDENT RECORD MANAGER--------------------\n");
    do
    {
        // MENU
        printf("1. Add a student\n");
        printf("2. Display all students\n");
        printf("3. Calculate average marks\n");
        printf("4. Exit\n");

        // user input
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // consuming the newline character(\n) when pressing Enter after input

        switch (choice)
        {
            case 1:
                printf("\n");
                add_student();
                printf("\n");
                break;

            case 2:
                printf("\n");
                display_students();
                printf("\n");
                break;

            case 3:
                printf("\n");
                calculate_average();
                printf("\n");
                break;

            case 4:
                printf("\n");
                printf("Exiting program...\n");
                printf("\n");
                break;

            default:
                printf("\n");
                printf("Invalid choice. Try again.\n");
                printf("\n");
                break;
        }

    } while (choice != 4);

    return 0;
}