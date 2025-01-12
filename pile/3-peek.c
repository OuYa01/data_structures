#include "pile.h"

int peek(int* pile)
{
    if (top == -1)
    {
        printf("Pile Is Empty\n");
        return -1;
    }

    printf("sommet of pile is %d\n", pile[top]);
    return (pile[top]);
}