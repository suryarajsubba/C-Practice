#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
    float marks;
};


int main()
{
    struct student s1;
    struct student s2;

    printf("Enter name for s1: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter age of %s: ", s1.name);
    scanf("%d", &s1.age);
    
    printf("Enter marks of %s: ", s1.name);
    scanf("%f", &s1.marks);
    getchar();


    printf("Enter name for s2: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    s2.name[strcspn(s2.name, "\n")] = '\0';
    
    printf("Enter age of %s: ", s2.name);
    scanf("%d", &s2.age);
    
    printf("Enter marks of %s: ", s2.name);
    scanf("%f", &s2.marks);
    
    
    printf("---Student 1---\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    printf("---Student 2---\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("Marks: %.2f\n", s2.marks);
    
    return 0;
}