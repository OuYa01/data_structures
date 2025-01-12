#include "pile.h"

int MaxMinPile(int* pile, int* max, int* min)
{
    if (top == -1)
    {
        printf("Pile Is Empty\n");
        return ;
    }

    int i;
    (*max) = (*min) = pile[0];

    for (i = 0; i <= top; i++)
    {
        if (*max < pile[i]) *max = pile[top];
        if (*min > pile[i]) *min = pile[top];
    }
}