#include <iostream>
using namespace std;


int main()
{
	int X=0, level = 0,count=1;

	cin >> X;

	while (true)
	{
		int bottom = 0;

		for (int right = level;right >= 0;right--)
		{
			if (count == X)
			{
				cout << right + 1 << "/" << bottom + 1;
				return 0;
			}

			bottom++;
			count++;
		}
		level++;

		for (int right = 0;right <= level;right++)
		{
			if (count == X)
			{
				cout << right + 1 << "/" << bottom + 1;
				return 0;
			}

			bottom--;
			count++;
		}
		level++;
	}

	return 0;
}