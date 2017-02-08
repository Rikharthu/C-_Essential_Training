#pragma once
#include <iostream>
#include <string>

#include "Dog.h"

#ifndef DOG_BEHAVIOUR_INCLUDED
#define DOG_BEHAVIOUR_INCLUDED


using namespace std;

// implement methods defined at Dog.h
void Dog::bark() {
	cout << "Woof!" << endl;
}

Dog::Dog(string vards, int vecums) {
	name = vards;
	age = vecums;
}

#endif // !DOG_BEHAVIOUR_INCLUDED