#include "bst.h"

/**
 * totalNodes - calcule number of nodes in tree
 * @root: pointer to the root of tree
 * 
 * Return : total number of nodes
 * 
 * description:
 *      This function recursively traverses the binary tree and calculates the total number 
 *      of nodes by summing the nodes in the left subtree, right subtree,
 *      and the root node itself.
 *      !Base Case: If the `root` is `NULL`, the tree (or subtree) has no nodes,
 *      so the function returns 0.
 *      !Recursive Case: The function counts the current node (1) and recursively adds the 
 *      total number of nodes in the left and right subtrees.
 */
int totalNodes(Node* root)
{
    if (root == NULL) /*base case*/
    {
        return (0);
    }

    /*root + subtree left + subtree right*/
    return (1+ totalNodes(root->left) + totalNodes(root->right));
}


/**
 * totalNodesInternal - Calculates the total number of internal nodes in a binary tree
 * @root: pointer to the root of tree
 * 
 * Return: Number of total Nodes Internal
 * 
 * description:
 * - Base Case: If the `root` is `NULL`, there are no nodes, so the function returns 0.
 * - Leaf Node Case: If the node has no left or right child, it is a leaf node, so it is not counted.
 * - Recursive Case: The function counts the current internal node (1) and recursively adds the 
 *   internal nodes from the left and right subtrees.
 * 
* What is internal node ?
 *      is a node that has at least one child. In other words, it is a node that is not a leaf
 */
int totalNodesInternal(Node* root)
{
    if (root == NULL) /*Base case: Empty tree*/
        return (0);

    if (root->left == NULL && root->right == NULL) /*Leaf node: Not an internal node*/
        return (0);
    
    return (1 + totalNodesInternal(root->left) + totalNodesInternal(root->right));
}


/**
 * totalNodesExtern - Calculates the total number of extern nodes in a binary tree
 * @root: pointer to the root of tree
 * 
 * Return: Number of total Nodes extern
 * 
 * description:
 * - Base Case1: If the `root` is `NULL`, there are no nodes, so the function returns 0.
 * - Base Case2: If the node has no left or right child, it is a leaf node, it is counted as 1
 * - Recursive Case:  For non-leaf nodes, the function recursively counts the leaf nodes in both
 *   the left and right subtrees and sums their values.
 * 
 * What is Extern node ?
 *      is a node that has 0 child. In other words, it is a leaf
 */
int totalNodesExtern(Node* root)
{
    if (root == NULL)
        return (0);

    if (root->left == NULL && root->right == NULL)
        return (1);
    
    return (totalNodesExtern(root->left) + totalNodesExtern(root->right));
}