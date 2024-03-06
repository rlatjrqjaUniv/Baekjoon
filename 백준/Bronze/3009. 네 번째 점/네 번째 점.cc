#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int pos[3][2] = {};

	for (int i = 0;i < 3;i++)
	{
		cin >> pos[i][0];
		cin >> pos[i][1];
	}
	
	for (int j = 0;j < 2;j++)
	{
		if (pos[0][j] == pos[1][j]) { pos[0][j] = -1; pos[1][j] = -1; }
		if (pos[0][j] == pos[2][j]) { pos[0][j] = -1; pos[2][j] = -1;}
		if (pos[1][j] == pos[2][j]) { pos[1][j] = -1; pos[2][j] = -1;}
	}

	for (int i = 0;i < 3;i++)
	{
		if (pos[i][0] > 0)
		{
			cout << pos[i][0];
			cout << " ";
			break;
		}
	}
	for (int i = 0;i < 3;i++)
	{
		if (pos[i][1] > 0)
		{
			cout << pos[i][1];
			break;
		}
	}

	return 0;
}