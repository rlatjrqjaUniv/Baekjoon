#include <iostream>
using namespace std;

int main()
{
	int a[7];//입력받을 수
	int b[7] = { 1,1,2,2,2,8 };//원래 있어야 하는 말 수(킹 퀸 룩 비숍 나이트 폰)
	for (int i = 0;;)//무한반복
	{
		cin >> a[i];
		b[i] -= a[i];
		cout << b[i];

		//b 배열 끝나면 탈출
		if (++i >= 6) break;

		cout << " ";
	}

	return 0;
}