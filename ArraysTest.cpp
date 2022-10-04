// This small project is designed for practice and simple time comparison
// beetwen 2 containers: unique_ptr based and vector based.
// The whole lifecycle of a class object is observed in local scope numerous times.
// Base type of a single element was chosen to be int.

#include "stdafx.h"

int main()
{
	int n{ 0 };
	static const int count{ 1000 };
	static const int multiplier{ 1000000 };									// For converting to microseconds

	std::cout << "\n\nEnter the number of elements in the array: ";
	std::cin >> n;
	std::cout << "\n";

	unsigned int clock1, clock2, clock3;
	unsigned int res1 = 0;
	unsigned int res2 = 0;

	for (int i = 0; i < count; i++)
	{
		// Time measurement for a raw pointer object
		clock1 = clock();
		{
			Data elem1(n);
			init(elem1);
		}
		clock2 = clock();
		// Same for a vector object
		{
			VecData elem2(n);
			initVec(elem2);
		}
		clock3 = clock();

		res1 += clock2 - clock1;
		res2 += clock3 - clock2;
	}

	long double rres1 = static_cast<long double>(res1) * multiplier / CLOCKS_PER_SEC / count;
	long double rres2 = static_cast<long double>(res2) * multiplier / CLOCKS_PER_SEC / count;

	std::cout << "Elapsed time, microseconds: " << rres1 << "\n";
	std::cout << "Elapsed time, microseconds: " << rres2 << "\n";

    return 0;
}

