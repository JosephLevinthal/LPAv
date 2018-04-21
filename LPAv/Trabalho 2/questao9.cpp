#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<int> v;

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

int mult(int x, int y)
{
    if (zero(x))
        return 0;
    return soma(mult(decr(x), y), y);
}

int multVetor(int i)
{
    if (zero(i))
        return 1;
    return mult(v[i], multVetor(decr(i)));
}

int main()
{
    v.push_back(0);
    int i = 0;
    scanf("%d", &i);
    for (int j = 0; j < i; j++)
    {
        int num1 = 0;
        scanf("%d", &num1);
        v.push_back(num1);
    }
    printf("%d\n", multVetor(v.size() - 1));
}