#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	while (true)
	{
		int n, count = 0,sum=0;
		int yak[30] = {0};
		cin >> n;
		if (n == -1) return 0;

		for (int i = 1;i <= n / 2;i++)
		{
			if (n % i == 0) { yak[count++] = i; sum += i; }
		}

		if (sum == n)
		{
			cout << n << " = ";
			int i = 0;
			cout << yak[i++];
			while (i < count)
			{
				cout << " + " << yak[i++] ;
			}
			cout << endl;
		}
		else cout << n << " is NOT perfect." << endl;
	}
	
	return 0;
}