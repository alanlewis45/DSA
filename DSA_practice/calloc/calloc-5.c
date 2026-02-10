#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    float avg = 0;

    printf("Enter the n value: ");
    scanf("%d", &n);

    int *arr = calloc(n , sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        avg += arr[i];
    }

    avg = avg / n;

    printf("Average value: %.2f", avg);

    free(arr);

    return 0;
}