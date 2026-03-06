// Delete node at specific position

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){

    int value, n, pos, search;
    struct Node *head = NULL, *prevnode, *travel, *NewNode, *prev, *last;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        scanf("%d", &value);

        if (i == 1){
            NewNode = (struct Node *) malloc(sizeof(struct Node));
            head = NewNode;
            NewNode->data = value;
            NewNode->next = NULL;
        }
        else{
            prevnode = NewNode;
            NewNode = (struct Node *) malloc(sizeof(struct Node));
            prevnode->next = NewNode;
            NewNode->data = value;
            NewNode->next = NULL;
        }

    }

    travel = head;
    while(travel != NULL){
        printf("%d ",travel->data);
        travel = travel->next;
    }

    // Delete node at specific position

    printf("\nEnter the position to delete: ");
    scanf("%d", &n);

    struct Node *temp = head;

    for(int i = 1; i < n; i++){

        prevnode = temp;

        temp = temp->next;

    }

    prevnode->next = temp->next;

    temp = head;

    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp -> next;
    }

    return 0;

}