#include "list.h"

Node* supp_end(Node* head)
{
    if (head == NULL)
    {
        printf("list is empty\n");
        return (head);
    }

    if (head->next == head)
    {
        free(head);
        return (NULL);
    }

    Node* temp = head;
    
    while (temp->next->next != head)
    {
        temp = temp->next;
    }

    Node* temp2 = temp->next;

    temp->next = head;
    free (temp2);

    return (head);
}