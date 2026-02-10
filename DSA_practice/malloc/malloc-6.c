#include <stdio.h>
#include <stdlib.h>

int main(){

    char *str;

    str = malloc(50 * sizeof(char));

    printf("Enter the string: ");
    scanf("%s", str);

    printf("You entered: %s", str);

    free(str);

    return 0;
}