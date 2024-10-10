#include "list.h"

/**
 * 1 - insertion_au_debut - Insérer un entier donné au début de la liste
 * @head: this is a pointer to the head node
 * @n: this is the data will be in the new node
 *
 * Return : return the new head
 */
Node *insertion_au_debut(Node *head, int n)
{
        node *new = (Node *)malloc(sizeof(Node));
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
Node *insertion_fin(Node *head, int n)
{
        Node *new = (Node *)malloc(sizeof(Node));

        if (new == NULL)
        {
                printf("Memory allocation failure\n");
                return (head);
        }

        new->data = n;
        new->link = NULL;

        Node *temp = head;

        while (temp->link != NULL)
        {
                temp = temp->link;
        }

        new->link = temp->link;
        temp->link = new;

        return (head);
}

/**
 * 3 - Insertion_après_un_élément - Insérer un entier donné après un élément de la liste
 * @head: pointer to haed node
 * @n: the data will be in new node
 * @val: the value to search about
 *
 * Return: head pointer
 */
Node *Insertion_après_un_élément(Node *head, int n, int val)
{
        Node *new = (Node *)malloc(sizeof(Node));

        if (new == NULL)
        {
                printf("Memory allocation failure\n");
                return (head);
        }

        new->data = n;
        new->link = NULL;

        Node *temp = head;
        while (temp != NULL && temp->data != val)
        {
                temp = temp->link;
        }

        if (temp == NULL)
        {
                printf("Element %s not found in list\n" val);
                free(new);
                return (head);
        }

        new->link = temp->link;
        temp->link = new;

        return (head);
}
