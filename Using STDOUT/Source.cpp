#include <cstdio>
#include <iostream>
using namespace std;

// cout and etc
int main(int argc, char**argv) {

	// << is a bitwise shift-left operator, but it is overloaded by cout class
	cout << "Hello, World! " << 2 * 7 << " another string" << endl;

	cout << "What is Your name?" << endl;
	char input[100];
	// read input into char buffer
	cin >> input;
	for (char * ic = input; *ic; ++ic) {
		cout << *ic;
	}
	// cin considers  spaces (whitespaces, tabs, new-line..) as terminating the value being extracted,
	// and thus extracting a string means to always extract a single word
	cout << endl << "Hello, " << input << endl;
	// to extract sentences use function getline(cin,<string variable);
	cout << "Write a sentence:";
	char sentence[100];
	//getline(cin, sentence);
	getchar();
	return 0;
}