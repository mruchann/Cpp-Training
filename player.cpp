// Function within the class -> method

// transform function into method

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Player 
{
public:
    int x, y;

    void Move(int update_x, int update_y)
    {
        x += update_x;
        y += update_y;
    }
};

/*
void Move(Player& player, int update_x, int update_y){ // this function will change the object, use references or pointers
    player.x += update_x;
    player.y += update_y;
}
*/

int main()
{
    Player player;
    player.x = 0;
    player.y = 0;
    LOG(player.x);
    LOG(player.y);
    //Move(player, 1, 2);
    player.Move(1, 2); // much more readable
    LOG(player.x);
    LOG(player.y);
    return 0;
}