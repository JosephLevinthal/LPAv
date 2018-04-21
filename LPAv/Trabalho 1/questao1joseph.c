#include <stdio.h>
#include <stdlib.h>

int numero1 = 0;
int numero2 = 0;
int numeroFinal = 0;

//Verifica se o número é primo.
int is_prime(int num)
{
    if (num <= 1)
        return 0;
    if (num % 2 == 0 && num > 2)
        return 0;
    for (int i = 3; i < num / 2; i += 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

//Acha e imprime os primos gêmeos.
int primosGemeos(int numero1, int numeroFinal)
{
    while ((numero1 <= numeroFinal) || (numero2 <= numeroFinal))
    {
        if (is_prime(numero1))
        {
            numero2 = numero1 + 2;
            if ((is_prime(numero1)) && (is_prime(numero2)) && (numero1 < numeroFinal) && (numero2 < numeroFinal))
            {
                printf("(%d,%d)", numero1, numero2);
                numero1 = numero1 + 2;
            }
            else
            {
                numero1 = numero1 + 1;
            }
        }
        else
        {
            numero1 = numero1 + 1;
        }
    }
    return 1;
}

int main()
{
    scanf("%d", &numero1);
    scanf("%d", &numeroFinal);
    primosGemeos(numero1, numeroFinal);
    return 1;
}
