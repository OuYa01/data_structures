#include "list.h"

/**
 * 1 - insertion_au_debut - Insérer un entier donné au début de la liste
 * @head: this is a pointer to the head node
 * @n: this is the data will be in the new node
 * 
 * Return : return the new head
 */
Node* insertion_au_debut(Node* head, int n)
{
    node* new = (Node*)malloc(sizeof(Node));
    new->data = n;
    new->link = head;

    head = new;

    return (head);
}


/**
 * 2 - insertion_fin - Insérer un entier donné a la fin de la liste
 * @head: this is a pointer to the head node
 * @n: this is the data will be in the new node
 * 
 * Return : return the new head
 */
Node* insertion_fin(Node* head, int n)
{
    Node* new =(Node*)malloc(sizeof(Node));
    new->data = n;
    new->link = NULL;

    Node* temp = head;

    while(temp->link != NULL)
    {
        temp = temp->link;
    }    

    new->link = temp->link;
    temp->link = new;

    return (head);
}
