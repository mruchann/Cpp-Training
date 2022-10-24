#include <iostream>

// classes can relate each other
// common functionality, subclasses, parent or base class
// avoids code duplication, kinda template

class Entity // we'll simulate a game
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

// players move, and have a position X and Y.
// we may copy paste all the functionality from Entity but we don't have to.

// Player have everything that Entity has.

// Player class can reach public members of Entity class.

// Parent > Friend xd

class Player : public Entity
{
public:
    const char* Name;

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

// sizeof(player) = sizeof(2 floats) + sizeof(1 char*)
// compiler directly copies the content.

int main()
{
    Player player;
    player.Move(5,5); // actually we used a function defined in Entity class.
    player.PrintName();
    player.X = 2;
    return 0;
}

// polymorphism intuition is gained.
// Player is a superset of Entity.
// parametre Entity ise bile Player kabul ediyor falan.