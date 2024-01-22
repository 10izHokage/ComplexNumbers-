#include "Complex.h"
#include <iostream>
#include <cassert>
using namespace std;

void Test_getRealPart() {
	ComplexNumbers num(2.5, 1.0);
	assert(num.getRealPart() == 2.5);
	cout << "OK" << endl;
}

void Test_getImaginarylPart() {
	ComplexNumbers num(2.5, 1.0);
	assert(num.getImaginaryPart() == 1.0);
	cout << "OK" << endl;
}

void Test_Set() {
	ComplexNumbers num(2.5, 1.0);
	num.setRealPart(2.1);
	num.setImaginaryPart(1.5);
	assert(num.getRealPart() == 2.1);
	assert(num.getImaginaryPart() == 1.5);
	cout << "OK" << endl;
}

void Test_Sum() {
	ComplexNumbers num1(2.5, 1.0), num2(2.1, 1.5);
	ComplexNumbers sum(4.6, 2.5);
	assert(num1 + num2 == sum);
	cout << "OK" << endl;
}

void Test_Dif() {
	ComplexNumbers num1(2.5, 1.0), num2(2.1, 1.5);
	ComplexNumbers dif(0.4, -0.5);
	assert(num1 - num2 == dif);
	cout << "OK" << endl;
}

void Test_Multipli() {
	ComplexNumbers num1(2.5, 1.0), num2(2.1, 1.5);
	ComplexNumbers multipli(3.75, 5.85);
	assert(num1 * num2 == multipli);
	cout << "OK" << endl;
}

void Test_Division() {
	ComplexNumbers num1(2.5, 1.0), num2(2.5, 1.0);
	ComplexNumbers division(1, 0);
	assert(num1 / num2 == division);
	cout << "OK" << endl;
}

void Test_Equality() {
	ComplexNumbers num1(2.5, 1.0), num2(2.5, 1.0), num3(3.2, 4.0);
	double number = 7;
	assert(num1 == num2);
	assert(num1 != num3);
	assert(num1 != number);
	cout << "OK" << endl;
}

void Test_Exp() {
	ComplexNumbers num(2.5, 1.0);
	ComplexNumbers exp(5.25, 5);
	assert(num.comp_exp(2) == exp);
	cout << "OK" << endl;
}

void Test_Module() {
	ComplexNumbers num(3.0, 4.0);
	assert(num.comp_module() == 5);
	cout << "OK" << endl;
}

int main() {
	Test_getRealPart();
	Test_getImaginarylPart();
	Test_Set();
	Test_Sum();
	Test_Dif();
	Test_Multipli();
	Test_Division();
	Test_Equality();
	Test_Exp();
	Test_Module();
	return 0;
}