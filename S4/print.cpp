#include <iostream>
#define LOG(x) std::cout << x << std::endl

/*static*/ void print() // `static` keyword makes invisible to static.cpp
{

}

extern int x; // we include that 5 value from static.cpp if `int x = 5`.
// if `static x = 5`, it wouldn't be visible to this file.

int main()
{
    LOG(x);
}