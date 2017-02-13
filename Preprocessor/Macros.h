#pragma once

#define MAX(a,b) (a>b? a:b)

// \ - line continuation
#define SWAP(a,b) do{		\
					a ^= b;	\
					b ^= a;	\
					a ^= b;	\
				}while(0)