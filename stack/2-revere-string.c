#include <stdio.h>
#include <string.h>

int top = -1;

void push(char* s, char x)
{
    top = top + 1;
    s[top] = x;
}

char pop(char* s)
{
    return (s[top--]);
}


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
int main(void)
{
    char s[] = "hello";
    int size = strlen(s);

    printf("the string : %s\n", s);
    reverse(s, size);
    printf("the string after revers it: %s\n", s);

}

