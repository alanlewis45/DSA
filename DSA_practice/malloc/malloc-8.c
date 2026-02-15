#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    int *a = malloc(n1 * sizeof(int));
    int *b = malloc(n2 * sizeof(int));

    printf("Enter the elements of the first array: \n");
    for(int i = 0; i < n1;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the elements of the second array: \n");
    for(int i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }

    int *merge = malloc((n1+n2) * sizeof(int));

    for(int i = 0; i <  n1;i++){
        merge[i] = a[i];
    }

    for(int i = 0; i < n1+n2; i++){
        merge[n1+i] = b[i];
    }

    printf("Merged array: \n");
    for(int i = 0; i < n1+n2; i++){
        printf("%d ", merge[i]);
    }

    free(a);
    free(b);
    free(merge);

    return 0;
}