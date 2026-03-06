// Insert at Beginning of Linked List
// AND
// Insert at specific position

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main() {
    int n, value, pos, search;
    struct Node *head, *NewNode, *prevnode, *travel, *prev;

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
            prevnode = NewNode;
            NewNode = (struct Node *)malloc(sizeof(struct Node));
            prevnode->next = NewNode;
            NewNode->data = value;
            NewNode->next = NULL;

        }
    }

    travel = head;
    while (travel != NULL)
    {
        printf("%d ", travel->data);
        travel = travel->next;
    }

    //insertion opation

    printf("\nEnter the data: ");
    scanf("%d", &value);
    printf("\nEnter the pos: ");
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
        printf("%d ", travel->data);
        travel = travel->next;
    }
}