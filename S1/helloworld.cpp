#include "log.h"
#include "common.h"
#include "common.h"

// This doesn't give an error surprisingly. Modern C++ handles it.

int main(){
    Log("Hello World!");
    return 0;
}

// Insertion operator -> '<<'

// cout << "Hello World!" << endl;

// std::cout << "Hello World!" << std::endl;

// $ g++ HelloWorld.cpp Log.cpp -> compile them together
// $ g++ *.cpp -> compile all the .cpp files
// $ ./a.out
