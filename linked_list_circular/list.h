#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* creat_element(int val);


#endif