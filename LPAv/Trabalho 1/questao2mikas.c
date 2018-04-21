#include <stdio.h>
#include <stdlib.h>

int contem7(int n)
{
    while (n != 0)
    {
        if (n % 10 == 7)
            return 1;
        n = n / 10;
    }
    return 0;
}

void conta_palmas(int n, int m, int k)
{
    int n_atual = 1;
    int pos = 1;
    int dir = 1;

    while (k > 0)
    {
        if (pos == m)
        {
            if (contem7(n_atual) || n_atual % 7 == 0)
            {
                k -= 1;
                if (k == 0)
                {
                    printf("%d\n", n_atual);
                }
            }
        }
        n_atual += 1;
        pos += dir;
        if (pos == 1 || pos == n)
        {
            dir = -dir;
        }
    }
}

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    while (n != 0 && m != 0 && k != 0)
    {
        conta_palmas(n, m, k);
        scanf("%d %d %d", &n, &m, &k);
    }
    return 0;
}