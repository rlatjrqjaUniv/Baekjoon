#include <iostream>
using namespace std;

int main()
{
    int T = 0, C = 0;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int Quater = 0, Dime = 0, Nickel = 0, Penny = 0;

        cin >> C;

        while (C >= 25)
        {
            C -= 25;
            Quater++;
        }
        while (C >= 10)
        {
            C -= 10;
            Dime++;
        }
        while (C >= 5)
        {
            C -= 5;
            Nickel++;
        }
        while (C >= 1)
        {
            C -= 1;
            Penny++;
        }

        cout << Quater << " ";
        cout << Dime << " ";
        cout << Nickel << " ";
        cout << Penny;
        if(i!=T-1) cout << endl;
    }

    return 0;
}