#include <cstdio>
#include <iostream>
using namespace std;

// inline - take foo()'s definition and whenever anybode calls foo()
// put that definiton right there instead of calling foo(); (copy-paste)
inline void foo() {
	int blah = 5;
	cout << blah << endl;
}

void bar() {
	{
		int blah = 5;
		cout << blah << endl;
	}
}

int main(int argc, char**argv) {

	// without inline: (execution slower, file size smaller)
	foo();
	foo();
	foo();

	// with inline: (execution faster, code take more space)
	/*
	{
		int blah = 5;
		cout << blah << endl;
	}
	{
		int blah = 5;
		cout << blah << endl;
	}
	{
		int blah = 5;
		cout << blah << endl;
	}
	*/

	getchar();
	return 0;
}