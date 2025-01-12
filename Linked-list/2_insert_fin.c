#include "list.h"



Node* insert_end(Node* head, int val)
{
    if (head == NULL)
        return (creat_element(val));

    Node* temp = head;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = creat_element(val);

    return (head);
}