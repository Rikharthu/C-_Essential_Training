#include <cstdio>
#include <iostream>
using namespace std;

string toBinary(int a);

int main(int argc, char** argv) {
	// set console color (black background(0), green foreground(A))
	system("Color 0A");

	// Bitwise AND
	puts("Bitwise AND");
	printf("0 & 0 = %d\n", 0 & 0);
	printf("0 & 1 = %d\n", 0 & 1);
	printf("1 & 0 = %d\n", 1 & 0);
	printf("1 & 1 = %d\n", 1 & 1);
	// in C++ int commonly has 16 bits => 16 AND operations will be performed
	int a = 92;    // in binary: 0000000001011100
	int b = 101;    // in binary: 0000000001100101
	int c = a & b;  // result:    0000000001000100, or 68 in decimal.
	printf("%d = %s\n", a, toBinary(a));
	printf("%d & %d = %d\n", a, b, a&c);
	// One of the most common uses of bitwise AND is to select a particular bit 
	// (or bits) from an integer value, often called masking

	// Masking
	puts("\nMasking");
	// access the least significant bit in a variable x, and store the bit in another variable y
	int x = 5;       // binary: 101
	int y = x & 1;   // now y == 1
	x = 4;           // binary: 100
	y = x & 1;       // now y == 0


	// Bitwise OR	
	puts("\nBitwise AND");
	printf("0 | 0 = %d\n", 0 | 0);
	printf("0 | 1 = %d\n", 0 | 1);
	printf("1 | 0 = %d\n", 1 | 0);
	printf("1 | 1 = %d\n", 1 | 1);
	a = 92;    // in binary: 0000000001011100
	b = 101;    // in binary: 0000000001100101
	c = a | b;  // result:    0000000001111101, or 125 in decimal.
	printf("%d = %s\n", a, toBinary(a));
	printf("%d | %d = %d\n", a, b, a | c);
	// Bitwise OR is often used to make sure that given bit is set to 1
	// For example, to copy the bits from a into b, while making sure the lowest bit is set to 1
	a = a | 1; // in binary: 0000000001011101
	printf("a | 1 = %d\n", a);

	getchar();
	return 0;
}

string toBinary(int a) {

	return "NOT IMPLEMENTED";
}