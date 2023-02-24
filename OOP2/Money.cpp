#include "Money.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Money::Read()
{
	long x;
	int y;
	cout << "hryvnias = ";
	cin >> x;
	cout << "pennies = ";
	cin >> y;
	Init(x, y);
}
bool Money::Init(long x, int y)
{
	
	first = x;
	second = y;
	if (first <0|| second < 0) {
		first = 0;
		second = 0;
		cout << "Wrong arguments to Init!" << endl;
		return false;
	}
	else {
		if (second >= 100) {
			int g = second % 10 % 10;
			first += g;
			second -= g * 100;
		}
		return true;
	}
}
void Money::Display() const
{
	cout << "Money = " << first << "," << second << endl;
}
void Money::GeneralDisplay()
{
	Money m;
	int n;
	cout << "1 - Subtraction" << endl;
	cout<< "2 - Multiplication by a fractional number" << endl;
	cout << "3 - Comparison of amounts" << endl;
	cout << "4 - Exit" << endl;
	cout << "5 - Change the value" << endl;
	cout << "Enter: ";

	cin >> n;
	switch (n) {
	case 1: subtraction(); break;
	case 2: multiplication();break;
	case 3: comparison();break;
	case 4: break;
	case 5: Read(); break;
	}
}
void Money::subtraction()
{
	long x;
	int y;
	cout << first << "," << second << " -  ???" << endl;
	cout << "Enter the negative hryvnias: ";
	cin >> x;
	cout << "Enter the negative pennies: ";
	cin >> y;
	cout << first << "," << second << " - "<< x <<","<< y << " = ";
	second = second + first * 100;
	first = 0;
	y += x * 100;
	second -= y;
	first += second / 100;
	second -= first * 100;
	if (y < 10) {
		cout << x << ",0" << y << endl;
	}
	else {
		cout << x << "," << y << endl;
	}
	GeneralDisplay();
}
void Money::multiplication()
{
	double y;
	cout << first << "," << second << " *  ???" << endl;
	cout << "Enter a fractional number: ";
	cin >> y;
	cout << first << "," << second << " * " << y << " = ";
	second = second + first * 100;
	first = 0;
	second *= y;
	first += second / 100;
	second -= first * 100;
	cout << first << "," << second << endl;
	GeneralDisplay();
}
void Money::comparison()
{
	long x;
	int y;
	cout << first << "," << second << " </>/=  ???" << endl;
	cout << "Enter the negative hryvnias: ";
	cin >> x;
	cout << "Enter the negative pennies: ";
	cin >> y;
	cout << first << "," << second;
	second = second + first * 100;
	first = 0;
	y += x * 100;
	if (second < y) {
		cout << " < ";
	}
	else {
		if (second>y) {
			cout << " > ";
		}
		else {
			cout << " = ";
		}
	}
	first += second / 100;
	second -= first * 100;
	x += y / 100;
	y -= x * 100;
	cout << x << "," << y << endl;
	GeneralDisplay();
}
string Money::toString() const
{
	stringstream s; // створили об'єкт класу "літерний потік"
	s<< "Money = " << first << "," << second << endl; // направили в літерний потік виведення
	// даних про об'єкт
	return s.str(); // метод str() перетвоює літерний потік
	// до літерного рядка
}

double friendSubtraction(long x, int y)
{
	long x1;
	int y1;
	cout << x << "," << y << " -  ???" << endl;
	cout << "Enter the negative hryvnias: ";
	cin >> x1;
	cout << "Enter the negative pennies: ";
	cin >> y1;
	cout << x << "," << y << " - " << x1 << "," << y1 << " = ";
	y = y + x * 100;
	x = 0;
	y += x * 100;
	y -= y1;
	x += y / 100;
	y -= x * 100;
	if (y < 10) {
		cout << x << ",0" << y << endl;
	}
	else {
		cout << x << "," << y << endl;
	}
	return 0;
}
double Money::staticSubtraction(long x, int y)
{
	long x1;
	int y1;
	cout << x << "," << y << " -  ???" << endl;
	cout << "Enter the negative hryvnias: ";
	cin >> x1;
	cout << "Enter the negative pennies: ";
	cin >> y1;
	cout << x << "," << y << " - " << x1 << "," << y1 << " = ";
	y = y + x * 100;
	x = 0;
	y1 += x1 * 100;
	y -= y1;
	x += y / 100;
	y -= x * 100;
	if (y < 10) {
		cout << x << ",0" << y << endl;
	}
	else {
		cout << x << "," << y << endl;
	}
	return 0;
}