// `static` keyword outside of a class or struct: variable or function definition is visible to only one file.

// `static` keyword inside of a class or struct: only one variable within that name in the class, every instance can
// access it.

// `static` keyword hides that identifier name or function definition to outside of the .cpp file.
// we can use `extern` keyword to include variables outside of that .cpp file.

// if we define something twice, we'll get duplicate error; however, if we use `static` keyword for one of these, 
// we won't get error.

// static + extern

#include <iostream>
#define LOG(x) std::cout << x << std::endl

int x = 5;

void print()
{

}