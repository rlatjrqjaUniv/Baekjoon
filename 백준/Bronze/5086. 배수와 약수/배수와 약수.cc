#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int first = 0, second = 0;

	while (true)
	{
		cin >> first >> second;

		if (first == 0 && second == 0) break;

		if (second % first == 0) { cout << "factor" << endl; continue; }
		else if (first % second == 0) {cout << "multiple" << endl; continue;}
		else { cout << "neither" << endl;continue;}
	}
	
	return 0;
}