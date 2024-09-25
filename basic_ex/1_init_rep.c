#include "rep.h"

/**
 * init_repertoire - initialise le répertoire vide
 * @rep: array of structure that will have all persons
*/
void init_repertoire(personne rep[])
{
    int i;

    for (i = 0; i < TMAX; i++)
    {
        rep[i].active = 0;
        rep[i].number = 0;
    }

    printf("Done all set to vide\n");
}
