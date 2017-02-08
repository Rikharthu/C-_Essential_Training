#include <cstdio>
#include <iostream>

#include "Dog.h"

// comment and uncomment different behaviours to observe different implementations
//#include "DogBehaviour.h"
#include "DebugDogBehaviour.h"

using namespace std;

int main(int argc, char** argv) {

	Dog dog = Dog("Rex", 13);

	dog.bark();

	Dog * dogPtr = new Dog("Rudzis", 26);
	dogPtr->bark();
	(*dogPtr).bark();

	getchar();
	return 0;
}