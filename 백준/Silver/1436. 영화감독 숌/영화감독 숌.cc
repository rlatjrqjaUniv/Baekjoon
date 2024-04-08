#include <iostream>

using namespace std;

int arr[10000] = {};

bool Find666(int num)
{
    int n = num;
    while (n > 665)
    {
        if (n % 10 == 6)
        {
            if ((n / 10 % 10) == 6 && (n / 100 % 10) == 6)
            {
                return true;
            }
        }
        n = n / 10;
    }
    return false;
}

int main()
{
    int N = 0,count=0;
    cin >> N;
    
    for (int i = 666; count<10000; i++)
    {
        if (Find666(i))
        {
            arr[count++] = i;
        }
    }

    cout << arr[N - 1];
}