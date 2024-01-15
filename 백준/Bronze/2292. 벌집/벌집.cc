#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int level = 1;
    int max=1;

    int i = 1;
    while(i!=N)
    {
        if (i == max)
        {
            max += level * 6;
            level++;
        }

        i++;
    }
    cout << level;

    return 0;
}