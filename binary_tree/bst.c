#include "bst.h"


int main()
{
    Node* root = NULL; // Initialize the root of the tree

    // Insert nodes into the binary search tree
    printf("Inserting nodes...\n");
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    // Print the tree in different orders
    printf("\nTree Traversals:\n");
    printf("Pre-Order: ");
    preOrder(root);
    printf("\nIn-Order: ");
    inOrder(root);
    printf("\nPost-Order: ");
    postOrder(root);

    // Test searching for values
    printf("\n\nSearching for nodes...\n");
    search(root, 40); // Should find
    search(root, 100); // Should not find

    // Test finding the largest and smallest nodes
    printf("\nLargest node: %d\n", findLargestNode(root)->data);
    printf("Smallest node: %d\n", findMinNode(root)->data);

    // Count total nodes, internal nodes, and external nodes
    printf("\nNode Counts:\n");
    printf("Total nodes: %d\n", totalNodes(root));
    printf("Internal nodes: %d\n", totalNodesInternal(root));
    printf("External nodes (leaf nodes): %d\n", totalNodesExtern(root));

    // Test deleting specific nodes
    printf("\nDeleting nodes...\n");
    root = deletNode(root, 20); // Delete a leaf node
    root = deletNode(root, 30); // Delete a node with one child
    root = deletNode(root, 50); // Delete a node with two children

    // Print the tree after deletions
    printf("\nTree after deletions (In-Order): ");
    inOrder(root);

    // Delete the entire tree
    printf("\n\nDeleting entire tree...\n");
    deleteTree(root);
    root = NULL; // Set root to NULL after deletion

    printf("\nTree deleted successfully.\n");
    return 0;
}