#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int n, value, pos, search, d;
    struct Node *head, *NewNode, *lastnode, *travel, *prev;

// creation of linked list

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &value);

        if (i == 1)
        {
            NewNode = (struct Node *)malloc(sizeof(struct Node));
            head = NewNode;
            NewNode->data = value;
            NewNode->next = NULL;
        }
        else
        {
            lastnode = NewNode;
            NewNode = (struct Node *)malloc(sizeof(struct Node));
            lastnode->next = NewNode;
            NewNode->data = value;
            NewNode->next = NULL;

        }
    }


    travel = head;
    while (travel != NULL)
    {
        printf("%d\n", travel->data);
        travel = travel->next;
    }

//insertion opation

    printf("Enter the data: ");
    scanf("%d", &value);
    printf("Enter the pos: ");
    scanf("%d", &pos);

    NewNode = (struct Node *)malloc(sizeof(struct Node));
    NewNode->data = value;

//insertion at first node

    if (pos == 1)
    {
        NewNode->next = head;
        head = NewNode;
    }

//insertion not at first node

    else
    {
        search = 0;
        travel = head;
        while (search < pos - 1)
        {
            prev = travel;
            travel = travel->next;
            search = search + 1;
        }

        NewNode->next = travel;
        prev->next = NewNode;
    }

    travel = head;

    while (travel != NULL)
    {
        printf("%d\n", travel->data);
        travel = travel->next;
    }

//Deleting the element by position

    printf("Position to delete: ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        head = head->next;
    }

    else
    {
        search = 0;

        travel = head;
        while (search < pos - 1)
        {
            prev = travel;
            travel = travel->next;
            search = search + 1;
        }

        prev->next = travel->next;
    }
    travel = head;

    while (travel != NULL)
    {
        printf("%d\n", travel->data);
        travel = travel->next;
    }

// Deletion of element by data

    printf("Enter the value to delete: ");
    scanf("%d", &value);

    struct Node *temp = head, *temp1;

    while(temp != NULL){

        if((temp==head) && (temp->data == value)){
            head = head->next;
            break;
        }
        else{
            temp1 = temp -> next;

            if(temp1->data == value){
                temp->next = temp1->next;
                break;
            }
            else{
                temp = temp->next;
            }
        }
    }

    travel = head;

    while (travel != NULL)
    {
        printf("%d\n", travel->data);
        travel = travel->next;
    }

    return 0;
}