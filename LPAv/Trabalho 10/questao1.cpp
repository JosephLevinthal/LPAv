// UVa 10010 - Where's Waldorf?
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

int move[8][2] = {{1, 1}, {1, 0}, {1, -1}, {0, 1}, {0, -1}, {-1, 1}, {-1, 0}, {-1, -1}};

int main()
{
    int t;
    for (t = 1; t; t--)
    {
        int m, n;
        cin >> m >> n;
        string soup[50];
        for (int i = 0; i < m; i++)
        {
            cin >> soup[i];
            for (int j = 0; j < n; j++)
                if (soup[i][j] >= 'a' && soup[i][j] <= 'z')
                    soup[i][j] = soup[i][j] - 'a' + 'A';
        }
        int q;
        for (cin >> q; q; q--)
        {
            string word;
            cin >> word;
            for (int j = 0; j < word.length(); j++)
                if (word[j] >= 'a' && word[j] <= 'z')
                    word[j] = word[j] - 'a' + 'A';
            int l = word.length() - 1;
            int si = 0, sj = 0;
            bool found = false;
            for (int i = 0; i < m && !found; i++)
                for (int j = 0; j < n && !found; j++)
                    if (soup[i][j] == word[0])
                    {
                        for (int k = 0; k < 8 && !found; k++)
                        {
                            if (i + l * move[k][0] >= 0 && i + l * move[k][0] < m && j + l * move[k][1] >= 0 && j + l * move[k][1] < n)
                            {
                                int a = i, b = j;
                                found = true;
                                for (int ll = 1; ll <= l; ll++)
                                {
                                    a += move[k][0];
                                    b += move[k][1];
                                    if (soup[a][b] != word[ll])
                                    {
                                        found = false;
                                        break;
                                    }
                                }
                                if (found)
                                {
                                    si = i;
                                    sj = j;
                                }
                            }
                        }
                    }
            cout << si + 1 << " " << sj + 1 << endl;
        }
        if (t > 1)
            cout << endl;
    }
}