#include "stdafx.h"
#include <iostream>
#include "Complex.cpp"
#include "Complex.h"
using namespace std;


int main()
{
	double num1;
	double num2;
	double num3;
	double num4;

	cout << "Enter the first complex number ";
	cin >> num1 >> num2;

	cout << endl;

	cout << "Enter the second complex number ";
	cin >> num3 >> num4;

	Complex ob1(num1, num2);
	Complex ob2(num3, num4);

	ob1.add();
	ob2.add();
	ob1.subtract();
	ob2.subtract();
	ob1.multiply();
	ob2.multiply();
	ob1.divide();
	ob2.divide();

	
}

