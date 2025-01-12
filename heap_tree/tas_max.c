#include <stdio.h>
#include <stdlib.h>
// declare un table de size = Max
#define MAX 100
int t[100];
// declare un nbr qui contien l'indice de la dernier element insere
int n = -1;
// la fonctio d'insertion
void swap(int nb1, int nb2)
{
    int tmp = t[nb1];
    t[nb1] = t[nb2];
    t[nb2] = tmp;
}
void insertion(int data)
{
    n++;
    t[n] = data;
    int pos = n;
    int parent = (pos - 1) / 2;
    while (pos > 0)
    {
        if (t[pos] <= t[parent])
        {
            break;
        }
        else
        {
            swap(pos, parent);
            pos = parent;
            parent = (pos - 1) / 2;
        }
    }
}
//the_max return l'indic qui contien le puls grand ele .
int the_max(int nb1, int nb2)
{
    if (t[nb1] >= t[nb2])
        return nb1;
    else
        return nb2;
}
void suppretion()
{
    t[0] = t[n];
    n--;
    int parent = 0;
    int left = 1;
    int right = 2;
    int max;
    while (left <= n)
    {
        max = the_max(left, right);
        if (t[parent] >= t[max])
        {
            break;
        }
        else
        {
            swap(parent,max);
            parent=max;
            left =max*2 +1;
            right =max*2 +2;
        }
    }
}
int main()
{
    insertion(45);
    insertion(36);
    insertion(54);
    insertion(27);
    insertion(63);
    insertion(72);
    insertion(61);
    insertion(18);

    for (int i = 0; i <= n; i++)
    {
        printf("la valeur  est : %d \n", t[i]);
    }
    return 0;
}
