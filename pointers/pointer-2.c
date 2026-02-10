#include <stdio.h>

int main(){

    int arr[] = {10, 20, 30, 40, 50};

    int *p1 = &arr[4];
    int *p2 = &arr[1];

    printf("Value at p1: %d\n", *p1);
    printf("Value at p2: %d\n", *p2);

    printf("Difference (p1 - p2): %d\n", *p1 - *p2);

    return 0;
}