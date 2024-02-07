#include <iostream>
#include <cmath>
using namespace std;

int q[10000] = { 1 };

int main()
{
	int N, K,count=1;
	cin >> N >> K;


	for (int i = 2;i <= N;i++)
	{
		if (N % i == 0)
		{
			q[count++] = i;
		}
	}
	cout << q[K - 1];
	
	return 0;
}