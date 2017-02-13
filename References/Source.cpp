#include <cstdio>
using namespace std;

int main(int argc, char**argv) {
	int x = 7;
	int *ip = &x;
	// reference must be initialized when it is defined
	int &y = x;

	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of &x is %d\n", &x);
	printf("The value of &y is %d\n\n", &y);

	x = 42;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of &x is %d\n", &x);
	printf("The value of &y is %d\n\n", &y);

	y = 56;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of &x is %d\n", &x);
	printf("The value of &y is %d\n\n", &y);

	int z = 149;
	// ip now points to z, x and y unchanged
	ip = &z;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of &x is %d\n", &x);
	printf("The value of &y is %d\n", &y);
	printf("The value of z is %d\n", z);
	printf("The value of &z is %d\n\n", &z);

	y = z;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);
	printf("The value of &x is %d\n", &x);
	printf("The value of &y is %d\n", &y);
	printf("The value of z is %d\n", z);
	printf("The value of &z is %d\n\n", &z);

	getchar();
	return 0;
}