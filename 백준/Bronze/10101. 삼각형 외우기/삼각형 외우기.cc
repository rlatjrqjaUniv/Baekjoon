#include <iostream>
using namespace std;

int main()
{
	int angle1 = 0, angle2 = 0, angle3 = 0;
	cin >> angle1 >> angle2 >> angle3;
	if (angle1 + angle2 + angle3 != 180) cout << "Error";
	else
	{
		if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3)
		{
			if (angle1 == angle2 && angle2 == angle3) cout << "Equilateral";
			else cout << "Isosceles";
		}
		else cout << "Scalene";
	}

	return 0;
}