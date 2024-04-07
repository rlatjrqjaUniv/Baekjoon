#include <iostream>
using namespace std;

int main()
{
	string text = { ' ' };
	cin >> text;
	int count[27] = { 0 };

	for (int i = 0; i < text.length(); i++)
	{
		int temp = 0;
		temp = (int)text[i];
		if (temp > 96) temp -= 32;//대문자로 변환
		temp -= 65;//A가 0을 기준으로 0~25 배열 사용

		if (temp < 26)count[temp]++;//count[0]=A가 사용된 횟수
	}

	int max = 26;//가장 많이 사용된 알파벳 배열 번호
	int draw = -1;
	for (int i = 0; i < 26; i++)
	{
		if (count[i] > count[max]) max = i;//제일 많이 사용된 알파벳 탐색
		else if (count[i] == count[max]) draw = i;//제일 많이 사용된 횟수와 지금 배열이 동일한가
	}

	if (count[max] == count[draw]) cout << '?';//제일 많이 사용된게 2개 이상?
	else cout << (char)(max + 65);//가장 많이 사용한 배열 번호를 문자로 변환

	return 0;
}