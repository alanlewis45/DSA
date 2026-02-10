#include <stdio.h>
#include <stdlib.h>

struct Student{

    int id;

};

int main(){

    int n = 3;

    struct Student *s = calloc(n, sizeof(struct Student));

    for(int i = 0; i < n; i++){
        s[i].id = i+1;
    }

    for(int i = 0; i < n; i++){
        printf("%d", s[i].id);
    }

    free(s);

    return 0;
}