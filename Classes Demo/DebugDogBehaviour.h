#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include "Dog.h"

#ifndef DOG_BEHAVIOUR_INCLUDED
#define DOG_BEHAVIOUR_INCLUDED


using namespace std;

// implement methods defined at Dog.h
void Dog::bark() {
	cout <<name << " says: Woof!" << endl;
}

Dog::Dog(string vards, int vecums) {
	name = vards;
	age = vecums;
	printf("New dog was born: %s, %d\n", name, age);
}

#endif // !DOG_BEHAVIOUR_INCLUDED