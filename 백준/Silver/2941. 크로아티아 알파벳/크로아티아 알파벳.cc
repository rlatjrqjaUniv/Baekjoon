#include <iostream>
using namespace std;

int main()
{
	string text = {};
	cin >> text;
	int length=0;
	
	for (int i = 0; i < text.length(); i++)
	{
		char ch = text[i];

		if (ch == '=')
		{
			switch (text[i-1])
			{
			case 'z':
				if (text[i - 2] == 'd')
				{
					length -= 2; 
					break;
				}
			case 'c':
			case 's':
				length -= 1;
				break;
			default:
				break;
			}
		}
		else if (ch == '-')
		{
			switch (text[i - 1])
			{
			case 'c':
			case 'd':
				length -= 1;
				break;
			}
		}
		else if (ch == 'j')
		{
			switch (text[i - 1])
			{
			case 'l':
			case 'n':
				length -= 1;
				break;
			}
		}
		length++;
	}
	cout << length;
	return 0;
}