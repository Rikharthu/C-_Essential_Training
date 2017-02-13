#include <cstdio>
#include <iostream>
#include <string>
#include "Functions.h"
using namespace std;

// in C++ everything must be declared BEFORE IT IS USED:

// simple function - pass by value
int square(int number) {
	cout << "In square(): " << &number << endl;
	return number*number;
}

// Pass-by-Reference with Pointer Arguments
void squarePointers(int * pNumber) {  // Function takes an int pointer (non-const)
	cout << "In squarePointers(): " << pNumber << endl;  // 0x22ff1c
	*pNumber *= *pNumber;      // Explicit de-referencing to get the value pointed-to
}

// Pass-by-Reference with Reference Arguments
void squareReferences(int & rNumber) {  // Function takes an int reference (non-const)
	cout << "In squareReferences(): " << &rNumber << endl;  // 0x22ff1c
	rNumber *= rNumber;        // Implicit de-referencing (without '*')
}

// when acting on large objects such as classes and strings, use const references, to prevent copying
void stringFunction(const string *fs) {
	printf("value is %s\n", fs->c_str());
	// ( pointer->method == (*pointer).method )
	printf("value is %s\n", (*fs).c_str());
}

void staticFunction() {
	// Automatic storage (default) is stored on the stack, which is created
	// fresh for each infocation of the function.
	// so the value of the variable is not carried over from invocation to invocation.
	// Static - is not stored on the stack and is persisten for the life of the entire process
	// so the value will be carried from invocation to invocation
	static int i = 5;
	printf("i is %d\n", i);
	i += 42;
	printf("i is %d\n", i);
}

// return static
// const - to prevent from being edited in the caller since we return a reference
const string & staticStringRef() {
	static string s = "This is a static string";
	return s;
}

void func() {
	puts("this is func()");
}

int main(int argc, char**argv) {

	int a = 4;
	square(a);
	squarePointers(&a);
	squareReferences(a);
	cout << a << endl;

	int i = 20;
	printf("i=%d\n", i);
	func(i);
	printf("i=%d\n", i);

	string s = "HALLO";
	stringFunction(&s);

	staticFunction();
	staticFunction();

	// Function pointers
	void(*fp)() = func;
	// same
	//void(*fp)() = &func;
	fp();
	// same
	//(*fp)();

	getchar();
	return 0;
}