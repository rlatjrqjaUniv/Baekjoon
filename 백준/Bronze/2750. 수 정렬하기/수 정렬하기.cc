#include <iostream>
using namespace std;

int main()
{
	int N = 0, temp = 0;;
	int arr[1000] = {};
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> temp;

		for (int j = i;j >= 0;j--)
		{
			if (j == 0) arr[j] = temp;
			else if (arr[j-1] > temp)
			{
				arr[j] = arr[j - 1];
			}
			else
			{
				arr[j] = temp;
				break;
			}
		}
	}

	for(int i=0;i<N;i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}