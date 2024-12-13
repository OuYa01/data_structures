#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>

#define MAX_SIZE 100


void insert(int* heap, int* size, int val);
void deletRoot(int* heap, int* size);
void print(int* heap, int size);
void swap(int *a, int *b);


#endif //HEAP_H