#include <stdio.h>


int sum(int *, int *);


// Sum should change the value of x
int sum(int* a, int* b){
    *a = 4;
    return (*a + *b);
}

int main(){
    int x = 1, y=6;
    printf("The sum of x and y is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}