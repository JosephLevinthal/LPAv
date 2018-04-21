#include <stdio.h>
#include <stdlib.h>

int eprimo(int n)
{
    int divisor;
    if ((n <= 1) || (n != 2) && (n % 2 == 0))
    {
        return 1;
    }
    else
    {
        divisor = 3;
        while (divisor < n / 2)
        {
            if (n % divisor == 0)
            {
                return 1;
            }
            divisor = divisor + 2;
        }
        return 0;
    }
}

int main()
{
    int x, y, pivot;

    scanf("%d", &x);
    scanf("%d", &y);
    if (y < x)
    {
        pivot = x;
        x = y;
        y = pivot;
    }
    while (x < (y - 1))
    {
        if ((eprimo(x) == 0) && (eprimo(x + 2) == 0))
        {
            printf("(%d,%d)", x, x + 2);
            x++;
        }
        else
        {
            x++;
        }
    }

    return 0;
}