#include "rep.h"

/**
 * indice_num - this function give indix of any number in repertoire
 * @rep: repertoire
 * @num: the number phone 
 * 
 * Return: the index of person if not found return -1
 */
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
