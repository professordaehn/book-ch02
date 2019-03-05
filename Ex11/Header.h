#pragma once
#include <iostream>

using std::cout;
using std::endl;

int  getValue(int, int, int);

int  getValue(int  a, int  b, int  n)
{
	int  returnValue = 0;
	cout << "Enter: a = " << a << " b = " << b << endl;
	int  c = (a + b) / 2;
	if (c * c <= n)        returnValue = c;
	else        returnValue = getValue(a, c - 1, n);
	cout << "Leave: a = " << a << " b = " << b << endl;
	return  returnValue;
}