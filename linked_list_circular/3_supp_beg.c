#include "list.h"

Node* supp_beg(Node* head)
{
    if (head == NULL)
    {
        printf("list is empty\n");
        return (head);
    }

    if (head->next == NULL)
    {
        free (head);
        return NULL;
    }

    Node* temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    Node* temp2 = head;
    temp->next = head->next;
    head = head->next;

    free (temp2);

    return (head);
}