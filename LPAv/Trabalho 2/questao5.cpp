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

int soma(int x, int y)
{
    if (zero(x))
        return y;
    return incr(soma(decr(x), y));
}

main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    while (n1 != 0 && n2 != 0)
    {
        printf("%d\n", soma(n1, n2));
        scanf("%d %d", &n1, &n2);
    }
}