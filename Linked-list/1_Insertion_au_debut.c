#include "list.h"

/**
 * insertion_au_debut - Insérer un entier donné au début de la liste
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
