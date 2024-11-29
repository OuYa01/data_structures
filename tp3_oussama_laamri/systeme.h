#ifndef SYSTEME_H
#define SYSTEME_H

#include <stdio.h>
#include <stdlib.h>

/**Partie 1 : Arbre Binaire de Recherche (BST)*/
typedef struct Node
{
    int id;
    struct Node* gauche;
    struct Node* droit;
}Node;

/**Partie 1: prototype*/
Node* creation(int id);
Node* insert(Node* root, int id);
Node* search(Node* root, int id);
void printInorder(Node* root);
Node* sup(Node* root, int id);
Node* FLN(Node* root);

/**Partie 2 : Tas Binaire (Heap)*/
typedef struct heap
{
    int id;
}


#endif // SYSTEME_H
