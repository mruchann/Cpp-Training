#include <iostream> // includes std object.
#include "Log.h" // a function should be declared before it is used.

int main(){
    Log("Hello World!");
    return 0;
}

// Insertion operator -> '<<'

// cout << "Hello World!" << endl;

// std::cout << "Hello World!" << std::endl;

// $ g++ HelloWorld.cpp Log.cpp -> compile them together
// $ ./a.out
