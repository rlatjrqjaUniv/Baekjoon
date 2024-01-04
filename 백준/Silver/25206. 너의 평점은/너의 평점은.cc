#include <iostream>
using namespace std;

int main()
{
	float sum = 0;//과목별 점수 합
	float point=0;//수강 학점

	string a[20]= { " " };
	float b[20] = { 0 };;
	string c[20] = {" "};

	for (int i = 0; i < 20; i++)
	{
		//점수 입력
		cin >> a[i];//과목명
		cin >> b[i];//학점
		cin >> c[i];//등급


		if(c[i][1] == '+') sum += 0.5f * b[i];

		char ch = c[i][0];
		switch (ch)
		{
		case 'A':
			sum += 4.0f * b[i];
			break;
		case 'B':
			sum += 3.0f * b[i];
			break;
		case 'C':
			sum += 2.0f * b[i];
			break;
		case 'D':
			sum += 1.0f * b[i];
			break;
		default:
			break;
		}

		if(c[i][0] != 'P') point += b[i];//수강한 학점 더하기
	}
	float result = sum / point;
	cout << result;

	return 0;
}