#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *str = malloc(10);

    strcpy(str, "Hello");

    str = realloc(str, 20);

    strcat(str, " World");

    printf("%s", str);

    free(str);

    return 0;
}