#include <iostream>

// used when destroying objects.

// new -> delete -> destructor is called

// when a scope of a variable or objects ends, destructor is called

class Entity {
private:
    int X, Y;

public:

    ~Entity() // tilde -> destructor
    {
        std::cout << "Deleted Entity!" << std::endl;
    }

    Entity() // does not have return type.
    {
        X = 0; 
        Y = 0;
        std::cout << "Created Entity!" << std::endl;
    }

    void Print(){
        std::cout << X << " " << Y << std::endl;
    }
    
};

// to observe destructor better, we'll use a function.

void Function(){
    Entity e;
    e.Print();
    // e.~Entity(); // almost never used, it automatically does it for you!
}

int main(){
    Function();
    return 0;
}

/*
Created Entity!
0 0
Deleted Entity!
*/