#include <iostream>
using namespace std;

int main()
{
    long N;//입력 받은 수
    long B = 0;//진법
    string sum;//B진법으로 전환된 값
    cin >> N >> B;

    //더 이상 못 쪼갤 때 까지
    while(N > 0)
    {
        //B진법으로 표현 가능한 범위의 수
        long temp = N % B;

        //10이상 (알파벳 아스키코드)
        if (temp >= 10) temp += 'A'-10;
        else temp += '0';

        //아스키코드를 char형 알파벳으로 변환
        char ch = temp;

        //앞자리 계속 갱신
        //15 ->12진법 : (2번째 반복 ch=C) + (1번째 반복 ch=3)
        sum = ch + sum;
        N = N / B;
    }

    cout << sum;

    return 0;
}