#include <stdio.h>
#include <stdlib.h>

int main(){

    char *str = calloc(50, sizeof(char));

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Entered string: %s", str);

    free(str);

    return 0;
}