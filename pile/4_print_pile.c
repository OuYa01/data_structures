#include "pile.h"

void print_pile(int* pile)
{
    if (top == -1)
    {
        printf("Pile Is Empty\n");
        return ;
    }

    int i;
    for (i = 0; i <= top; i++)
    {
        printf("%d\n", pile[top]);
    }
}