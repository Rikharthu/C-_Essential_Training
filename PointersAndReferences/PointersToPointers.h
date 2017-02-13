#pragma once
#include <cstdio>
#include <iostream>
#include <stdlib.h>


using namespace std;

class PointersToPointers {
public:
	static void show() {
		// pointer-to-pointer
		int **ipp;
		int i = 5, j = 6, k = 7;
		int *ip1 = &i, *ip2 = &j;

		// ipp points to ip1 which points to i
		// *ipp is ip1, and **ipp is i, or 5
		ipp = &ip1;
		printf("i=%d, j=%d, k=%d\n*ip1=%d, *ip2=%d\nipp=%d, *ipp=%d, **ipp=%d\n\n", i, j, k, *ip1, *ip2, ipp, *ipp, **ipp);
		// we've changed the pointer pointed to by ipp (that is, ip1) to contain a copy of ip2, so that it (ip1) now points at j
		*ipp = ip2;
		printf("i=%d, j=%d, k=%d\n*ip1=%d, *ip2=%d\nipp=%d, *ipp=%d, **ipp=%d\n\n", i, j, k, *ip1, *ip2, ipp, *ipp, **ipp);
		// we've changed the pointer pointed to by ipp (that is, ip1 again) to point to k
		*ipp = &k;
		printf("i=%d, j=%d, k=%d\n*ip1=%d, *ip2=%d\nipp=%d, *ipp=%d, **ipp=%d\n\n", i, j, k, *ip1, *ip2, ipp, *ipp, **ipp);
	}
};