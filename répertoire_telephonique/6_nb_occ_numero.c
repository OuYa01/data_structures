#include "rep.h"

/**
 * nb_occ_numero - calcule le nombre d'occurrences du même numéro de téléphone
 *                 (même si les noms associés sont différents)
 * @rep: repertoire we will search in
 * @num: phone number
 */
int nb_occ_numero(personne rep[], int num)
{
    int i, count;
    int size = taille(rep);

    count = 0;
    for (i = 0; i < size; i++)
    {
        if (rep[i].number == num)
            count++;
    }
    return (count);
}

/**
 * supprime_element - qui permet de supprimer le ième élément du répertoire
 * @rep: repertoire
 * @n: the index to remove in rep
 */
void supprime_element(personne rep[], int n)
{
    int i;
    int size = taille(rep);

    if (n >= size || n < 0)
    {
        printf("size must be in range (0 - %d)\n", size);
        return;
    }

    for (i = n; i < size - 1; i++)
    {
        rep[i].number = rep[i + 1].number;
        strcpy(rep[i].name, rep[i + 1].name);
    }

    rep[size - 1].number = 0;
    rep[size - 1].name[0] = '\0';
    rep[size - 1].active = 0;

    printf("done\n");
}

void supprime_1_apparition(personne rep[], int num)
{
    int size = taille(rep);
    int i, count;

    count = 0;
    for (i = 0; i < size; i++)
    {
        if (count == 2)
            break;
        if (rep[i].number == num)
            count++;
    }

    if (count == 2)
    {
        int j;

        for (j = i; j < size - 1; j++)
        {
            rep[j].number = rep[j + 1].number;
            strcpy(rep[j].name, rep[j + 1].name);
        }
        rep[size - 1].number = 0;
        rep[size - 1].name[0] = '\0';
        rep[size - 1].active = 0;
    }
}

/**
 * supprime_apparitions -  qui permet de supprimer tous les doublons d'un numéro
 *                         de téléphone donné dans le répertoire
 *
 * @rep: repertoire
 * @num: the phone number we search
 */
void supprime_apparitions(personne rep[], int num)
{
    int i;
    int size = taille(rep);
    int t = 0;
    for (i = 0; i < size; i++)
    {
        if (rep[i].number == num)
        {
            if (t == 0)
                t = 1;
            else
            {
                int j;
                for (j = i; j < size - 1; j++)
                {
                    rep[j].number = rep[j + 1].number;
                    strcpy(rep[j].name, rep[j + 1].name);
                }
                rep[size - 1].number = 0;
                rep[size - 1].name[0] = '\0';
                rep[size - 1].active = 0;
                size--;
                i--;
            }
        }
    }
}

/**
 * supprime_doublons - qui permet de supprimer tous les doublons dans un répertoire
 */
void supprime_doublons(personne rep[], int num)
{
    int i;
    int size = taille(rep);

    for (i = 0; i < size; i++)
    {
        if (rep[i].number == num)
        {

            int j;
            for (j = i; j < size - 1; j++)
            {
                rep[j].number = rep[j + 1].number;
                strcpy(rep[j].name, rep[j + 1].name);
            }
            rep[size - 1].number = 0;
            rep[size - 1].name[0] = '\0';
            rep[size - 1].active = 0;
            size--;
            i--;
        }
    }
}