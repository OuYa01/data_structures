#include "pile.h"

int pop(int* pile)
{
    if (top == -1)
    {
        printf("Pile Is Empty\n");
        return -1;
    }

    top--;
    return (pile[top]);
}