#include <stdio.h>


int sum(int, int);


int sum(int a, int b){
    a = 4; // Sum function cannot change x using a because copy of x is provided to sum function in a
    return a + b;
}

int main(){
    int x = 1, y=6;
    printf("The sum of x and y is %d\n", sum(x, y));
    printf("The value of x is %d", x);
    return 0;
}

// Now see the "call_by_reference.c" file