#include "bst.h"


/**
 * findLargestNode - fin the max value in binary search tree
 * @root: pointer to the root of tree
 * Return : the largest Node
 * 
 * Description:
 *      This function traverses the binary search tree to locate the node with the maximum value.
 *      It follows the binary search tree property, where the largest value is always found by
 *      continuously moving to the rightmost child of the tree or subtree.
 */
Node* findLargestNode(Node* root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return (root);
}


/**
 * findMinNode - fin the min value in binary search tree
 * @root: pointer to the root of tree
 * Return : the min Node
 * 
 * Description:
 *      This function traverses the binary search tree to locate the node with the min value.
 *      It follows the binary search tree property, where the min value is always found by
 *      continuously moving to the leftmost child of the tree or subtree.
 */
Node* findMinNode(Node* root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return (root);
}