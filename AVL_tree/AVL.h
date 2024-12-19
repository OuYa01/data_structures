#include <stdio.h>
#include <stdlib.h>

/**
 * Node - This represents a node of avl tree 
 * @data: this is the data will be in the node
 * @left: A pointer to the left node in tree
 * @right: A pointer to the right node in tree
 * @balance: the balance factor of the node
 *           It is calculated as: height(left) - height(right).
 *           The node is considered balanced if -1 <= balance <= 1.
 */
typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    int balance;
}Node;