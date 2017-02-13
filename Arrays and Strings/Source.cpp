#include <cstdio>
#include <iostream>
using namespace std;

// C-style arrays and strings (not STL)
int main(int argc, char**argv) {

	int ia[5];
	ia[0] = 1;
	// same, since arrays can be accessed as a pointer
	*ia = 1;
	// create a pointer and assign the address of the array
	int * ip = ia;
	// point to second element:
	++ip;
	*ip = 2;
	*(++ip) = 3;


	// initialize array
	int ia2[5] = { 1,2,3,4,5 };

	// C-String is an array of characters:
	char s[] = { 's','t','r','i','n','g',0 }; // 0 - string end, terminator (null-terminated string)
	printf("String is: %s\n", s);
	char s2[] = "string2";
	printf("Second string is: %s\n", s2);

	puts("Printing each character separately:");
	for (int i = 0; s[i]; ++i) { // s[i] is true as long as it is not 0
		cout << s[i] << endl;
	}

	puts("Iterating over string array as a pointer:");
	// inialize a new pointer at array address, check if it doesnt point to 0 and increase pointer
	for (char * cp = s; *cp; ++cp) {
		cout << *cp << endl;
	}

	// foreach loop
	for (char c : s) {
		// will print that extra "0" at the end, if not handled
		if (c == 0) break;
		printf("cha is %c\n", c);
	}

	getchar();
	return 0;
}