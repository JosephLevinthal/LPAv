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
        if (regex_match(expressaoRegular, regex("^((0[0-9])|([12][1-9])|(3[01]))\\/((0[1-9])|1[012])\\/((19[0-9]{2,2})|(20((0[0-9])|(1[0-7]))))$")))
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