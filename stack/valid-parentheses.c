#include "stack.h"

/**
 * isValid - this function check if partenthess u give is valide or not
 * @s: string that have a parentheses
 *
 * Return : true if is valide else false
 */
bool isValid(char* s)
{
    int top = -1; //the top of stack
    int size = size_s(s); //size of string
    char stack[size]; // stack
    int i;
    char temp;

    /**
     * push - this function will push a single char to my stack
     * @x: char will be pushed
     *
     */
    void push(char* stack, char x)
    {
        top++;
        stack[top] = x;
    }

    /**
     * pop - this function will remove the char in the top
     */
    void pop()
    {
        top--;
    }

    /**
     * isEmpty - this function check if satck is empty or not
     * Return : is stack empty ret true else false
     */
    bool isEmpty()
    {
        if (top == -1)
            return (true);
        else
            return (false);
    }

    
    for (i = 0; i < size; i++)
    {
        temp = s[i];
        if (temp == '(' || temp =='{' || temp == '[')
            push(stack, temp);
        else if (temp == ')' || temp == '}' || temp == ']')
        {
            if (isEmpty())
                return (false);
            else if ((stack[top] == '(' && temp == ')')||
                     (stack[top] == '{' && temp == '}')||
                     (stack[top] == '[' && temp == ']'))
            {
                pop();
            }
            else
                return false;
        }
    }
    return (isEmpty());
}
