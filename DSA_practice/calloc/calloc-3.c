#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    float marks;
};

int main(){

    struct Student *s;

    s = calloc(1, sizeof(struct Student));

    s->id = 101;
    s->marks = 85.5;

    printf("ID = %d, MARKS = %.2f", s->id, s->marks);

    free(s);

    return 0;
}