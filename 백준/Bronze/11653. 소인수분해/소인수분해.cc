#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    for (int i=2; N > 1; i++)
    {
        if (N % i == 0)
        {
            N /= i;
            cout << i;
            if (N != 1) cout << endl;
            i = 1;
        }
    }

    return 0;
}