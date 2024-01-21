#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double A = 0, B = 0, V = 0;
	double days = 0;
	cin >> A >> B >> V;

	days = ceil((V - A) / (A - B)) + 1;
	cout <<fixed<< (int)days;
	
	return 0;
}