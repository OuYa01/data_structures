#include "rep.h"

/**
 * main - Entry point
 *
 * Return : 0 if succ
 */
int main(void)
{
    personne repertoire[TMAX];
    int choice;
    int n;

    printf("size of repertoire click 1\najouter person click 2\nto know indice of any number click 3\nto see name of the owner of any number click 4\n");
    printf("to initialize empty directory click 5\nto exit click 6\n");
    while (1)
    {
        printf(": ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: 
                printf("size of repertoire: %d\n", taille(repertoire));
                break;
            case 2:
                ajouter(repertoire);
                break;
            case 3:
                printf("give me a number pleas: ");
                scanf("%d", &n);
                printf("indice of this num %d is %d\n", n, indice_num(repertoire, n));
                break;
            case 4:
                printf("give me a number pleas: ");
                scanf("%d", &n);
                affiche_nom(repertoire, n);
                break;
            case 5:
                init_repertoire(repertoire);
                printf("size of repertoire: %d\n", taille(repertoire));
                break;
            case 6: break;
            default:
                printf("no valid choice");
        }

        if (choice == 6)
            break;
    }

    return (0);
}
