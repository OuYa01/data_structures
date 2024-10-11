#include "list.h"


/**
 * 5 - sup - Supprimer un élément de la liste
 * 
 * @head: pointer to head node
 * @val: the value we search for to remove
 * 
 * Return: the pointer to the head node
 */
Node* sup(Node* head, int val)
{
        Node* temp1 = head;
        Node* temp2 = NULL;

        if (head == NULL)
        {
                printf("the list is empty\n");
                return (head);
        }

        if (head->data == vla)
        {
                temp1 = head;
                head = head->link;
                free(temp1);
                return (head);
        }

        while(temp1 != NULL)
        {
                if (temp1->data == val)
                {
                        temp2->link = temp1->link;
                        free(temp1);
                        return (head);
                }
                temp2 = temp1;
                temp1 = temp1->link;
        }

        printf("elements not found\n");
        return (head);
}


/**
 * Affichage - Afficher tous les éléments de la liste du début à la fin
 * @head: pointer to head node
 */
void Affichage(Node* head)
{
        Node* temp = head;
        while (temp != NULL)
        {
                printf("%d ", temp->data);
                temp = temp->next;
        }
}

/**
 * taill_list - ompter et afficher le nombre de noeuds présents dans la liste
 * @head: pointer to head node
 */
int taill_list(Node* head)
{
        int count;

        Node* temp = head;
        count = 0;
        while(temp != NULL)
                count++;
        return (count);
}
