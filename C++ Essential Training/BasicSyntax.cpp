#include <cstdio>
#include <iostream>
using namespace std;

// if function is called before it is implemented (foo() defined after main(),
// then it must declared at the top
void BasicIO();
void randomDemo();
void definingVariables();
void pointers();

int main(int argc, char** argv) {
	//BasicIO();
	//randomDemo();
	//definingVariables();


	// wait for input before closing
	getchar();
	return 0;
}

void definingVariables() {
	int i;
	i = 7;

	const int e = 4;
	//e = 15;

	printf("The value is %d\n", i = i + 4);
	printf("i=%d\n", i);
}

void pointers() {

}

void BasicIO() {
	puts("Hello World!");
	cout << "using cout\n";
	cout << "using cout" << endl;
	// printf doesn't put a new line ("\n")
	printf("Please type Your name: ");

	int x;
	x = 42;
	printf("x is %d\n", x = x*(42 + 12));
}

void randomDemo() {

	int v1 = rand() % 100;         // v1 in the range 0 to 99
	int v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
	int v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014
	cout << v1 << "\t" << v2 << "\t" << v3 << endl;

	double someValue = (double)rand() / RAND_MAX; // [0;1]
	double mean = 10;
	double quantile = -log(someValue)*mean;
	cout << quantile << endl;

	// TODO use random seed


}