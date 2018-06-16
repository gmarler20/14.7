#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
using namespace std;
class Complex
{
public:
	void add(Complex one, Complex two);
	void subtract(Complex one, Complex two);
	void multiply(Complex one, Complex two);
	void divide(Complex one, Complex two);
	void abs(Complex& ob);
	string toString(double a, double b);

	Complex(double a, double b);
	Complex(double a);
	Complex();

	double getRealPart();
	double getImaginaryPart();
	double operator +(const Complex& ob);
	double operator -(const Complex& ob);
	double operator *(const Complex& ob);
	double operator /(const Complex& ob);
	double operator +=(const Complex& ob);
	double operator -=(const Complex& ob);
	double operator *=(const Complex& ob);
	double operator /=(const Complex& ob);
	double operator [](const Complex& ob);
	Complex& operator ++();
	Complex& operator --();
	friend Complex& operator++(Complex &);
	friend Complex& operator++(Complex &, int);
	friend Complex& operator--(Complex &);
	friend Complex& operator--(Complex &, int);
	friend Complex& operator++(Complex &);


private:
	double realpart;
	double imaginepart;
	





};
#endif

