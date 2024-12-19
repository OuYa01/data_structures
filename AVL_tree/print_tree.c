#include "AVL.h"

void preOrder(Node * root)
{
    if (root != NULL)
    {
        printf("%d\n", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void PostOrder(Node* root)
{
    // lrn
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d\n", root->data);
    }

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