#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, even = 0, odd = 0;

    printf("Enter the n value: ");
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){

        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Odd number: %d\nEven number: %d", odd, even);

    return 0;
}