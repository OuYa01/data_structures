#include "AVL.h"


int main(void)
{
    Node* root = NULL;

    root = insert(root, 4);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 10);
    root = insert(root, 50);

    printf("postorder\n");
    PostOrder(root);
    printf("Inorder\n");
    inOrder(root);
}