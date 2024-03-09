#include <iostream>
using namespace std;

int main()
{
	int count = 0,maxX=-10000,minX= 10000,maxY= -10000,minY= 10000;
	cin >> count;
	while (count--)
	{
		int temp = 0;
		cin >> temp;
		if (temp > maxX)maxX = temp;
		if (temp < minX)minX = temp;
		cin >> temp;
		if (temp > maxY)maxY = temp;
		if (temp < minY)minY = temp;
	}
	cout << (maxX - minX) * (maxY - minY);

	return 0;
}