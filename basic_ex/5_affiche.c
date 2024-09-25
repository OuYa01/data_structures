#include "rep.h"

void affiche_nom(personne rep[], int num)
{
    int indice = indice_num(rep, num);

    if (indice == -1)
    {
        printf("this number not found\n");
        return;
    }
    printf("name of this person is %s\n", rep[indice].name);

}