#ifndef AVL_H
#define AVL_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Node - This represents a node of avl tree 
 * @data: this is the data will be in the node
 * @left: A pointer to the left node in tree
 * @right: A pointer to the right node in tree
 * @height: The height of the node, used to calculate the balance factor.
 * what is balance?: The balance factor of the node.
 *           It is calculated as: height(left) - height(right).
 *           The node is considered balanced if -1 <= balance <= 1.
 */
typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    int height;
}Node;

Node* insert(Node* root, int val);


Node* createNode(int val);
int height(Node* node);
int maxN(int a, int b);
Node* RR(Node* root);
Node* LR(Node* root);
void PostOrder(Node* root);
void inOrder(Node* root);

#endif