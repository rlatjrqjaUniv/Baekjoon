#include <iostream>
using namespace std;

void QuickSort(int* arr, int headIndex, int tailIndex);
void Switch(int* a, int* b);

int x[10000] = {};

int main()
{
	int N = 0, k = 0;
	cin >> N >> k;
	for (int i = 0;i < N;i++)
	{
		cin >> x[i];
	}
	QuickSort(x,0,N-1);
	cout << x[k-1];

	return 0;
}

void QuickSort(int* arr, int head, int tail)
{
	//10-1 예외처리
	if (tail - head <= 0) return;

	//1. 기준값 선정
	int pivot = tail;
	int i = head;
	int j = tail - 1;

	while (i<j)
	{
		//2. 앞에서부터 기준보다 큰값 탐색
		do
		{
			if (arr[i] < arr[pivot]) break;
			i++;
		} while (i < j);

		//3. 뒤에서부터 기준보다 작은 값 탐색
		do
		{
			if (arr[j] > arr[pivot]) break;
			j--;
		} while (i < j);

		//4. 선정된 두 값 교환
		//4-1. 큰 값, 작은 값 모두 존재
		if (arr[i] < arr[j] && i<j)
		{
			Switch(&arr[i], &arr[j]);
			i++;j--;
		}
	}

	//4-2. 큰 값만 존재
	if (arr[j] > arr[pivot]) Switch(&arr[j], &arr[pivot]);

	//4-3. 작은 값만 존재
	if (arr[i] < arr[pivot]) Switch(&arr[i], &arr[pivot]);

	//6. i와 j가 서로 교차했는가?
	//7. 기준 값 위치 선정
	//8. 기준의 왼쪽값 정렬	
	QuickSort(arr, head, i);

	//9. 기준의 오른쪽값 정렬
	QuickSort(arr, i+1, tail);

	//10. 종료
	return;
}

void Switch(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}