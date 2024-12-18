#ifndef LIST_H
#define LIST_H


#include <stdio.h>
#include <stdlib.h>

/**
 * Node - this is a Node for linked list
 * 
 * @data: this is the data we will put in our node
 * @link: this is a pointer to the next node 
 * 
 */
typdef struct Node
{
    int data;
    struct Node* link;

}Node;

/*prototype*/
Node* insertion_au_debut(Node* head, int n);
Node* insertion_fin(Node* head, int n);
Node *Insertion_avant_un_élément(Node *head, int n, int val);
Node *Insertion_après_un_élément(Node *head, int n, int val);

Node* sup(Node* head, int val);
void Affichage(Node* head);
int taill_list(Node* head);

#endif