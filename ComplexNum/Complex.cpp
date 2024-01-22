#include "Complex.h"
#include <cmath>
#include <iostream>

template<typename T>
T ComplexNumbers<T>::getRealPart() {
	return real;
}

template<typename T>
T ComplexNumbers<T>::getImaginaryPart() {
	return imaginary;
}

template<typename T>
void ComplexNumbers<T>::setRealPart(T number) {
	real = number;
}

template<typename T>
void ComplexNumbers<T>::setImaginaryPart(T number) {
	imaginary = number;
}

template<typename T>
ComplexNumbers<T> ComplexNumbers<T>::operator+(const ComplexNumbers<T>& other) {
	double real_sum = real + other.real;
	double im_sum = imaginary + other.imaginary;

	return ComplexNumbers<T>(real_sum, im_sum);
}

template<typename T>
ComplexNumbers<T> ComplexNumbers<T>::operator-(const ComplexNumbers<T>& other) {
	double real_dif = real - other.real;
	double im_dif = imaginary - other.imaginary;

	return ComplexNumbers<T>(real_dif, im_dif);
}

template<typename T>
ComplexNumbers<T> ComplexNumbers<T>::operator*(const ComplexNumbers<T>& other) {
	double real_multipli = (real * other.real) - (imaginary * other.imaginary);
	double im_multipli = (imaginary * other.real) + (real * other.imaginary);

	return ComplexNumbers<T>(real_multipli, im_multipli);
}

template<typename T>
ComplexNumbers<T> ComplexNumbers<T>::operator/(const ComplexNumbers<T>& other) {
	double real_division = ((real * other.real) + (imaginary * other.imaginary)) / ((other.real * other.real) + (other.imaginary * other.imaginary));
	double im_division = (imaginary * other.real - real * other.imaginary) / ((other.real * other.real) + (other.imaginary * other.imaginary));

	return ComplexNumbers<T>(real_division, im_division);
}

template<typename T>
bool ComplexNumbers<T>::operator==(const ComplexNumbers<T>& other) {
	return (fabs(real - other.real) < 1e-7 && fabs(imaginary - other.imaginary) < 1e-7);
}

template<typename T>
bool ComplexNumbers<T>::operator!=(const ComplexNumbers<T>& other) {
	return !(fabs(real - other.real) < 1e-7 && fabs(imaginary - other.imaginary) < 1e-7);
}

template<typename T>
bool ComplexNumbers<T>::operator==(T number) {
	return (fabs(real - number) < 1e-7);
}

template<typename T>
bool ComplexNumbers<T>::operator!=(T number) {
	return !(fabs(real - number) < 1e-7);
}

template<typename T>
ComplexNumbers<T> ComplexNumbers<T>::comp_exp(int exp) {
	double modul = sqrt(pow(real, 2) + pow(imaginary, 2));
	double arg = atan(imaginary / real);
	double real_pow = pow(modul, exp) * cos(exp * arg);
	double im_pow = pow(modul, exp) * sin(exp * arg);

	return ComplexNumbers<T>(real_pow, im_pow);
}

template<typename T>
double ComplexNumbers<T>::comp_module() {
	return sqrt((real * real) + (imaginary * imaginary));
}

template<typename T>
void ComplexNumbers<T>::show() {
	std::cout << real << (imaginary < 0 ? "-" : "+") << abs(imaginary) << "i" << std::endl;
}