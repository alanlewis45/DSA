#include <stdio.h>

int main() {

    int *p;
    int x = 10;

    p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("pointer p stores = %p\n", p);
    printf("value p stores = %d\n", *p);

    return 0;
}