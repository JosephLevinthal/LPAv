#include <stdio.h>

void diferente(int v[], int fim)
{
    int i = 0;
    int j = 0;

    while (i < fim - 1)
    {
        while (v[i] == v[i + 1])
        {
            i++;
        }
        printf("Esse aqui e o i: %d\n", j);
        printf("Esse aqui e o j: %d\n", i);
        j = i + 1;
        i = j;
    }
}

int main()
{
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    diferente(v, 10);
}