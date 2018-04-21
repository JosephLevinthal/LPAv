#include <stdio.h>
#include <stdlib.h>

int numeroPessoas;
int pessoaQuePalma;
int numeroPalmas;

int contem7(int numero)
{
    while (numero != 0)
    {
        if (numero % 10 == 7)
        {
            return 1;
        }
        else
        {
            numero = numero / 10;
        }
    }
    return 0;
}

void contadorDePalmas(int numeroPessoas, int pessoaQuePalma, int numeroPalmas)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (k != numeroPalmas)
    {
        if (j == numeroPessoas)
        {
            while (j > 1 && k != numeroPalmas)
            {
                if (((i % 7 == 0) || (contem7(i) == 1)) && (j == pessoaQuePalma))
                {
                    k = k + 1;
                    if (k == numeroPalmas && (j == pessoaQuePalma))
                    {
                        printf("%d", i);
                        return;
                    }
                }
                i = i + 1;
                j = j - 1;
            }
        }
        else
        {
            if (((i % 7 == 0) || (contem7(i) == 1)) && (j == pessoaQuePalma))
            {
                k = k + 1;
                if (k == numeroPalmas && (j == pessoaQuePalma))
                {
                    printf("%d", i);
                    break;
                }
            }
            i = i + 1;
            j = j + 1;
        }
    }
}

void main()
{
    scanf("%d %d %d", &numeroPessoas, &pessoaQuePalma, &numeroPalmas);
    while (numeroPessoas != 0 && pessoaQuePalma != 0 && numeroPalmas != 0)
    {
        contadorDePalmas(numeroPessoas, pessoaQuePalma, numeroPalmas);
        printf("\n");
        scanf("%d %d %d", &numeroPessoas, &pessoaQuePalma, &numeroPalmas);
    }
}