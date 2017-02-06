#include <cstdio>
#include <iostream>


using namespace std;

/* Unlike normal variables, which store values,
pointers store a memory address instead.
Naming convention: Include a "p" or "ptr" as prefix or suffix
*/


// Pass-by-Reference with Pointer Arguments
void squarePointers(int * pNumber) {  // Function takes an int pointer (non-const)
	cout << "In square(): " << pNumber << endl;  // 0x22ff1c
	*pNumber *= *pNumber;      // Explicit de-referencing to get the value pointed-to
}

// Pass-by-Reference with Reference Arguments
void squareReferences(int & rNumber) {  // Function takes an int reference (non-const)
	cout << "In square(): " << &rNumber << endl;  // 0x22ff1c
	rNumber *= rNumber;        // Implicit de-referencing (without '*')
}

int squareConst(const int number) {
	// number *= number;  // error: assignment of read-only parameter
	return number * number;
}

int squareNonConst(int number) {  // non-const parameter
	number *= number;
	return number;
}

int squareConstRef(const int & number) {  // const reference
	return number * number;
}

int squareNonConstRef(int & number) {  // non-const reference
	return number * number;
}

// return value by reference using references
int & squareRef(int & rNumber) {
	cout << "In squareRef(): " << &rNumber << endl;  // 0x22ff14
	rNumber *= rNumber;
	return rNumber;
}

// return value by reference using pointers
int * squarePtr(int * pNumber) {
	cout << "In squarePtr(): " << pNumber << endl;  // 0x22ff10
	*pNumber *= *pNumber;
	return pNumber;
}


int main(int argc, char** argv) {

	// Declaring pointers
	int *ptr;
	// place * before each pointer variable
	int *p1, *p2, x;    // p1 and p2 are int pointers. x is an int


						// Initializing Pointers via the Address-Of Operator (&)
	int number = 88;     // An int variable with a value
	int * pNumber;       // Declare a pointer variable called pNumber pointing to an int (or int pointer)
						 // use address-of operator (&) to get variable's address
	pNumber = &number;   // Assign the address of the variable number to pointer pNumber
	int * pAnother = &number; // Declare another int pointer and init to address of the variable number

	cout << "number: " << number << endl;
	cout << "&number: " << &number << endl;
	cout << "pNumber: " << pNumber << endl;
	// use dereference operator (*) to get variable's value that the pointer is referencing to
	cout << "*pNumber: " << *pNumber << endl;


	// Pointer types
	int i = 88;
	double d = 55.66;
	int * iPtr = &i;    // int pointer pointing to an int value
	double * dPtr = &d; // double pointer pointing to a double value

						//iPtr = &d;   // ERROR, cannot hold address of different type
						//dPtr = &i;   // ERROR
						//iPtr = i;    // ERROR, pointer holds address of an int, NOT int value

	int j = 99;
	iPtr = &j;  // You can change the address stored in a pointer


	number = 88;    // Declare an int variable and assign an initial value
	pNumber = &number;  // assign the address of the variable number to pointer pNumber

	cout << pNumber << endl;  // Print content of pNumber (0x22ccf0)
	cout << &number << endl;  // Print address of number (0x22ccf0)
	cout << *pNumber << endl; // Print value pointed to by pNumber (88)
	cout << number << endl;   // Print value of number (88)

	*pNumber = 99;            // Re-assign value pointed to by pNumber
	cout << pNumber << endl;  // Print content of pNumber (0x22ccf0)
	cout << &number << endl;  // Print address of number (0x22ccf0)
	cout << *pNumber << endl; // Print value pointed to by pNumber (99)
	cout << number << endl;   // Print value of number (99)
							  // The value of number changes via pointer

	cout << &pNumber << endl; // Print the address of pointer variable pNumber (0x22ccec)


							  // REFERENCES
	puts("\nREFERENCES");
	// in expression, & denotes the address-of operator, which returns the address of a variable
	// however, when & is used in a declaration (function parameters included), it declares a reference variable
	// It is used to provide another name, or another reference to an existing variable
	number = 88;
	int & refNumber = number;
	cout << number << endl;    // Print value of variable number (88)
	cout << refNumber << endl; // Print value of reference (88)

	refNumber = 99;            // Re-assign a new value to refNumber
	cout << refNumber << endl;
	cout << number << endl;    // Value of number also changes (99)

	number = 55;               // Re-assign a new value to number
	cout << number << endl;
	cout << refNumber << endl; // Value of refNumber also changes (55)

	// references must be initialized during declaration and cannot be changed

	// pass by reference using pointers:
	number = 8;
	cout << "In main(): " << &number << endl;  // 0x22ff1c
	cout << number << endl;   // 8
	squarePointers(&number);          // Explicit referencing to pass an address
	cout << number << endl;   // 64

	// pass by reference using references:
	number = 8;
	cout << "In main(): " << &number << endl;  // 0x22ff1c
	cout << number << endl;  // 8
	squareReferences(number);          // Implicit referencing (without '&')
	cout << number << endl;  // 64

	// Return value by reference
	// ACHTUNG! You should not pass Function's local variable as return value by reference!
	puts("\nReturn value by reference:");
	int number1 = 8;
	cout << "In main() &number1: " << &number1 << endl;  // 0x22ff14
	int & result = squareRef(number1);
	cout << "In main() &result: " << &result << endl;  // 0x22ff14
	cout << result << endl;   // 64
	cout << number1 << endl;  // 64

	int number2 = 9;
	cout << "In main() &number2: " << &number2 << endl;  // 0x22ff10
	int * pResult = squarePtr(&number2);
	cout << "In main() pResult: " << pResult << endl;  // 0x22ff10
	cout << *pResult << endl;   // 81
	cout << number2 << endl;    // 81


	getchar();
	return 0;
}