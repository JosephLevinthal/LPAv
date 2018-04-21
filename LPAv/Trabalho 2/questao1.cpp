#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool zero(int num)
{
    return num == 0;
}

int incr(int num)
{
    return num + 1;
}

int decr(int num)
{
    return num - 1;
}

int menor(int x, int y)
{
    if (zero(y) && zero(x))
        return false;
    if (zero(y))
        return false;
    if (zero(x))
        return true;
    return menor(decr(x), decr(y));
}

main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    while (n1 != 0 && n2 != 0)
    {
        if (menor(n1, n2))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
        scanf("%d %d", &n1, &n2);
    }
}
