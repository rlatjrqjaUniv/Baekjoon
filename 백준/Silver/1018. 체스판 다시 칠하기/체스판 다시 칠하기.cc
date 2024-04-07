#include <iostream>
using namespace std;

int main()
{
    int N = 0, M = 0;
    cin >> N >> M;
    char board[50][50] = {' '};
    int map[50][50] = {0};
    int min = 64;
    for (int i = 0; i < N; i++)
    {
        string b;
        cin >> b;
        for (int j = 0; j < M; j++)
        {
            board[i][j] = b[j];
        }
    }

    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {
            if (board[i][j] == 'W')
            {
                char last = 'W';
                for (int a = 0; a < 8; a++)
                {
                    if(a%2) last = 'B';
                    else last = 'W';
                    for (int b = 0; b < 8; b++)
                    {
                        if (board[i + a][j + b] != last) map[i][j]++;

                        if(last == 'W') last = 'B';
                        else if (last == 'B') last = 'W';
                    }
                }
            }
            else if (board[i][j] == 'B')
            {
                char last = 'B';
                for (int a = 0; a < 8; a++)
                {
                    if (a % 2) last = 'W';
                    else last = 'B';
                    for (int b = 0; b < 8; b++)
                    {
                        if (board[i + a][j + b] != last) map[i][j]++;

                        if (last == 'W') last = 'B';
                        else if (last == 'B') last = 'W';
                    }
                }
            }
            if (map[i][j] > 32) map[i][j] = 64 - map[i][j];
            if (map[i][j] < min) min = map[i][j];
        }
    }

    cout << min;
}