#include <cstdio>
#include <iostream>

#define FOO
#include "Conditional.h"
#include "Macros.h"

#define PI 3.14159
#define HELLO_STRING "Hello, World"
#undef PI
#ifndef PI
	#define PI 100500
#endif

#define CUBE(x) ((x)*(x)*(x))

using namespace std;

int cube(int x) {
	return x*x*x;
}

int increment() {
	static int i = 42;
	i += 5;
	printf("returning: %d\n", i);
	return i;
}

int main(int argc, char ** argv) {
	// PI doesn't have an address. all PI occurences will be replaced by a literal value
	double pi = PI;
	cout << "Pi=" << pi << endl;
	printf("the string is %s\n", HELLO_STRING);

	int a = 4;
	int b = CUBE(a + 1); // b = ((a + 1) * (a + 1) * (a + 1));

	// post-increment
	a = 3; 
	b = cube(a++); // a  = 4,  b = 27 a = 3; 
	printf("a=%d, b=%d\n", a, b);	
	a = 3;
	b = CUBE( a++ ); // a  = 6,  b  = 27, ((a++)*(a++)*(a++)); increments 3 times!
	printf("a=%d, b=%d\n", a, b);
	a = 3;
	// same as CUBE(a++)
	b = ((a++)*(a++)*(a++));
	printf("a=%d, b=%d\n", a, b);

	// pre-increment:
	a = 3;
	b = cube(++a);
	printf("a=%d, b=%d\n", a, b);
	a = 3;
	b = CUBE(++a); // a  = 6,  b  = 27
	printf("a=%d, b=%d\n", a, b);

	// conditonal
	printf("Number is %d\n", NUMBER);

	// MACROs
	int x = 50;
	printf("max of %d and %d is: %d\n", x, increment(), MAX(x, increment()));
	printf("max of %d and %d is: %d\n", x, increment(), MAX(x, increment()));

	x = 5;
	int y = 10;
	printf("x is %d, y is %d\n", x, y);
	SWAP(x, y);
	printf("x is %d, y is %d\n", x, y);


	getchar();
	return 0;
}
