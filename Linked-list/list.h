#ifndef LIST_H
#define LIST_H


#include <stdio.h>
#include <stdlib.h>

/**
 * Node - this is a Node for linked list
 * 
 * @data: this is the data we will put in our node
 * @link: this is a pointer to the next node 
 * 
 */
typdef struct Node
{
    int data;
    struct Node* link;

}Node;


#endif