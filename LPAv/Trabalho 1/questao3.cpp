#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> v;

std::string alternar(std::vector<int> input, int size)
{
    int i = 0;
    int k = 0;
    int par = input[0] % 2 == 0 ? 1 : 0;
    while (i < size)
    {
        k++;
        int pivot = 0;
        while (pivot < k)
        {
            if (par == 1)
            {
                if (input[i] % 2 != 0)
                    return "NAO";
            }
            else
            {
                if (input[i] % 2 == 0)
                    return "NAO";
            }
            pivot++;
            i++;
        }
        par = par == 0 ? 1 : 0;
        i--;
        i++;
    }
    return std::to_string(k);
}

int main()
{
    while (1)
    {
        int size;
        std::vector<int> entrada;
        scanf("%d", &size);
        if (size == -1)
        {
            break;
        }
        int i = 0;
        while (i < size)
        {
            int temp;
            scanf("%d", &temp);
            entrada.push_back(temp);
            i++;
        }
        v.push_back(alternar(entrada, size));
    }
    int i = 0;
    while (i < v.size())
    {
        std::cout << v[i] << "\n";
        i++;
    }
}