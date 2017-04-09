//sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>      //or math.h

int main()
{
	using namespace std;     //

	double area;      //double
	cout << "the area= " ;
	cin >> area;
	double side;      //double
	side = sqrt(area);
	cout << "oh " << side
		<<" is xxxxx." << endl;
	cin.get();
	cin.get();
	return 0;
}