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
    fp = fopen("students.txt","r");     //open students.txt in read mode
    
    if (fp==NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    struct students student[3];
    
    //reading from students.txt
    for (int i=0; i<3; i++)
    {
        fgets(student[i].name, sizeof(student[i].name), fp);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        fscanf(fp, "%d", &student[i].age);
        fscanf(fp, "%f", &student[i].marks);
        fgetc(fp);      //consumes the newline character(\n) after marks.
    }

    //print all students info from students.txt
    for (int i=0; i<3; i++)
    {
        printf("%s\n",student[i].name);
        printf("%d\n",student[i].age);
        printf("%.2f\n",student[i].marks);
    }

    //calculating average marks
    float sum = 0;
    for (int i=0; i<3; i++)
    {
        sum += student[i].marks;
    }
    float average = sum/3;
    printf("Average marks = %.2f\n", average);

    //print students with marks above average
    printf("---Students scoring above average---\n");
    for (int i=0; i<3; i++)
    {
        if (student[i].marks>average)
        {
            printf("%s\n", student[i].name);
            printf("%d\n", student[i].age);
            printf("%.2f\n", student[i].marks);
        }
    }
    
    fclose(fp);     //close students.txt

    return 0;
}