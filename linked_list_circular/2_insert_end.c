#include "list.h"



Node* insert_fin(Node* head, int val)
{
    Node* new = creat_element(val);
    if(head == NULL)
    {
        return (new);
    }

    new->next = head;

    Node* temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = new;
}