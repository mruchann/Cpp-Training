#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void increment(int& value){
    value++;
}

int main(){
    void* p;
    // int& reff; you can't do that with references, they should be initialized with a variable.
    int x = 11;
    int* ptr = &x;
    int& ref = x; // ref is actually not a variable, it doesn't occupy space in memory. It is a reference to x.
    // Also you can't change the reference value. ref is bounded to x.
    ref = 99;
    increment(ref); // works
    increment(x); // works
    LOG(x); // x = 101
}

