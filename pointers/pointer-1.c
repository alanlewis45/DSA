#include <stdio.h>

int main(){

    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    printf("Initial position:\n");
    printf("Value: %d\n", *ptr);
    printf("Address = %p\n\n", (void *)ptr);

    printf("Value = %d\n", *(ptr + 2));
    printf("Address = %p\n\n", (void *)(ptr + 2));

    printf("Value = %d\n", *(ptr + 4));
    printf("Address = %p\n", (ptr + 4));

    return 0;
}