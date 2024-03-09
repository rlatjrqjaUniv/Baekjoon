#include <iostream>
using namespace std;

int main()
{
	double num = 0;
	long long result = 0;
	cin >> num;

	//밑면 n개, 왼쪽 면 n개, 오른쪽 면 n개 : 3x1xn
	//반쪽짜리 윗 면 n-1개 * 2 (양쪽으로 반개씩)
	//맨 윗면 1
	result = 3 * (1 * num) + 2 * (0.5 * (num - 1)) + 1;
	cout << result;

	return 0;
}