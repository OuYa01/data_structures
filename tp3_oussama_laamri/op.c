#include "systeme.h"

/**Partie 1 : Arbre Binaire de Recherche (BST)*/


/**
* creation : this function creat a new node
* @id : the id of the new tache
* Return : pointer to the new node
*
*/
Node* creation(int id)
{
    Node* new =(Node*)malloc(sizeof(Node));
    new->id = id;
    new->gauche = NULL;
    new->droit = NULL;

    return (new);
}


/**
* insert : to insert new node in search tree
* @id : the id of the new tache
* @root : Pointer to the root of the tree
* Return : pointer to the root
*
*/
Node* insert(Node* root, int id)
{
    if (root == NULL)
    {
        Node* new = creation(id);
        return (new);
    }
    else
    {
        if (id < root->id)
        {
            root->gauche = insert(root->gauche, id);
        }
        else
        {
            root->droit = insert(root->droit, id);
        }
    }

    return (root);
}


/**
* search : search to spicify tache using id
* @root : Pointer to the root of the tree
* @id : the id of the tache we search for
* Return : pointer to the root
*
*/
Node* search(Node* root, int id)
{
    if (root == NULL || root->id == id)
    {
        return (root);
    }
    else
    {
        if (id < root->id)
        {
            return (search(root->gauche, id));
        }
        else
        {
            return (search(root->droit, id));
        }
    }
}

/**
* printInorder : print the tree inorder(Ordre infixé)
* @root: pointer to the root of tree
* Return : void
*
*/
void printInorder(Node* root)
{
    if (root == NULL)
        return ;

    printInorder(root->gauche);
    printf("%d\n", root->id);
    printInorder(root->droit);
}


/**
* sup: delet a tache(node) using id
* @root: pointer to the root of tree
* @id: the id of tache we want to delet
* Return : pointer to the root of tree
*
*/
Node* sup(Node* root, int id)
{
    if (root == NULL)
    {
        printf("the id of this tache not found\n");
        return root;
    }
    else
    {
        if (id < root->id)
        {
            root->gauche = sup(root->gauche, id);
        }
        else if (id > root->id)
        {
            root->droit = sup(root->droit, id);
        }
        else
        {
            if (root->gauche != NULL && root->droit != NULL)
            {
                Node* temp = FLN(root->gauche);
                root->id = temp->id;
                root->gauche = sup(root->gauche, temp->id);
            }
            else
            {
                Node* temp = root;
                if (root->gauche != NULL)
                {
                    root = root->gauche;
                }
                else
                {
                    root = root->droit;
                }
                free(temp);
            }
        }
    }
    return root;
}

/**
* FLN: Find the larger Node
* @root : Pointer to the root of the tree
* Return : pointer to the larger Node
*
*/
Node* FLN(Node* root)
{
    while (root != NULL && root->droit != NULL)
    {
        root = root->droit;
    }
    return (root);
}


