#include "stack.h"

/**
 * size_s - size of string
 */
int size_s(char* s)
{
    int size;

    size = 0;
    while(s[size] != '\0')
    {
        size ++;
    }

    return (size);
}
