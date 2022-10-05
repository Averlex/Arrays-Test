# ArraysTest
#### A small project for training purpose.

The first (and primary) point was to gain a little practical experience while exercising myself with classes and STL built-in containers.
For a test subject a simple class was written using 2 similar methods of the data storage: a custom container via unique_ptr and STL vector.

No divine purpose was pursued. Likewise, a lot of simplifications were admitted.

## Input and output data
 - Input: number of elemetns.
 - Output: the average lifecycle time of the object of each class, also the contents of arrays.

## Specifications
1) The base element type: int;
2) Number of elements stored: up to user;
3) Measurements' scope: the whole lifecycle of a class object (constuction - initialization - destruction);
4) Amount of measurements: 1000 (count const);
5) Initialization: via built-in rand() function.

## Conclusion
I may add that the vector realization was slower on an old laptop of mine by approximately 4 times (6-7 on a small numbers of elements).
Using modern hardware makes the vector realization almost equal to a unique_ptr one though it's not significant.
