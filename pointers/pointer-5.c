#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Value = %d\n",*ptr);
    printf("Address = %p\n\n", (void *)ptr);

    ptr++;
    printf("Value = %d\n", *ptr);
    printf("Address = %p\n\n",(void *)ptr);

    ptr++;
    printf("Value = %d\n", *ptr);
    printf("Address = %p\n\n",(void *)ptr);

    ptr--;
    printf("Value = %d\n", *ptr);
    printf("Address = %p\n\n",(void *)ptr);

    ptr--;
    printf("Value = %d\n", *ptr);
    printf("Address = %p\n\n",(void *)ptr);

    return 0;
}