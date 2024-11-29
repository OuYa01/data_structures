#include "systeme.h"

int main()
{
    Node* root = NULL;
    /** test for Partie 1*/
    root = insert(root, 40);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 100);
    printf("elements of arber using Inorder\n");
    printInorder(root);

    Node* temp = search(root, 100);
    if (temp != NULL)
        printf("id %d found\n", temp->id);
    else
        printf("id not found\n");

    root = sup(root, 20);
    printf("delet %d\n", 20);
    printf("elements of arber using Inorder after deletion\n");
    printInorder(root);

    /***/



    return 0;
}
