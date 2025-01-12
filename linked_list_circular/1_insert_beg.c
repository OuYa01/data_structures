#include "list.h"

Node* insert_beg(Node* head, int val)
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

Node* creat_element(int val)
{
    Node* new = (Node*)malloc(sizeof(Node));
    new->data = val;
    new->next = NULL;

    return (new);
}
