#include "io.h"

// Printing the whole array
int print_arr(Data& elem) {
	if (elem.size() < 0) {
		throw (std::out_of_range("print_arr(): Negative index of the array.\n"));
	}

	std::cout << "\nNumber of elements: " << elem.size() << ".\n";
	if (elem.size() == 0) {
		std::cout << "The array is empty!\n";
	}

	for (int i = 0; i < elem.size(); i++) {
		std::cout << i + 1 << ") " << elem[i] << "\n";
	}

	return 0;
}

// Printing the whole array
int print_Vec(VecData& elem) {
	if (elem.size() < 0) {
		throw (std::out_of_range("print_arr(): Negative index of the array.\n"));
	}

	std::cout << "\nNumber of elements: " << elem.size() << ".\n";
	if (elem.size() == 0) {
		std::cout << "The array is empty!\n";
	}

	for (int i = 0; i < elem.size(); i++) {
		std::cout << i + 1 << ") " << elem[i] << "\n";
	}

	return 0;
}