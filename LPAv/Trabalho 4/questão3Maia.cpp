#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int bubble(int vet[], int n)
{
    int k, j, aux, auxvet[n];
    for (k = 0; k < n; k++)
    {
        auxvet[k] = vet[k];
    }
    for (k = n - 1; k > 0; k--)
    {
        for (j = 0; j < k; j++)
        {
            if (vet[j] < vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
    j = 0;
    for (k = 0; k < n; k++)
    {
        if (auxvet[k] == vet[k])
        {
            j++;
        }
    }
    return j;
}

int main()
{
    int casos, alunos, i, nota;
    cin >> casos;
    while (casos > 0)
    {
        cin >> alunos;
        int vet[1000];
        for (i = 0; i < alunos; i++)
        {
            cin >> nota;
            vet[i] = nota;
        }
        cout << bubble(vet, alunos);
        cout << endl;

        casos--;
    }
    return 0;
}