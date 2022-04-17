#include <iostream>
using namespace std;

int val = 100;		// Global Variable

void SimpleFunc1(void)
{
	int val = 20;	// Local Variable
	val += 3;		// increase the value of Local variable by 3

	cout << "---------SimpleFunc1---------" << endl;
	cout << "Global Variable : " << ::val << endl;
	cout << "Local Variable : " << val << endl << endl;
}

void SimpleFunc2(void)
{
	int val = 20;	// Local Variable
	val += 5;		// increase the value of Local variable by 5
	::val += 7;		// increase the value of Global variable by 7

	cout << "---------SimpleFunc2---------" << endl;
	cout << "Global Variable : " << ::val << endl;
	cout << "Local Variable : " << val << endl << endl;
}

int main(void)
{
	SimpleFunc1();
	SimpleFunc2();

	return 0;
}