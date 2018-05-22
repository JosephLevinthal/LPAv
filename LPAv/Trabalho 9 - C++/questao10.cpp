#include <iostream>
#include <stdio.h>
#include <string>
#include <regex>
using namespace std;

int main()
{
    string expressaoRegular;
    cin >> expressaoRegular;
    while (expressaoRegular != "####")
    {
        if (regex_match(expressaoRegular, regex("^[A-Z]+[a-z]+[0-9]+([!@#$%^&*()_+={}\\\\|\\/?<>-]|[\\[\\]])+$")))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
        cin >> expressaoRegular;
    }
}