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

    printf("Enter name for s1: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';
    
    printf("Enter age of %s: ", s1.name);
    scanf("%d", &s1.age);
    
    printf("Enter marks of %s: ", s1.name);
    scanf("%f", &s1.marks);

    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%.2f\n", s1.marks);

    return 0;
}