#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string N;//입력 받은 수
    long B = 0;//진법
    long sum = 0;//10진법으로 전환된 값
    long count=0;//자리 수
    cin >> N >> B;

    for (int i = N.length() - 1; i >= 0; i--)
    {
        //입력 받은 수 -> 단일 수로 전환
        long ch = (long)N[i];
        //알파벳일 경우 Z -> 35
        if (ch >= 65 && ch <= 90) ch -= 55;
        //숫자일 경우 '9' -> 9
        else ch -= 48;

        //10진법 = (맨 뒷자리 배열 -> 앞으로) * 진수^자리 수
        //ex) 36진수 AB = (10 * 36^1) + (11 * 36^0) = 371
        sum += ch * pow(B, count);

        //자리 수 증가
        count++;
    }
    cout << sum;

    return 0;
}