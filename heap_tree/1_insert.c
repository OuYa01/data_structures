#include "heap.h"

/**
 * insert - inserts a value into a max heap
 * 
 * @heap: pointer to the array (heap)
 * @size: pointer to the current size of the heap
 * @val: the value to be inserted into the heap
 * 
 * Description:
 *      This function adds a new value to the max heap, increases the heap size,
 *      and ensures the max-heap property by rearranging the elements
 */
void insert(int* heap, int* size, int val)
{
    if ( *size >= MAX_SIZE) /*Check if the heap is full*/
    {
        printf("Erreur: the haep is full\n");
        return ;
    }

    *size = *size + 1;
    int pos = *size;
    heap[pos] = val; /*Place the new value at the end of the heap*/

    /*Restore the heap property by swapping up*/
    while (pos > 1 && heap[pos] > heap[pos/2])
    {
        swap(&heap[pos], &heap[pos/2]);
        pos /= 2;/*Move to the parent position*/
    }
}


/**
 * swap - swaps the values of two integers
 * 
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * 
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}