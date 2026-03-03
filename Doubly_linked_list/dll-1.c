#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {

    int n,value;
    struct Node *head = NULL, *temp = NULL, *NewNode = NULL;

    printf("Enter the n value: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        NewNode = (struct Node *) malloc(sizeof(struct Node));

        printf("Enter the value: ");
        scanf("%d", &value);

        NewNode->data = value;
        NewNode->prev = NULL;
        NewNode->next = NULL;

        if (head == NULL) {
            head = NewNode;
            temp = NewNode;
        }
        else {
            temp->next = NewNode;
            NewNode->prev = temp;
            temp = NewNode;
        }

    }

    printf("\nForward traversal:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\nBackward Traversal:\n");

    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }


    while (temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->prev;
    }

    return 0;

}