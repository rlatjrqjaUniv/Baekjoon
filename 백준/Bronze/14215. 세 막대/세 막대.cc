#include <iostream>
using namespace std;

int main()
{
	int line[3] = { 0 };
	cin >> line[0] >> line[1] >> line[2];
	int longest = line[0] > line[1] ? (line[0] > line[2] ? line[0] : line[2]) : (line[1] > line[2] ? line[1] : line[2]);
	int remainder = line[0] + line[1] + line[2] - longest;

	do
	{
		if (remainder > longest)
		{
			cout << (longest + remainder);
			break;
		}
	} while (--longest);

	return 0;
}