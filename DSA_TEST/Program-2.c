// Delete from beginning
// AND
// Delete from end

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main() {
    int value, n;
    struct Node *head = NULL, *prevnode, *travel, *NewNode;

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

    // Deleting from beginning

    printf("\nEnter the nodes to delete from beginning: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        head = head->next;
    }

    travel = head;
    while(travel != NULL){
        printf("%d ", travel->data);
        travel = travel->next;
    }

    // Deleting from end
    printf("\nEnter the nodes to delete from end: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        travel = head;

        while (travel != NULL){

            if(travel->next == NULL){
                prevnode->next = NULL;
                break;
            }
            else{
                prevnode = travel;
                travel = travel->next;
            }
        }

    }

    travel = head;
    while(travel != NULL){
        printf("%d ", travel->data);
        travel = travel->next;
    }

    return 0;
}