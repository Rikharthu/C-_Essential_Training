#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	puts("Hello World!");
	cout << "using cout\n";
	// printf doesn't put a new line ("\n")
	printf("Please type Your name: ");

	int x;
	x = 42;
	printf("x is %d\n", x = x*(42 + 12));

	// wait for input before closing
	getchar();
	return 0;
}