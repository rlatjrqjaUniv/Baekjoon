#include <iostream>
using namespace std;

int a, b;
int matA[101][101] = {0};
int matB[101][101] = {0};

int main()
{
	cin >> a >> b;

	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin >> matA[i][j];
		}
	}
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin >> matB[i][j];
		}
	}

	for (int i = 0; ; )
	{
		for (int j = 0; j < a; )
		{
			cout << matA[i][j] + matB[i][j];
			j++;
			if (j < a) cout << ' '; 
			else break;
		}
		i++;
		if(i < b) cout << '\n';
		else return 0;
	}

	return 0;
}