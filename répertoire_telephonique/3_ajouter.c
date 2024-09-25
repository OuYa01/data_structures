#include "rep.h"

/**
 * ajouter - this function add new person by name and number phone
 * @rep: repertoire where the information will be stock in
 */
void ajouter(personne rep[])
{
    int size = taille(rep);

    rep[size].active = 1;

    printf("what's your name: ");
    scanf("%s", &rep[size].name);

    printf("your number pleas: ");
    scanf("%d", &rep[size].number);

    printf("your name is %s\n", rep[size].name);
    printf("your number is %d\n", rep[size].number);
    printf("Done...\n");
    
}