#include <iostream>
#include "ComplexNumber.h"
using namespace std;

void main() {
	ComplexNumber i1 = ComplexNumber(3, 4);
	i1.print();

	ComplexNumber i2 = ComplexNumber(2, -7);
	i2.print();

	ComplexNumber i3 = i1 + i2;
	i3.print();

	getchar();
}