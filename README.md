# ArraysTest
A small project for training purpose.

The first (and primary) point was to gain a little practical experience while exercising myself with classes and STL built-in containers.
For a test subject a simple class was written using 2 similar methods of the data storage: a custom container via unique_ptr and STL vector.

No divine purpose was pursued. Likewise, a lot of simplifications were admitted.

Input: number of elemetns.
Output: the average lifecycle time of the object of each class.

The base element type: int;
Number of elements stored: up to user;
Measurements' scope: the whole lifecycle of a class object (constuction - initialization - destruction);
Amount of measurements: 1000 (count const);
Initialization: via built-in rand() function.
