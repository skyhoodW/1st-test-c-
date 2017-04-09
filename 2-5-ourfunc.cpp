// ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);

int main()
{
	using namespace std;

	simon(3);
	cout << "pick an integer: ";
	int times;
	cin >> times;
	simon(times);
	cout << "great!";
	cin.get();
	cin.get();
	return 0;
}

void simon(int n)
{
	using namespace std;

	cout << "simon hit you " << n << " times."<<endl;
}