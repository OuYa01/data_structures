#include "rep.h"


int indice_num(personne rep[], int num)
{
    int i;
    int size = taille(rep);

    for (i = 0; i < size; i++)
    {
        if (rep[i].number == num)
            return (i);
    }
    return (-1);
}
