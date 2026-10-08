#include <stdio.h>
#include <stdbool.h>

int main(){

    int age=18;
    int year=2026;
    float gpa = 2.5;
    float price = 19.99;
    float temp = 27.3;
    double pi = 3.14159265359;
    double e = 2.718281828459045;
    char grade = 'A';
    char name[] = "Surya";
    bool is_online = false;
    

    printf("I am %d years old.\n", age);
    printf("The year is %d\n", year);
    printf("Your GPA is %.2f\n", gpa);
    printf("The price is %.2f\n", price);
    printf("The temperature is %.1f°C\n", temp);
    printf("The value of pi is %.11f\n", pi);
    printf("The value of e is %.15f\n", e);
    printf("Your grade is %c\n", grade);
    printf("Hello %s! Nice to meet you!\n", name);
    if(is_online){
        printf("You are online\n");
    }
    else{
        printf("You are not online\n");
    }

}