#ifndef BST_H
#define BST_H

/*libraries*/
#include <stdio.h>
#include <stdlib.h>

/**
 * struct Node - its a node for binary search tree
 * @data: the data will be in the node
 * @left: pointer to the left node
 * @right: pointer to the right node
 */
typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

/*Prototype*/

/*insert function*/ 
Node* insert(Node* root, int val);
Node* createNode(int val);

/*delete functions*/
Node* deletNode(Node* root, int val);
void deleteTree(Node* root);

/*search functions*/
Node* findLargestNode(Node* root);
Node* findMinNode(Node* root);
int search (Node* root, int val);

/*traversal functions*/
void preOrder(Node* root);
void inOrder(Node* root);
void postOrder(Node* root);

/*total Nodes functions*/
int totalNodes(Node* root);
int totalNodesInternal(Node* root);
int totalNodesExtern(Node* root);




#endif //BST_H