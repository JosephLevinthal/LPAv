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
        if (regex_match(expressaoRegular, regex("^RS[0-9]{1,3}(\\.[0-9]{3,3}){0,1},[0-9]{2,2}$")))
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