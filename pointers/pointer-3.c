#include <stdio.h>

int main(){

    int arr[] = {10, 20, 30, 40, 50};

    int *p1 = &arr[1];
    int *p2 = &arr[3];

    if(p1 < p2){
        printf("p1 comes before p2\n");
    }

    if(p2 > p1){
        printf("p2 comes after p1\n");
    }

    if(p1 != p2){
        printf("p1 and p2 are at different locations\n");
    }

    return 0;
}