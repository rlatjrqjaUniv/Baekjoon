#include <iostream>
using namespace std;

int arr[10000] = {};
int main()
{
    int M = 0, N = 0;
    cin >> M >> N;
    int count = 0;
    int sum = 0,min=0;

    for (int i = M; i <= N; i++)
    {
        if (i == 1) continue;
        bool isTrue = false;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isTrue = true;
                break;
            }
        }

        if (!isTrue)
        {
            arr[count] = i;
            count++;
            sum += i;
            if (count == 1) min = i;
        }
    }

    if (count == 0)
    {
        cout << "-1";
        return 0;
    }

    cout << sum << endl << min;
    return 0;
}