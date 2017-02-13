#include <cstdio>
#include <iostream>
using namespace std;

//++ See "Arrays and Strings" for more
int main(int argc, char**argv) {
	char s[] = { 's','t','r','i','n','g',0 };
	// inialize a new pointer at array address, check if it doesnt point to 0 and increase pointer
	// in C++ 0 is always "false", while all other values are "true"
	for (char * cp = s; *cp; ++cp) {
		cout << *cp << endl;
	}
	
	getchar();
	return 0;
}