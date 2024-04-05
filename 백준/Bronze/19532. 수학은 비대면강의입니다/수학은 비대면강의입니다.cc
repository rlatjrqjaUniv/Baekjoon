#include <iostream>
using namespace std;

int main()
{
	double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	cin >> a >> b >> c >> d >> e >> f;
	double x = 0;
	double y = 0;

	if (!a || !d)
	{
		if (!a)
		{
			y = c / b;
			x = (f - (e * y)) / d;
		}
		if (!d)
		{
			y = f / e;
			x = (c - (b * y)) / a;
		}
	}
	if (!b || !e)
	{
		if (!b)
		{
			x = c / a;
			y = (f - (d * x)) / e;
		}
		if (!e)
		{
			x = f / d;
			y = (c - (a * x)) / b;
		}
	}
	if (a && b && c && d)
	{
		x = ((e / b) * c - f) / (a * (e / b) - d);
		y = ((d / a) * c - f) / (b * (d / a) - e);
	}
	
	cout << x<< " "<< y;

	return 0;
}