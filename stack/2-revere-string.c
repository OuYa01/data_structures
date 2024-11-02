#include <stdio.h>
#include <string.h>

int top = -1;

/**
 * push - to push element to the top of stack
 * @s: string that i will push element in it (my stack)
 * @x: the element that will be pushed to my stack
 *
 * Return: void
 */
void push(char* s, char x)
{
    top = top + 1;
    s[top] = x;
}

/**
 * pop - pop the top element in stack
 * @s: stack
 *
 * Return: the top element that will be poped
 */
char pop(char* s)
{
    return (s[top--]);
}

/**
 * reverse - reverse string using stack
 * @s: the string to be resversed
 * @size: size of string
 */
void reverse(char* s, int size)
{
    char stack[size];
    int i;

    for (i = 0; i < size; i++)
    {
        push(stack, s[i]);
    }

    for (i = 0; i < size; i++)
    {
        s[i] = pop(stack);
    }
}

/**
 * main - The entry point
 *
 * Return: 0 if succ\
 */
int main(void)
{
    char s[] = "hello";
    int size = strlen(s);

    printf("the string : %s\n", s);
    reverse(s, size);
    printf("the string after revers it: %s\n", s);

    return (0);
}
