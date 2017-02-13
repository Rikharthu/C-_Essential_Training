#include <cstdio>
#include <iostream>
using namespace std;

// C-style arrays and strings (not STL)
int main(int argc, char**argv) {

	int x = 42;
	int y = 324;

	if (x > y) {
		puts("x > y");
	}
	else if (x < y) {
		puts("x < y");
	}
	else {
		puts("x = y");
	}

	// 0 is assumed to be "false"
	int a = 0;
	if (a) {
		puts("a is not 0, true");
	}
	else {
		puts("a is 0, false");
	}

	// conditonal expression
	printf("the greater ir: %d\n", x > y ? x : y);


	// switch
	const int iONE = 1;
	const int iTWO = 2;
	const int iTHREE = 3;
	const int iFOUR = 4;
	x = 3;
	// switch requires constants
	switch (x) {
		case iONE:
			puts("one");
			break;
		case iTWO:
			puts("two");
			break;
		case iTHREE:
			puts("three");
			break;
		case iFOUR:
			puts("four");
			break;
		default:
			puts("unknown value");
	}

	getchar();
	return 0;
}