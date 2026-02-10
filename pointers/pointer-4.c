#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;
    ptr = (int *) malloc(sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    *ptr = 50;
    printf("Before free: %d\n", *ptr);

    free(ptr);
    //ptr = NULL;
    printf("After free: %d\n", *ptr);

    return 0;
}