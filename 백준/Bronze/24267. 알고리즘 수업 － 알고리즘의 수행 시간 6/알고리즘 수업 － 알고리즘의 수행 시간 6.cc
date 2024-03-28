#include <iostream>
using namespace std;
int main()
{
    long long n = 0,count=0;
    cin >> n;

    for (long long i = n - 2; i > 0; i--)
    {
        count += (i * (i + 1)) / 2;
    }
    cout << count << endl << 3;
}