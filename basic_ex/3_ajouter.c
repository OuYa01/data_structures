#include "rep.h"

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