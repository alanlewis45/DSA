#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    int N, value;
    struct Node *head = NULL, *NewNode;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {

        scanf("%d", &value);

        NewNode = (struct Node*) malloc(sizeof(struct Node));
        NewNode->data = value;

        NewNode->next = head;
        head=NewNode;
    }

    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp=temp->next;
    }

    return 0;
}