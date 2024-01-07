#include <iostream>
using namespace std;


int main()
{
    char text[5][15];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            text[i][j] = ' ';
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cin >> text[i];
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            char ch = text[j][i];
            if (ch == '\n' || ch == '\0' || ch == ' ') continue;
            else cout << text[j][i];
        }
    }
    

    return 0;
}