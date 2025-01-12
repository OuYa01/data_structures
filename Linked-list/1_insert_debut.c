#include "list.h"


Node* creat_element(int val)
{
    Node* new = (Node*)malloc(sizeof(Node));
    new->data = val;
    new->link = NULL;

    return (new);
}

Node*  insert_beginning(Node* head, int val)
{
    Node* new = creat_element(val);
    new->link = head;
    head = new;

    return (head);
}
