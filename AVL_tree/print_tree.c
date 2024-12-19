#include "AVL.h"


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