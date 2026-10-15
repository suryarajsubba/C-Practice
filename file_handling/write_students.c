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
    FILE *fp;
    fp = fopen("students.txt","w");
    
    if (fp==NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

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
        getchar();      //consumes the newline character(\n) when we press Enter after entering marks
    }
    printf("\n");

    // write all the students details in students.txt
    for (int i = 0; i < 3; i++)
    {
        fprintf(fp,"%s\n", student[i].name);
        fprintf(fp,"%d\n", student[i].age);
        fprintf(fp,"%.2f\n", student[i].marks);
    }

    fclose(fp);

    return 0;
}