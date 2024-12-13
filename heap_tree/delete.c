#include "heap.h"

/**
 * deletRoot - deletes the root node of a max heap
 * 
 * @heap: pointer to the array (heap)
 * @size: pointer to the current size of the heap
 * 
 * Desciption:
 *      This function removes the root of a max heap (the biggest number),
 *      replaces it with the last number in the heap, reduces the heap size,
 *      and rearranges the heap to keep it ordered
 */
void deletRoot(int* heap, int* size)
{
    if (*size == 0)
    {
        printf("Erreur: le tas est vide\n");
        return ;
    }
    
    printf("suppresion de la racine: %d\n", heap[1]);

    /*1-replace the root with the last node*/
    heap[1] = heap[*size];

    /*2-Decrease the size of the heap: (supp last node)*/
    *size = *size - 1;
    
    /*3-now let's place them in the correct order*/
    int currentIndex = 1;
    while(currentIndex <= *size)
    {
        
        int left = 2 * currentIndex; /*index of the left child in the heap*/
        int right = (2 * currentIndex) + 1; /*index of the right child in the heap*/
        int largest = currentIndex; /*Initialize largest to the current node (parent)*/

        /*find the big child and swap it with the parent*/
        if (left <= *size && heap[left] > heap[largest])
        {
            largest = left;
        }
        
        if (right <= *size && heap[right] > heap[largest])
        {
            largest = right;
        }

        if (largest != currentIndex)
        {
            swap(&heap[currentIndex], &heap[largest]);
            currentIndex = largest;
        }
        else
            break; /*done*/

    }
}