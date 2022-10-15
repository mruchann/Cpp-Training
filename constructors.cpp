#include <iostream>

// copy constructors and move constructors will be in a seperate future file.

// if we do not have any constructors, default constructor will be created. -> Entity e;
// if we have at least one constructor with an argument, we must write a constructor with no parameter.
// you cannot use a constructor like Entity e(); -> you can use like Entity* e = new Entity();

using namespace std;

class Entity {
private:
    int X, Y;

public:
    Entity() // does not have return type.
    {
        X = 0; 
        Y = 0;
    }
    
    // Entity() {} // -> default constructor
    
    Entity(int x, int y)
    {
        X = x;
        Y = y;
    }
    
    void Print(){
        cout << X << " " << Y << endl;
    }
    
};

// if you delete static, you'll get an error.

class Log
{
/*
private:
    Log() {} // meaning creating objects are not allowed. use with static functions of course.

*/

public:
    // Log() = delete; // this line means I don't want a default constructor.
    int a;
    static void Write() // static is useful when we don't want to create an instance of a class, just using functions
    { 
    // static provides us to use Write() function without creating an object.
    // if we don't use static and write Log::Write(), we'll get an error.
    // cannot reach member variables if we use static keyword.
    // cout <<  a << endl;
    }
};

int main() {
    Entity e;  //default constructor
    e.Print();
    // Log l;
    Log::Write(); // we can only reach Write by using Log::
    return 0;
}
