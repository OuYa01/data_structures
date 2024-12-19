#include "AVL.h"

Node* insert(Node* root, int val)
{
    if (root == NULL)
    {
        return (createNode(val));
    }
    
    if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    else if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        return root;
    }

    root->height = 1 + maxN(height(root->left), height(root->right));

    int balance = height(root->left) - height(root->right);

    if (balance > 1 && val < root->left->data)
    {
        return (RR(root));
    }

    if (balance < -1 && val > root->right->data)
    {
        return (LR(root));
    }

    if (balance > 1 && val > root->left->data)
    {
        root->left = LR(root->left);
        return (RR(root));
    }

    if (balance < -1 && val < root->right->data)
    {
        root->right = RR(root->right);
        return (LR(root));
    }

    return (root);

}

Node* createNode(int val)
{
    Node* new = (Node*)malloc(sizeof(Node));
    new->data = val;
    new->left = NULL;
    new->right = NULL;
    new->height = 1;

    return (new);
}

int height(Node* node)
{
    if (node == NULL)
        return 0;

    return (node->height);
}

int maxN(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

Node* RR(Node* root) 
{
    Node* newRoot = root->left;
    Node* subtree = newRoot->right;

    newRoot->right = root;
    root->left = subtree;              

    root->height = maxN(height(root->left), height(root->right)) + 1;
    newRoot->height = maxN(height(newRoot->left), height(newRoot->right)) + 1;

    return newRoot; 
}

Node* LR(Node* root)
{
    Node* newRoot = root->right;
    Node* subtree = newRoot->left;

    newRoot->left = root;
    root->right = subtree;

    root->height = maxN(height(root->left), height(root->right)) + 1;
    newRoot->height = maxN(height(newRoot->left), height(newRoot->right)) + 1;

    return (newRoot);
}