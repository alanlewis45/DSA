#include <stdio.h>
#include <stdlib.h>

struct Student{

    int id;
    float marks;
    
};

int main(){

    struct Student *s;

    s = (struct Student *) malloc(sizeof(struct Student));

    s->id = 101;
    s->marks = 85.5;

    printf("ID = %d\nMarks = %.2lf", s->id, s->marks);

    free(s);

    return 0;
}