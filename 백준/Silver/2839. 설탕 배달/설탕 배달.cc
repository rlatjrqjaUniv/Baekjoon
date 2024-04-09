#include <iostream>
using namespace std;

int main()
{
	int N = 0, amount = 0, max = 0;;
	cin >> N;

	max = N;
	amount = N / 5;
	N = N % 5;

	while(1)
	{
		if (N % 3 == 0) { amount += N / 3; break; }
		else 
		{ 
			amount--;
			N += 5;
		}
		if (N > max) { cout << -1; return 0; }
	}
	cout << amount;

	return 0;
}