#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>

std::vector<int> resultsVector;

bool isSignatureFalse(std::string assOriginal, std::string assCorrente)
{
    int discrepancies = 0;
    for (int i = 0; i < assOriginal.size(); i++)
    {
        if (assOriginal[i] != assCorrente[i])
        {
            discrepancies++;
        }
    }
    if (discrepancies > 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void getAndCompare(int n)
{
    int m = 0;
    int fakeCount = 0;
    std::map<std::string, std::string> originais;
    std::map<std::string, std::string> mostrados;
    std::map<std::string, std::string>::iterator iter;
    std::map<std::string, std::string>::iterator iter2;

    for (int i = 0; i < n; i++)
    {
        std::string nomeAluno;
        std::string assinaturaAluno;

        std::cin >> nomeAluno >> assinaturaAluno;

        originais.emplace(nomeAluno, assinaturaAluno);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        std::string nomeAluno;
        std::string assinaturaAluno;

        std::cin >> nomeAluno >> assinaturaAluno;

        mostrados.emplace(nomeAluno, assinaturaAluno);
    }

    for (iter2 = mostrados.begin(); iter2 != mostrados.end(); iter2++)
    {
        iter = originais.find(iter2->first);
        if (iter != iter2 && isSignatureFalse(iter->second, iter2->second))
        {
            fakeCount++;
        }
    }

    resultsVector.push_back(fakeCount);
}

int main()
{
    int n = -1;
    while (true)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        getAndCompare(n);
    }
    for (int i = 0; i < resultsVector.size(); i++)
    {
        printf("%d\n", resultsVector[i]);
    }
}