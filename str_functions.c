#include<stdio.h>
#include<string.h>

int main()
{
    char a[] = "Surya";
    printf("a = %s\n", a);

    //strlen()
    printf("lenght of a = %d\n", strlen(a));      //Returns only the lenght of the string entered and does not count NULL character
    
    //sizeof()         //not a str function
    printf("size of a is %d\n", sizeof(a));      //counts NULL character and returns the total size of the variable(in bytes) //counts the total size of the variable //<string.h> library is not required for sizeof function
    char x[10];
    printf("size of x is %d\n", sizeof(x));

    //strchr()
    char *p = strchr(a, 'r');
    printf("address of character 'r' in 'Surya': %p\n", p);
    
    //strcpy()
    char b[10]; 
    strcpy(b, a);
    printf("b = %s\n", b);

    //strcmp()
    char c[20] = "Hello";
    printf("c = %s\n", c);
    printf("%d\n", strcmp(a,c));     // Returns 0 when a==b; postive integer when a>c; negative integer when a<c

    //strcat()
    printf("%s\n", strcat(c, a));    //concatenates c+a i.e joins the value of a to c (no changes in the variable a)
    printf("a is still %s\n", a);               // no changes in the variable a 
    printf("But c has changed into %s\n", c);               // only variable c is changed

    return 0;
}