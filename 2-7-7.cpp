//homework 2.7.7
#include <iostream>
using namespace std;
void time(int, int);

int main()
{
	int hrs;
	cout << "enter the number of hours: ";
	cin >> hrs;
	int min;
	cout << "enter the number of minutes: ";
	cin >> min;
	time(hrs, min);
	cin.get();
	cin.get();
	return 0;
}

void time(int n, int m)
{
	cout << "time: " << n << ":" << m << endl;
}