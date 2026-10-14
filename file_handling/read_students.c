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
    fp = fopen("students.txt","r");
    
    if (fp==NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    struct students student[3];
    
    fgets(student[0].name, sizeof(student[0].name), fp);
    student[0].name[strcspn(student[0].name, "\n")] = '\0';
    fscanf(fp, "%d", &student[0].age);
    fscanf(fp, "%f", &student[0].marks);

    printf("%s\n",student[0].name);
    printf("%d\n",student[0].age);
    printf("%.2f\n",student[0].marks);
    
    fclose(fp);

    return 0;
}