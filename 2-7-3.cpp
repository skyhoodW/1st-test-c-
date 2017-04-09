//homework 2.7.3
#include <iostream>
using namespace std;
void mice(void);
void see(void);

int main()
{
	mice();
	mice();
	see();
	see();
	cin.get();							//dont forget this
	return 0;
}

void mice(void)
{
	cout << "Three blind mice"<<endl;	//endl is nessasary for one sentence
}

void see(void)
{
	cout << "See how they run"<<endl;
}