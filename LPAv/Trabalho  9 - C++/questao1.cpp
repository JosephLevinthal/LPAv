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
        if (regex_match(expressaoRegular, regex("[0-9]{7}-[0-9]{1}")))
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