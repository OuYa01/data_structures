#include "bst.h"

/**
 * search - search for value in the binary search tree
 * @root: pointer to the the root of tree
 * @val: the value to search for
 * 
 * Return : 0 if not found, 1 if found
 * 
 * description :
 *      This function traverses the binary search tree to determine if a specific value exists.
 *      If the value is found, it returns 1. If not, it returns 0
 *      The function uses recursion to explore the appropriate subtree
 */
int search (Node* root, int val)
{
    /*base case1: tree is empty or value not found*/
    if (root == NULL)
    {
        printf("%d value not found\n", val);
        return (0);
    }
    /*base case2: value found*/
    if (root->data == val)
    {
        printf("%d found\n", val);
        return (1);
    }

    if (val >= root->data)
    {
        /*search in the right subtree*/
        return (search(root->right, val));
    }
    else
    {
        /*search in the left subtree*/
        return(search(root->left, val));
    }
}