#include <stdio.h>

int main(){

    int x = 10;
    double y = 3;
    int z = 5;
    int m = 6;
    int n = 30;

    double a = x / y;
    printf("%.15f\n", a);

    x++;
    printf("%d\n", x);

    y--;
    printf("%f\n", y);

    z+=4;
    printf("%d\n", z);

    m*=10;
    printf("%d\n", m);

    n/=2;
    printf("%d\n", n);

}