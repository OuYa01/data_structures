#ifndef REP_H
#define REP_H

#include <stdio.h>

#define TMAX 100   //size max of repertoire

/**
 * personne - structure that have information of a person
 * 
 * @name: name of person
 * @number: phone number of person
 * @active: this variable if 0 mean no persone in this index if 1 mean theres a person
 */
typedef struct
{
    char name[20];
    int number;
    int active;
}personne;


void init_repertoire(personne rep[]);
int taille(personne rep[]);
void ajouter(personne rep[]);
int indice_num(personne rep[], int num);
void affiche_nome(personne rep[], int num);


#endif //REP_H
