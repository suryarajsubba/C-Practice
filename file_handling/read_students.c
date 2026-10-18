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

    struct students student[100];
    
    //reading from students.txt
    int i = 0;
    while (i<100 && fgets(student[i].name,sizeof(student[i].name),fp ) != NULL) //fgets() returns NULL at EOF
    {
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        fscanf(fp, "%d", &student[i].age);
        fscanf(fp, "%f", &student[i].marks);
        fgetc(fp);      //consumes the newline character(\n) after marks.

        i++;
    }

    //print all students info from students.txt
    for (int j=0; j<i; j++)
    {
        printf("%s\n",student[j].name);
        printf("%d\n",student[j].age);
        printf("%.2f\n",student[j].marks);
    }

    //calculating average marks
    if (i!=0)
    {
        float average;
        float sum = 0;
        for (int j=0; j<i; j++)
        {
            sum += student[j].marks;
        }
        average = sum/i;
        printf("Average marks = %.2f\n", average);

        //print students with marks above average
        printf("---Students scoring above average---\n");
        for (int j=0; j<i; j++)
        {
            if (student[j].marks>average)
            {
                printf("%s\n", student[j].name);
                printf("%d\n", student[j].age);
                printf("%.2f\n", student[j].marks);
            }
        }
    }
    
    else
    {
        printf("No student records found.\n");
    }

    fclose(fp);     //close students.txt

    return 0;
}