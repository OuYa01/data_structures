#include "heap.h"

int main() {
    // Define a heap array and initialize the heap size
    int heap[MAX_SIZE];
    int heapSize = 0;

    // Insert elements into the heap
    printf("Inserting values into the heap:\n");
    insert(heap, &heapSize, 50);
    insert(heap, &heapSize, 30);
    insert(heap, &heapSize, 20);
    insert(heap, &heapSize, 10);
    insert(heap, &heapSize, 40);

    // Print the heap
    printf("\nHeap after insertions:\n");
    print(heap, heapSize + 1);

    // Delete the root
    printf("\nDeleting the root of the heap:\n");
    deletRoot(heap, &heapSize);

    // Print the heap after deletion
    printf("\nHeap after deleting the root:\n");
    print(heap, heapSize + 1);

    // Insert a new value to test further
    printf("\nInserting a new value (60) into the heap:\n");
    insert(heap, &heapSize, 60);

    // Print the heap
    printf("\nHeap after inserting 60:\n");
    print(heap, heapSize + 1);

    return 0;
}
