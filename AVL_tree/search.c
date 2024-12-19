#include "AVL.h"

/**
 * search - search for value in the AVL tree (is like binary search tree)
 * @root: pointer to the the root of tree
 * @val: the value to search for
 * 
 * Return : 0 if not found, 1 if found
 * 
 * description :
 *      This function traverses the AVL tree to determine if a specific value exists.
 *      If the value is found, it returns 1. If not, it returns 0
 *      The function uses recursion to explore the appropriate subtree
 */
int search(Node* root, int val)
{
    /*base case 1: the value not found or tree is empty*/
    if (root == NULL)
    {
        printf("%d Not found\n", val);
        return (0);
    }
    /*base case2: the value found*/
    if (val == root->data)
    {
        printf("%d Found\n", val);
        return (1);
    }
    /*search in the right subtree*/
    else if (val >= root->data)
    {
        return (search(root->right, val));
    }
    /*search in the left subtree*/
    else
    {
        return (search(root->left, val));
    }

}