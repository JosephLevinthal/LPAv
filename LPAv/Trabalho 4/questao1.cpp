#include <string>
#include <iostream>
#include <vector>

using namespace std;
//struct Pais p;
//vector <Pais> V;

typedef struct Pais
{
    string nome;
    int ouro;
    int prata;
    int bronze;
} Pais;

Pais p;
Pais V[100];

int numeroDePaises;

void botarPaisesNoVetor()
{
    int i = 0;
    cin >> numeroDePaises;
    while (i < numeroDePaises)
    {
        cin >> V[i].nome;
        cin >> V[i].ouro;
        cin >> V[i].prata;
        cin >> V[i].bronze;
        cout << V[i].nome << " " << V[i].ouro << " " << V[i].prata << " " << V[i].bronze << " " << endl;
        i = i + 1;
    }
}

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

void qSortInterno(int v[], int inicio, int fim)
{
    int pivot;
    int temp;
    int i, j;

    if (fim - inicio > 0)
    {
        i = inicio;
        j = fim;
        pivot = v[(i + j) / 2];

        do
        {
            while (v[i] > pivot)
                i++; /* procura por algum item do lado errado  >= pivot */
            while (v[j] < pivot)
                j--; /* procura por algum item do lado errado <= pivot */
            if (i <= j)
            { /* deixa o igual para garantir que ao final i<j */
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                i++;
                j--;
            }
        } while (i <= j);

        if (inicio < j)
            qSortInterno(v, inicio, j);
        if (i < fim)
            qSortInterno(v, i, fim);
    }
}

int main()
{
    botarPaisesNoVetor();
    //qSortInterno();
}