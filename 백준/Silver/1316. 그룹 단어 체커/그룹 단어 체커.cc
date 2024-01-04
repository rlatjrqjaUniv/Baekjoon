#include <iostream>
using namespace std;

int main()
{
	int num=0;//케이스 수
	cin >> num;
	int count=0;//그룹단어 수

	string text[101];
	for (int i = 0; i < num; i++)
	{//n번 줄 단어 입력
		cin >> text[i];
	}

	for (int i = 0; i < num; i++)
	{
		char chbff[100] = {};//이번 단어에 등장한 알파벳
		bool isGroup = true;//그룹단어인가?

		for (int j = 0; j < text[i].length(); j++)
		{
			//i번 줄 단어의 j번째 글자
			char ch = text[i][j];

			//연결 안된 알파벳 나올 때까지 전진
			while(text[i][j] == text[i][j+1])
			{
				j++;
			}

			int k = 0;

			//빈 칸 아니면 버퍼를 이동
			while (chbff[k]!='\0')
			{
				//이미 있는 알파벳이면 그룹 단어가 아님
				if (chbff[k] == text[i][j])
				{
					isGroup = false;
					break;
				}
				k++;
			}
			//빈 칸을 찾으면 알파벳 삽입
			chbff[k] = text[i][j];
		}
		//그룹 단어면 카운트
		if (isGroup) count++;
	}
	cout << count;

	return 0;
}