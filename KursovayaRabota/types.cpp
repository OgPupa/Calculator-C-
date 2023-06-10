#include "classes.h"
#include <iostream>
#include <cmath>
using namespace std;

void Type1::show() {
	cout << "0 = 0" << endl;
}
void Type1::get_answer() {
	cout << "The solution is any number x" << endl;
}


Type2::Type2(double a1) {
	A = a1;
}
void Type2::show() {
	cout << A << "x^2 = 0" << endl;
}
void Type2::get_answer() {
	cout << "The solution is x = 0" << endl;
}


Type3::Type3(double c1) {
	C = c1;
}
void Type3::get_answer() {
	cout << "There are no roots" << endl;
}
void Type3::show() {
	cout << C << " = 0" << endl;
}


Type4::Type4(double a1, double c1) {
	A = a1;
	C = c1;
}
void Type4::get_answer() {
	double k = ((-1) * C) / A;
	if (k >= 0) {
		double x1 = sqrt(k);
		double x2 = sqrt(k) * (-1);
		cout << "There are no roots: " << endl << "X1 = " << x1 << endl << "X2 = "
			<< x2 << endl;
	}
	else {
		cout << "There are no roots" << endl;
	}
}
void Type4::show() {
	cout << "The equation " << A << "*x^2 + " << C << " = 0" << endl;
}


Type5::Type5(double b1, double c1)
{
	B = b1;
	C = c1;
}
void Type5::get_answer()
{
	double answer;
	answer = (-C) / B;
	cout << "The root of the equation : " << -C / B << endl;
}
void Type5::show()
{
	cout << "The equation: " << B << "x" << " + " << C << " = 0" << endl;
}


Type6::Type6(double a1, double b1, double c1)
{
	A = a1;
	B = b1;
	C = c1;
}
void Type6::get_answer()
{
	double D;
	D = B * B - 4 * A * C;
	if (D == 0) {
		cout << "The equation has no real roots: " << (-B) / (2 * A) << endl;
	}
	else
	{
		if (D > 0) {

			double x1, x2;
			x1 = (-B + sqrt(D)) / (2 * A);
			x2 = (-B - sqrt(D)) / (2 * A);

			cout << "The root of the equation: " << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;

		}
		else
		{
			cout << "D < 0, there are no roots" << endl;
		}
	}
}
void Type6::show()
{
	cout << "The equation: " << A << "x^2 + " << B << "x + " << C << " = 0" << endl;
}


Type7::Type7(double b1) {
	B = b1;
}
void Type7::get_answer() {
	cout << "The root of the equation: x = 0" << endl;
}
void Type7::show() {
	cout << "Equation " << B << "*x = 0" << endl;
}

Type8::Type8(double a1, double b1) {
	A = a1;
	B = b1;
}
void Type8::get_answer() {
	double x = ((-1) * B) / A;
	cout << "Roots of the equation: " << endl;
	cout << "X1 = 0" << endl << "X2 = " << x << endl;
}
void Type8::show() {
	cout << "Equation " << A << "*x^2 + " << B << "*x = 0 " << endl;
}