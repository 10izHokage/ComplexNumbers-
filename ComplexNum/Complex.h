#pragma once
#include <string>
#include <sstream>
#include <regex>
template<typename T>
class ComplexNumbers {
private:
	T real;
	T imaginary;

public:
	ComplexNumbers(T real, T imaginary) : real(real), imaginary(imaginary) {}

	template< std::size_t L >
	ComplexNumbers(const char(&ComplexNum)[L]) {
		std::string str = ComplexNum;
		std::istringstream iss(str);
		T re, im;
		char sign;
		iss >> re>>sign>>im;
		real = re;
		imaginary = (sign == '+') ? im : -1 * im;
	};

	T getRealPart();
	T getImaginaryPart();

	void setRealPart(T number);
	void setImaginaryPart(T number);

	ComplexNumbers operator+(const ComplexNumbers& other);
	ComplexNumbers operator-(const ComplexNumbers& other);
	ComplexNumbers operator*(const ComplexNumbers& other);
	ComplexNumbers operator/(const ComplexNumbers& other);

	bool operator==(const ComplexNumbers& other);
	bool operator!=(const ComplexNumbers& other);

	bool operator==(T number);
	bool operator!=(T number);

	ComplexNumbers comp_exp(int exp);

	double comp_module();

	void show();
};