#include "bst.h"


void preOrder(Node* root)
{
    if (root == NULL)
    {
        return ;
    }
    printf("%d\n", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root)
{
    if (root == NULL)
    {
        return ;
    }

    inOrder(root->left);
    printf("%d\n", root->data);
    inOrder(root->right);
}

void postOrder(Node* root)
{
    if (root == NULL)
    {
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    printf("%d\n", root->data);
}