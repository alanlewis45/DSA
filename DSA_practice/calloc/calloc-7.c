#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Enter the n value: ");
    scanf("%d", &n);

    int *arr = calloc(n , sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");

    for(int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}