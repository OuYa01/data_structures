#include "list.h"


Node* insert_avant(Node* head, int val, int target)
{
    if (head == NULL)
    {
        goto not_found;
    }

    Node* temp = head;
    while(temp->link != NULL && temp->link->data != target)
    {
        temp = temp->link;
    }

    if (temp->link == NULL)
    {
        not_found:
        printf("target Not found\n");
        return (head);
    }

    Node* new = creat_element(val);
    new->link = temp->link;
    temp->link = new;
}