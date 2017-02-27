#pragma once
#include <math.h>
#include <iostream>
using namespace std;

class ComplexNumber {
private:
	double re, im;
public:
	ComplexNumber(double re, double im) {
		this->re = re;
		this->im = im;
	}
	double getReal() {
		return re;
	}

	double getImaginary() {
		return im;
	}
	double getAbsolute() {
		return sqrt(pow(re,2) + pow(im,2));
	}
	void print() {
		cout << "Real = " << re << ", Imaginary = " << im << ", Absolute = "<<getAbsolute()<<endl;
	}

	ComplexNumber& operator + (ComplexNumber rhs) {
		re += rhs.re;
		im += rhs.im;
		return *this;
	}
};