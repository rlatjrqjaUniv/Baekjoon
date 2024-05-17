#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

class Node
{
public:
	int value;
	Node* next;

	Node(int val)
	{
		value = val;
		next = nullptr;
	}
};

class LinkedList
{
	Node* head;
	Node* last;
	int count;

public:
	LinkedList()
	{
		head = nullptr;
		last = nullptr;
		count = 0;
	}

	void PushBack(int val)
	{
		if (head == nullptr)
		{
			head = new Node(val);
			last = head;
			count++;
		}
		else
		{
			if (head == last)
			{
				head->next = new Node(val);
				last = head->next;
				count++;
			}
			else
			{
				last->next = new Node(val);
				last = last->next;
				count++;
			}
		}
	}

	void InsertFront(int val)
	{
		if (head == nullptr)
		{
			head = new Node(val);
			last = head;
			count++;
		}
		else
		{
			Node* node = new Node(val);
			node->next = head;
			head = node;
			count++;
		}
	}

	int Delete()
	{
		if (head == nullptr)
		{
			return -1;
		}

		Node* headNode = head;
		int result = head->value;
		head = head->next;
		delete headNode;
		count--;
		return result;
	}

	int Peek()
	{
		if (head == nullptr)
		{
			return 0;
		}

		return head->value;
	}

	int Count() { return count; }
};

int main()
{
	LinkedList* stack = new LinkedList();

	int N = 0;
	scanf("%d", &N);
	
	int X = 0;
	for (int i = 0; i < N; i++)
	{
		int command = 0;
		scanf("%d", &command);

		switch (command)
		{
		case 1:
			scanf("%d", &X);
			stack->InsertFront(X);
			break;
		case 2:
			printf("%d\n", stack->Delete());
			break;
		case 3:
			printf("%d\n", stack->Count());
			break;
		case 4:
			stack->Peek()==0? printf("%d\n", 1):printf("%d\n", 0);
			break;
		case 5:
			stack->Peek()!=0? printf("%d\n", stack->Peek()):printf("%d\n", -1);
			break;
		default:
			break;
		}
	}

	return 0;
}