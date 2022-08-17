#include <iostream>

// short for enumeration, set of values (integers).
// used for grouping variables.

// by default they are 4 bytes integers, however we can change it by `:`
// enum can only have char(one byte int) and int.
enum Example : unsigned char // we changed the type
{
    A = 1, B = 5, C, D = 6 // uppercase
}; // by default, it increments the value in each next variable, starting from last given variable's value

// we don't need these, we can give values in enum.
// lowercase
/*
int a = 0; 
int b = 1;
int c = 2;
*/

int main()
{
    // now we can use Example type as if it's int.
    Example value = B; // makes sense if we compare values in a small range.
    // we can only assign A, B or C to value variable, this might be useful.
    if (value == 1) // same with (value == A)
    {
        std::cout << "Yes, it's 1!" << std::endl;
    }
}