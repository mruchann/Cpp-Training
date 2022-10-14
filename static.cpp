#include <iostream>
#define LOG(x) std::cout << x << std::endl

// static keyword is incredibly useful for constant data among instances.

// in C++, structs and classes are pretty same.
// in C, you cannot write functions in a struct etc.

// Two ways to reach static variables in a class: e.x or Entity::x. Latter makes more sense.
// You can still reach a static variable by an instance as well. 

void print() // `static` keyword makes invisible to static.cpp
{

}

extern int x; // we include that 5 value from print.cpp if `int x = 5`.
// if `static x = 5`, it wouldn't be visible to this file.

class Entity {
public:
    static int x, y;
    
    static void Print() // this function only access static variables.
    {
        std::cout << x << ", " << y << std::endl;
    }
};
// `static` is like writing the function outside of the class.
/*
static void Print() // makes sense to raise an error.
    {
        std::cout << x << ", " << y << std::endl;
    }
*/ // if we give Entity e parameter + e.y and e.y, it would look like a non-static method when it's compiled. 

// Methods are actually functions with hidden class instance parameters, like in Go.
// Static functions cannot reach not-static members, since they don't have the hidden class instance parameter.

// Define static variables, it's compulsory.
// there won't be an allocation when we create a class instance, for x and y.
int Entity::x;
int Entity::y;

// x and y are belong to a namespace-like thing, they are not ordinary class members.
// the alternatives might be global/static global variables.

int main()
{
    //Entity e1;
    Entity::x = 1; // = e1.x = 1;
    Entity::y = 2; // = e1.y = 2;
    //Entity e2;
    Entity::x = 3; // = e2.x = 3, 
    Entity::x = 5; // = e2.y = 5;
    Entity::Print(); // = e1.Print(); // 3, 5
    Entity::Print(); // = e2.Print(); // 3, 5
}