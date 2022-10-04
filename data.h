// This header contains the Data class descriptins and basic operations
// Default number of elements = 10

#pragma once

#include <memory>
#include <stdexcept>
#include <vector>

// A class for simple containing of a dynamic int array
class Data {
public:
	Data();
	Data(int n);
	const int size() const { return sz; };
	int& operator[](const int i);
private:
	std::unique_ptr<int[]> arr = nullptr;													// A simple custom container for data
	int sz{ 0 };																			// Size of the array
	static const int default_sz{ 10 };														// A constant for default size
};

// Vector-based class for the same purpose
class VecData {
public:
	VecData();
	VecData(int n);
	int size() const { return arr.size(); };
	int& operator[](const int i);
private:				
	std::vector<int> arr;
	static const int default_sz{ 10 };
};

// The inializer for contaner
int init(Data& elem);
int initVec(VecData& elem);