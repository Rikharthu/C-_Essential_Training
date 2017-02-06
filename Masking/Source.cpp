#include <cstdio>
#include <iostream>


using namespace std;

int main(int argc, char** argv) {

	short mysteriousValue = 0;	// ????
	short mask = 1;				// 0001

	if ((mysteriousValue & mask) != 0) {
		// if mysteriousValue is not zero
		// ???? & 0001 = 0001 (1) or 0000 (0)
		cout << "mysteriousValue is not 0" << endl;
	}
	else {
		cout << "mysteriousValue is 0" << endl;
	}

	getchar();
	return 0;
}