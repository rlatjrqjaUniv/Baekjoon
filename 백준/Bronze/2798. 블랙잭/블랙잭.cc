#include <iostream>
using namespace std;

int arr[300000] = {};

int main()
{
    int N = 0, M = 0;
    cin >> N >> M;

    int i = 0;
    while (i<N)
    {
        cin >> arr[i++];
    }

    int max = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int temp = arr[i] + arr[j] + arr[k];
                if (temp <= M && temp > max) max = temp;
            }
        }
    }
    cout << max;
}