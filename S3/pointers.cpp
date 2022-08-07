// NULL = nullptr = 0

#include <iostream>
#include <cstring>

#define LOG(x) std::cout << x << std::endl;

int main(){
    void* ptr = nullptr;
    char* buffer = new char[8]; // new returns char *, not void *
    memset(buffer, 0, 8); // sets all the elements to 0
    delete[] buffer; // [] indicates buffer is an array.
}