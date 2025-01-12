#include "pile.h"

void push(int* pile, int val)
{
    if (top == SIZE-1)
    {
        printf("the pile is full\n");
        return ;
    }

    top++;
    pile[top] = val;
}