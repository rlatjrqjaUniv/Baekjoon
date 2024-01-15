#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int wDot = 2, hDot = 2;

    int i = 0;
    while (i < N)
    {
        wDot += wDot - 1;
        hDot += hDot - 1;
        i++;
    }
    cout << (wDot * hDot);

    return 0;
}