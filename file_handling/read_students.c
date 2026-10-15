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
    
    for (int i=0; i<3; i++)
    {
        fgets(student[i].name, sizeof(student[i].name), fp);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        fscanf(fp, "%d", &student[i].age);
        fscanf(fp, "%f", &student[i].marks);
        fgetc(fp);
    }

    for (int i=0; i<3; i++)
    {
        printf("%s\n",student[i].name);
        printf("%d\n",student[i].age);
        printf("%.2f\n",student[i].marks);
    }
    
    fclose(fp);

    return 0;
}