#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void MergeSort(int head, int tail);
void Merge(int head,int mid,int tail);
vector<int> arr;

int main()
{
	int N = 8;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d",&temp);
		arr.push_back(temp);
	}

	MergeSort(0,N-1);
	for (int i = 0; i < arr.size(); i++)
	{
		printf("%d\n", arr[i]);
	}
}

void MergeSort(int head, int tail)
{
	int mid = (head + tail) / 2;

	//크기가 1이 될때까지 왼쪽과 오른쪽 분할
	if (tail - head > 1)
	{
		MergeSort(head, mid);
		MergeSort(mid+1, tail);
	}
	//쪼개진 두 조각(정렬 전)을 정렬한 후 탈출
	Merge(head, mid, tail);
}

void Merge(int head,int mid,int tail)
{
	vector<int> sorted;

	int i = head;
	int j = mid + 1;

	while (i <= mid && j <= tail)
	{
		//쪼개진 두 배열 조각에서 맨 왼쪽을 가져와 비교
		if (arr[i] < arr[j]) 

		//작은 것을 새 배열에 삽입
			sorted.push_back(arr[i++]);
		else sorted.push_back(arr[j++]);
	}

	//한 쪽 배열을 모두 소모 했으면 다른 쪽 배열을 모두 삽입
	while (i <= mid)
	{
		sorted.push_back(arr[i++]);
	}
	while (j <= tail)
	{
		sorted.push_back(arr[j++]);
	}

	//정렬된 배열을 원래 배열에 복사
	for (int k = 0; k < sorted.size(); k++)
	{
		arr[head + k] = sorted[k];
	}
}