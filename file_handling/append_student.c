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
    
    struct students student;
    
    // user input
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';
    
    printf("Enter age: ");
    scanf("%d", &student.age);
    
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    
    //file handling
    FILE *fp;
    fp = fopen("students.txt", "a");        //open students.txt file in append mode

    if (fp==NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }
    
    //apend into the file
    fprintf(fp, "%s\n", student.name);
    fprintf(fp, "%d\n", student.age);
    fprintf(fp, "%.2f\n", student.marks);

    fclose(fp);     //close students.txt file

    return 0;
}