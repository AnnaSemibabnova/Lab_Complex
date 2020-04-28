#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
	Complex a;
	Complex b(1, 2);
	Complex c(b);
	cout << a << " " << b << " " << c << " Constructors" << endl;
	c.set(3, 4);
	cout << c.getRe() << " + " << c.getIm() << "i" << " - set&&get" << endl;
	Complex d;
	d = a + b;
	cout << d << " Operator + " << endl;
	d = d - b;
	cout << d << " Operator - " << endl;
	d = c / b;
	cout << d << "Ooperator * " << endl;
	d = b;
	cout << " Operator / " << d << endl;
	d = c * b;
	cout << d << " Operator = " << endl;
	cout << (d == b) << " Operator == " << endl;
	cout << (a == b) << " Operator == " << endl;

	Complex r;
	cin >> r;
	cout << r << " Operator cin>> " << endl;
	
	return 0;
}