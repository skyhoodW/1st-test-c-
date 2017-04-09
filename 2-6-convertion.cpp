// convertion.cpp -- defining your own function
#include <iostream>
double conv(double);

int main()
{
	using namespace std;

	cout << "kilos= ";
	double kilos;
	cin >> kilos;
	double pounds = conv(kilos);
	cout << kilos<<" kilos = "
		<<pounds<<"pounds"<<endl;
	cin.get();
	cin.get();
	return 0;
}

double conv(double kilos)
{
	double pounds = kilos * 14;
	return pounds;
}