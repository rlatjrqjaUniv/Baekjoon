#include <iostream>
using namespace std;

int main()
{
	int a,b, c, n;
	cin >> a >> b >> c >> n;

	for (int i = n;i <= 100;i++)
	{
		if (a * i + b <= c * i)
		{

		}
		else
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;

	return 0;
}