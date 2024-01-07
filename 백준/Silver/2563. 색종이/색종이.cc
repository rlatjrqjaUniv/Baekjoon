#include <iostream>
using namespace std;


int main()
{
    //도화지 초기화
    bool text[100][100] = { false };

    //첫 번째, 두 번째, 세 번째 입력
    int a = 0, x = 0, y = 0;

    //케이스 수 입력
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        //검은색 종이 xy좌표
        cin >> x >> y;

        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                //입력받은 세로 좌표~ +10(j)까지,
                //입력받은 가로 좌표~ +10(k)까지 검은색으로 칠하기
                text[y+j][x + k] = true;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            //100x100 도화지에서 검은 부분이면 카운트
            if (text[i][j]) count++;
        }
    }
    cout << count;

    return 0;
}