#include <iostream>
#include "Money.h"
#include <string>
#include <sstream>
using namespace std;

int main()
{
	Money m;
	m.Read();
	m.Display();
	m.GeneralDisplay();
	cout<<m.toString();
	int y;
	long x;
	/*cout << "Enter the negative hryvnias: ";
	cin >> x;
	cout << "Enter the negative pennies: ";
	cin >> y;
	friendSubtraction(x, y);*/
	cout << "Enter hryvnias: ";
	cin >> x;
	cout << "Enter pennies: ";
	cin >> y;
	Money::staticSubtraction( x, y);
}
