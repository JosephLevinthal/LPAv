#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[50];

    for (int i = 0; i < 51; i++)
    {
        v[i] = i;
        printf("%d\n", v[i]);
    }
}