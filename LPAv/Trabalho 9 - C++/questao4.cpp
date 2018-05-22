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
        if (regex_match(expressaoRegular, regex("^[a-zA-Z]+@[a-zA-Z]+(\\.[a-zA-Z]+)+$")))
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