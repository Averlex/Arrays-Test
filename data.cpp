#include "data.h"

// Default constructor, initializes with default_sz
Data::Data() : sz{ default_sz }, arr{ std::make_unique<int[]>(default_sz) } {};

// Basic constructor
Data::Data(int n) : sz{ n }, arr{ std::make_unique<int[]>(n) } {};

// operator[] overload
int& Data::operator[](const int i) { 
	if ((i < 0) || (i >= sz))
		throw (std::out_of_range("The index of addressable element is out of range!\n"));

	return arr[i]; 
}



// Default constructor, initializes with default_sz
VecData::VecData() { arr.assign(default_sz, 0); };

// Basic constructor
VecData::VecData(int n) { arr.assign(n, 0); };

// operator[] overload
int& VecData::operator[](const int i)  { return arr.at(i); }

// Initializer
int init(Data& elem) {
	for (int i = 0; i < elem.size(); i++) {
		elem[i] = rand() % 100;
	}

	return 0;
}

// Vector initializer
int initVec(VecData& elem) {
	for (int i = 0; i < elem.size(); i++) {
		elem[i] = rand() % 100;
	}

	return 0;
}