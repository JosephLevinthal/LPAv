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

int simetrico(int x)
{
    if (zero(x))
        return x;
    return decr(simetrico(decr(x)));
}

int main()
{
    int n1;
    scanf("%d", &n1);
    while (n1 != 0)
    {
        printf("%d\n", simetrico(n1));
        scanf("%d", &n1);
    }
}
