#include "heap.h"

void print(int* heap, int size)
{
    int i;

    for (i = 1; i < size; i++)
    {
        printf("%d\n", heap[i]);
    }
}