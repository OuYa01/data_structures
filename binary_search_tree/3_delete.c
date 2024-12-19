#include "bst.h"


/**
 * deletNode - delet Node while keeping the rules of the binary search tree
 * @root: pointer to the tree
 * @val: the value of node we want to delet
 * 
 * Return: The new root after making modifications
 * 
 * description :
 *      This function recursively searches for the node to delete while maintaining
 *      the binary search tree properties.
 *      It handles three cases:
 *          1. Node with no children (leaf node).
 *          2. Node with one child.
 *          3. Node with two children, replacing the deleted node with the largest value
 *          in the left subtree.
 */
Node* deletNode(Node* root, int val)
{
    /*value note found*/
    if (root == NULL)
    {
        printf("value %d not found\n", val);
        return (root);
    }
    /*search for the node*/
    if (val > root->data)
    {
        /*search in the right subtree*/
        root->right = deletNode(root->right, val);
    }
    else if (val < root->data)
    {
        /*search in the left subtree*/
        root->left = deletNode(root->left, val);
    }
    else /*found*/
    {
        /*Case1: Node with 2 child*/
        if (root->left != NULL && root->right != NULL) 
        {
                Node* temp = findLargestNode(root->left);
                root->data = temp->data;
                root->left = deletNode(root->left, temp->data);
        }
        else /*case2&3 : Node with 1 or 0 child*/
        {
            Node* temp = root;
            if (root->left != NULL) /*node have only one child in left*/
            {
                root = root->left; /*replace with left chiled*/
            }
            else /*node have only one child in right or its a fuille*/
            {
                root = root->right; /*replace with right child or NULL*/
            }
            free(temp);
        }
    }
    return (root);
}


/**
 * deleteTree - Deletes all nodes in a binary tree
 * @root:  pointer to the root of tree
 * 
 * description :
 *      Base Case: If the root is `NULL`, the function does nothing and returns immediately.
 *                 This ensures that an empty tree or an already-deleted subtree is handled gracefully.
 *      - Recursive Case: The function recursively deletes the left subtree, then the right subtree,
 *        and finally the current node.
 *      - The memory for each node is freed using the `free` function, preventing memory leaks.
 */
void deleteTree(Node* root)
{
    if (root == NULL)
    {
        return ;
    }

    deleteTree(root->left);
    deleteTree(root->right);
    printf("deleted Node %d\n", root->data);
    free(root);
}