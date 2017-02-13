#pragma once
#include <cstdio>
#include <string>

void func(int &i) {
	i = 73;
	printf("value is %d\n", i);
}

void funcConst(const int &i) {
	//i = 73; // error: read-only variable
	printf("value is %d\n", i);
}

