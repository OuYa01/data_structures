#include "bst.h"

/**
 * insert - Insert a new element while keeping the rules of the binary search tree
 * @root: pointer to the the root of tree
 * @val: the data we want to add in the new element
 * 
 * Return : The new root after making modifications
 * 
 * description :
 *      This function takes a binary search tree root and a value to be inserted. It recursively 
 *      finds the correct position for the new element such that the binary search tree remains valid, 
 *      i.e., all elements in the left subtree are less than the root, and all elements in the right 
 *      subtree are greater than or equal to the root. If the tree is empty, it creates a new node and 
 *      returns it as the new root
 */
Node* insert(Node* root, int val)
{
    /*arber vide (base case)*/
    if (root == NULL)
    {
        return (createNode(val));
    }

    if (val >= root->data) 
    {
        /*insert in right subtree*/
        root->right = insert(root->right, val);
    }
    else
    {
        /*insert in left subtree*/
        root->left = insert(root->left, val);
    }

    return (root);
}


/**
 * createNode - Create a new Node for the tree
 * @val: the data we want to add in the new Node
 * 
 * Return : pointer to the new node
 */
Node* createNode(int val)
{
    Node* new = (Node*)malloc(sizeof(Node));
    if (new == NULL)
    {
        printf("Memory allocation failled\n");
        return NULL;
    }
    new->data = val;
    new->left = NULL;
    new->right = NULL;

    return (new);
}