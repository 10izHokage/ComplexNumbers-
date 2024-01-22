#include "Complex.cpp"
#include <iostream>

int main(){
	ComplexNumbers<double> c = "1.5+2.11i";
	c.show();
	ComplexNumbers<int> c1 = "1+2i";
	c1.show();
	ComplexNumbers<float> c2 = "1.5+2.11i";
	c2.show();
	ComplexNumbers<double> c3 = "1.5+2.1i";
	c3.show();
}