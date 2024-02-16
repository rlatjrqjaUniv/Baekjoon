#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x = 0, y = 0, w = 0, h = 0;
	cin >> x >> y >> w >> h;
	int min = 1000;

	if (min > w - x) min = w - x;
	if (min > h - y) min = h - y;
	if (min > x) min = x;
	if (min > y) min = y;
	
	cout << min;

	return 0;
}