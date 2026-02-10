#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;

    p = (int *) malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++) {
        printf("%d\n", p[i]);
    }

    free(p);

    return 0;
}