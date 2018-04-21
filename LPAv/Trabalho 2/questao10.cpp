#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<int> v;
vector<int> vResultados;

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

int somaVetor(int i)
{
    if (zero(i))
        return 0;
    return soma(v[i], somaVetor(decr(i)));
}

int main()
{
    v.push_back(0);
    int i = 0;
    int k = 0;
    scanf("%d", &i);
    scanf("%d", &k);
    for (int l = 0; l < k; l++)
    {
        for (int j = 0; j < i; j++)
        {
            int num1 = 0;
            scanf("%d", &num1);
            v.push_back(num1);
        }
        vResultados.push_back(somaVetor(v.size()));
    }
    printf("%d\n", vResultados[vResultados.size() - 1]);
}