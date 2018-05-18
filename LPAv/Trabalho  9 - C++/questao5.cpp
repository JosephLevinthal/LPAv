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
        if (regex_match(expressaoRegular, regex("^http[s]{0,1}:\\/\\/[a-zA-Z-_]+(\\.[a-zA-Z-_]+)+(\\/[a-zA-Z-_]+)*(\\.[a-zA-Z-_]+){0,1}$")))
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