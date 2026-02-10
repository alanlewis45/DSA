#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the numbers: %d", sum);

    free(arr);

    return 0;
}