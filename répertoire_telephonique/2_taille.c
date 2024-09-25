#include "rep.h"

/**
 * taille - renvoie le nombre de numéros mémorisés dans le répertoire
 * @rep: repertoire
 *
 * Return: how much numbers are in the rep
 */
int taille(personne rep[])
{
    int count, i;

    count = 0;
    for (i = 0; i < TMAX; i++)
    {
        if (rep[i].active == 1)
            count++;
        else
            return (count);
    }

    return (count);
}
