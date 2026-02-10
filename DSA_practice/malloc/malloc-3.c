#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int *arr = (int*) malloc (n * sizeof(int));
    
    for(int i = 0; i < n; i++){
        printf("Enter the #[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n ; i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}