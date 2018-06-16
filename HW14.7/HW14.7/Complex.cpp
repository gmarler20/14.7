#include "stdafx.h"
#include "Complex.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

Complex::Complex()
{
	realpart = 0;
	imaginepart = 0;
}

Complex::Complex(double a) {
	realpart = a;
	imaginepart = 0;
}

Complex::Complex(double a, double b) {
	realpart = a;
	imaginepart = b;
}

double Complex::getRealPart() {
	return realpart;
}

double Complex::getImaginaryPart() {
	return imaginepart;
}

void Complex::add(Complex one, Complex two) {
	one.getRealPart + two.getRealPart;
	one.getImaginaryPart + two.getImaginaryPart;
}

void Complex::subtract(Complex one, Complex two) {
	one.getRealPart - two.getRealPart;
	one.getImaginaryPart - two.getImaginaryPart;
}

void Complex::multiply(Complex one, Complex two) {
	one.getRealPart * two.getRealPart;
	one.getImaginaryPart * two.getImaginaryPart;
}

void Complex::divide(Complex one, Complex two) {
	one.getRealPart / two.getRealPart;
	one.getImaginaryPart / two.getImaginaryPart;
}

void Complex::abs(Complex& ob) {
	double abs = sqrt(pow(ob.getRealPart, 2) + pow(ob.getImaginaryPart, 2);
}

string Complex::toString(double a, double b) {

	string real = to_string(a);
	string imagine = to_string(b);
	string i = "i";
	string space = " ";
	return real + space + imagine + i;
}

double Complex::operator +(const Complex& ob) {
	Complex brandnew;
	brandnew.realpart = realpart + ob.realpart;
	brandnew.imaginepart = imaginepart + ob.imaginepart;
	return brandnew.realpart && brandnew.imaginepart;
}


double operator -(const Complex& ob)
{
	Complex brandnew;
	brandnew.realpart = realpart - ob.realpart;
	brandnew.imaginepart = imaginepart - ob.imaginepart;
	cout << brandnew.imaginepart;
}
double operator *(const Complex& ob)
{
	Complex brandnew;
	brandnew.realpart = realpart * ob.realpart;
	brandnew.imaginepart = imaginepart * ob.imaginepart;
	cout << brandnew.imaginepart;
}

double operator /(const Complex& ob) {
	Complex brandnew;
	brandnew.realpart = realpart / ob.realpart;
	brandnew.imaginepart = imaginepart / ob.imaginepart;
	cout << brandnew.imaginepart;

}

// Am confused as to what goes under these functions. 
double operator +=(const Complex& ob)
{
return  ob;

}
double operator -=(const Complex& ob) {

	return ob;

}
double operator *=(const Complex& ob) {
	
	return ob;
}
double operator /=(const Complex& ob) {
	return ob;
}
double operator [](const Complex& ob) {
	return ob;
}
Complex& operator ++() {
	return ob;
}
Complex& operator --() {
	return ob;
}
friend Complex& operator++(Complex &) {
	return ob;
}
friend Complex& operator++(Complex &, int) {
	return ob;
}
friend Complex& operator--(Complex &) {
	return ob;
}
friend Complex& operator--(Complex &, int) {
	return ob;
}
friend Complex& operator++(Complex &) {
	return ob;
}