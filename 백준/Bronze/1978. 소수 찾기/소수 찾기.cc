#include <iostream>
using namespace std;

int main()
{
    int N=0,count=0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num = 0, temp = 0;
        cin >> num;
        for (int j = 1; j <= num / 2; j++)
        {
            if (num % j == 0) temp++;
        }
        if (temp == 1) count++;
    }
    cout << count;

    return 0;
}