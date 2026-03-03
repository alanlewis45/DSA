#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    int N, value;
    struct Node *head = NULL,*temp,*NewNode;

    scanf("%d", &N);

    for (int i = 0; i < N;i++) {
        scanf("%d", &value);

        NewNode = (struct Node *) malloc(sizeof(struct Node));
        NewNode->data = value;
        NewNode->next = NULL;

        if (head == NULL) {
            head=NewNode;
        }
        else {
            temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
                temp->next = NewNode;
            }
        }
    }

    return 0;
}