#include <iostream>
using namespace std;

int mat[9][9] = { 0 };

int main()
{
	int max = 0, verti = 0, horiz = 0;

	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			cin >> mat[i][j];
			if (mat[i][j] > max)
			{
				max = mat[i][j];
				verti = i;
				horiz = j;
			}
		}
	}
	cout << max << endl;
	cout << verti+1 << ' ' << horiz+1;

	return 0;
}