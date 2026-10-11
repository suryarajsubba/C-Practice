#include<stdio.h>
#include<string.h>

struct students
{
    char name[20];
    int age;
    float marks;
};


int main()
{
    struct students student[3];

    for (int i=0; i<3; i++)
    {
        printf("Enter name for student[%d]: ", i+1);
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';
    
        printf("Enter age of %s: ", student[i].name);
        scanf("%d", &student[i].age);
        
        printf("Enter marks of %s: ", student[i].name);
        scanf("%f", &student[i].marks);
        getchar();
    }
    
    for (int i=0; i<3; i++)
    {
        printf("---Student %d---\n", i+1);
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Marks: %.2f\n", student[i].marks);
    }
    
    return 0;
}