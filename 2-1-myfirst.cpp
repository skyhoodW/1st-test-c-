//myfirst.cpp -- displays a message
#include <iostream>           //header file
int main()
{
	using std::endl;               //or use -- using namespace std;
	std::cout << "what???" << endl;//then std:: is not nessasary //start a new line
	using namespace std;
	int fnumber;
	cout << "hello world\nwhat's your favourite number?";	
	cin >> fnumber;
	fnumber = fnumber + 1;
	cout << "my favourite num is larger than yours, it is " << fnumber <<". hahaha!"<< endl;
	cin.get();                //to keep the window open
	cin.get();
	return 0;            //to terminate main()
}
